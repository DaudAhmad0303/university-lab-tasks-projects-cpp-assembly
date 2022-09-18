#include<conio.h>
#include<iostream>
using namespace std;
class Term
{
public:
	int coeff;
	int expo;
	Term* next_term;
	Term();
};
Term::Term()
{
	coeff = 0;
	expo = 0;
	next_term = NULL;
}
class List
{
private:
	Term* first_term;
public:
	List();
	Term* insertTerm(int, int);
	List addPolynomial(List);
	int Count();
	int countTerms(Term*);
	void sort();
	void display();
};
List::List()
{
	first_term = NULL;
}
int List::Count()
{
	return countTerms(first_term);
}
int List::countTerms(Term* header)
{
	Term* rp = header;
	if (rp == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + countTerms(rp->next_term);
	}
}
void List::sort()
{
	int j;
	Term* check_ptr;
	int count = Count();
	Term** arr = new Term * [count];
	check_ptr = first_term;
	for (j = 0; j < count; j++)
	{
		arr[j] = check_ptr;
		check_ptr = check_ptr->next_term;
	}
	for (int i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count; ++j)
		{
			if (arr[i]->expo == arr[j]->expo)
			{
				arr[i]->coeff += arr[j]->coeff;
				delete arr[j];
				arr[j] = arr[count - 1];
				--count;
			}
		}
	}
	for (j = 1; j < count; j++)
	{
		check_ptr = arr[j];
		int i = j - 1;
		while (i >= 0 && arr[i]->expo < check_ptr->expo)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = check_ptr;
	}
	first_term = arr[0];
	for (j = 0; j < count - 1; j++)
	{
		arr[j]->next_term = arr[j + 1];
		arr[j]->next_term = NULL;
		delete[] arr;
	}
}

Term* List::insertTerm(int c, int e)
{
	Term* temp, * nt;
	temp = new Term;
	nt = new Term;
	temp = first_term;
	if (temp == NULL)
	{
		nt = new Term;
		nt->coeff = c;
		nt->expo = e;
		nt->next_term = NULL;
		first_term = nt;
		return nt;
	}
	else
	{
		nt->coeff = c;
		nt->expo = e;
		while (temp->next_term != NULL)
		{
			temp = temp->next_term;
		}
		temp->next_term = nt;
		return nt;
	}
}
List List::addPolynomial(List poly)
{
	Term* poly1, * poly2;
	poly1 = new Term;
	poly2 = new Term;
	poly1 = first_term;
	poly2 = poly.first_term;
	List result;
	Term* r;
	result.first_term = new Term;
	r = result.first_term;
	while (poly1->next_term != NULL && poly2->next_term != NULL)
	{
		//if exponent of 1st polynomial is greater,
		//then append it in result
		if (poly1->expo > poly2->expo)
		{
			r->expo = poly1->expo;
			r->coeff = poly1->coeff;
			poly1 = poly1->next_term;		//manipulate
		}
		//if exponent of 2nd polynomial is greater, 
		//then append it in result
		else if (poly2->expo > poly1->expo)
		{
			r->expo = poly2->expo;
			r->coeff = poly2->coeff;
			poly2 = poly2->next_term;		//manipulate
		}
		//if exponent of both polynomials are same,
		//then add their coefficients in result
		else if (poly1->expo == poly2->expo)
		{
			r->expo = poly1->expo;
			r->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next_term;		//manipulate
			poly2 = poly2->next_term;		//manipulate
		}
		r->next_term = new Term;
		r = r->next_term;
	}
	while (poly1->next_term != NULL || poly2->next_term != NULL)
	{
		if (poly1->next_term != NULL)
		{
			if (poly1->expo == poly2->expo)
			{
				r->expo = poly2->expo;
				r->coeff = poly2->coeff + poly1->coeff;
				poly1 = poly1->next_term;
			}
			else
			{
				r->expo = poly1->expo;
				r->coeff = poly1->coeff;
				poly1 = poly1->next_term;
			}
		}
		if (poly2->next_term != NULL)
		{
			if (poly1->expo == poly2->expo)
			{
				r->expo = poly2->expo;
				r->coeff = poly2->coeff + poly1->coeff;
				poly2 = poly2->next_term;
			}
			else
			{
				r->expo = poly2->expo;
				r->coeff = poly2->coeff;
				poly2 = poly2->next_term;
			}
		}
		r->next_term = new Term;
		r = r->next_term;
	}

	//sort();
	return result;

}
void List::display()
{
	Term* current_term = first_term;
	while (current_term != NULL)
	{
		if (current_term->coeff >= 0)
		{
			cout << " +" << current_term->coeff << "x^" << current_term->expo;
			current_term = current_term->next_term;
		}
		else
		{
			cout << " " << current_term->coeff << "x^" << current_term->expo;
			current_term = current_term->next_term;
		}
	}
	cout << endl;
}
//Driver Program
void main()
{
	List px, qx, rx;
	px.insertTerm(2, 3);
	px.insertTerm(-2, 2);
	px.insertTerm(1, 1);
	px.insertTerm(-5, 0);
	cout << "P(x) = ";
	px.display();
	
	qx.insertTerm(-7, 6);
	qx.insertTerm(4, 5);
	qx.insertTerm(-5, 2);
	qx.insertTerm(-7, 1);
	qx.insertTerm(5, 0);
	cout << "Q(x) = ";
	qx.display();
	
	
	rx = px.addPolynomial(qx);
	cout << "R(x) = P(x) + Q(x) = ";
	rx.display();

	_getch();

}