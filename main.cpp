#include <iostream>
#include "recipe.h"

using namespace std;

int main(void) {
	
	recipe soup("Black Bean Soup with Orange");

	//soup.setName("Black Bean Soup with Orange");
	cout << soup.getName() << endl;

	soup.addIngredient("water", 2.25, "cups");
	soup.addIngredient("onion", 1.5, "cups");
	soup.addIngredient("black beans", 2.625, "cans");
	soup.addIngredient("orange juice", 8, "ounces");
	soup.addIngredient("cilantro", .25, "cups");
	
	for (int i = 0;i < soup.getIngredientsCount();i++)
	{
		cout << soup.getIngredient(i) << endl;
	}
	

	return 0;
}