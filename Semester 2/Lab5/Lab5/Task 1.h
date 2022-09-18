/*
#pragma once
// The FeetInches class holds distances or measurements
// expressed in feet and inches.

class FeetInches
{
private:
	int feet; // To hold a number of feet
	int inches; // To hold a number of inches
	void simplify(); // Defined in Task 1.cpp
public:
	// Constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}
	// Copy Constructor
	FeetInches(const FeetInches &copy)
	{
		feet = copy.feet;
		inches = copy.inches;
	}

	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}

	void setInches(int i)
	{
		inches = i;
		simplify();
	}

	// Accessor functions
	int getFeet() const
	{
		return feet;
	}

	int getInches() const
	{
		return inches;
	}
};
*/
