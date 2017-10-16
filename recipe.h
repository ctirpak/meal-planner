#pragma once
#include "ingredient.h"

#include <string>
#include <vector>

using namespace std;


class recipe
{
public:
	recipe();
	recipe(string nm);
	~recipe();

	string getName();
	void setName(string);
	
	void addIngredient(string,float,string);
	int getIngredientsCount();

	string getIngredient(int);

private:
	string name;
	vector <ingredient> ingrs;
};

