#pragma once
#include <string>

using namespace std;

class ingredient
{
public:
	ingredient();
	ingredient(string nm, float qty, string qtyType);
	~ingredient();

	void setName(string nm);
	string getName();
	void setQuantity(float qty);
	float getQuantity();
	void setQuantityType(string qtyType);
	string getQuantityType();

private:
	string name;
	float quantity;
	string quantityType;
public:
	string getIngredient();
};

