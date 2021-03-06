#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>   // Needed for strlen and strcpy

// Constant for the description's default size
const int DEFAULT_SIZE = 51;

class InventoryItem
{
private:
	char *description;  // The item description
	double cost;        // The item cost
	int units;          // Number of units on hand

						// Private member function.
	void createDescription(int size, char *value);


public:
	// Constructor #1
	InventoryItem();

	// Constructor #2
	InventoryItem(char *desc);

	// Constructor #3
	InventoryItem(char *desc, double c, int u);

	// Destructor
	//~InventoryItem();

	// Mutator functions
	void setDescription(char *d);


	void setCost(double c);


	void setUnits(int u);

	//added to remove units in a sale
	void sellUnits(int u);

	// Accessor functions
	const char *getDescription() const;

	double getCost() const;

	int getUnits() const;

};

#endif