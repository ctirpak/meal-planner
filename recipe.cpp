#include <iostream>
#include <string>
#include "recipe.h"


using namespace std;

recipe::recipe()
{
	name = "";
}

recipe::recipe(string nm)
{
	name = nm;
}

recipe::~recipe()
{
}

void recipe::setName(string nm)
{
	name = nm;
}

string recipe::getName()
{
	return name;
}


void recipe::addIngredient(string nm, float qty, string qt)
{
	//add a new ingredient
	ingrs.push_back(ingredient(nm, qty, qt));
}

int recipe::getIngredientsCount()
{
	return ingrs.size();
}

string recipe::getIngredient(int x)
{
	return ingrs[x].getIngredient();
}



