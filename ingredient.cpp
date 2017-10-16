#include "ingredient.h"
#include <string>

using namespace std;

ingredient::ingredient()
{
	name = "";
	quantity = 0.0f;
	quantityType = "";
}


ingredient::ingredient(string nm, float qty, string qtyType)
{
	name = nm;
	quantity = qty;
	quantityType = qtyType;
}

ingredient::~ingredient()
{
}


void ingredient::setName(string nm)
{
	name = nm;
}


string ingredient::getName()
{
	return name;
}


void ingredient::setQuantity(float qty)
{
	quantity = qty;
}


float ingredient::getQuantity()
{
	return quantity;
}


void ingredient::setQuantityType(string qtyType)
{
	quantityType = qtyType;
}


string ingredient::getQuantityType()
{
	return quantityType;
}


string ingredient::getIngredient()
{
	int num=0;
	int den=0;

	double wholeNum=0.0f, dec = 0.0f, tempMul = 0.0f;

	string wholePart = "", decPart = "";

	//convert float into fraction
	//get whole number and decimal
	dec = modf(quantity, &wholeNum);

	//convert the decimal part to a fraction
	//assumes denominator values are 2, 3, 4, or 8
	//loop through each numerator until it is evenly divisible
	//loop counter is denominator; whole division number is numerator
	for (int i = 1;i <= 8;i++)
	{
		tempMul = dec * i;

		//if there's no remainder, then build the fraction
		if ((tempMul - (long)tempMul) == 0)
		{
			//get the numerator
			num = (int)tempMul;
			//get the denomenator
			den = i;
			decPart = to_string((int)num) + "/" + to_string((int)den) + " ";
			break;
		}
	}

	//build string
	if (wholeNum != 0)
	{
		wholePart = to_string((int)wholeNum) + " ";
	}
	if (dec == 0)
	{
		decPart = "";
	}

	return wholePart + decPart + quantityType + " " + name;
}
