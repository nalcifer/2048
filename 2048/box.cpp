#include "box.h"
#include <iostream>

Box::Box(int _value, int x, int y) : value(_value)
{
	coordinate[0] = x;
	coordinate[1] = y;
}

int Box::GetValue()
{
	return value;
}

void Box::SetValue(int _value)
{
	value = _value;
}

int* Box::GetCoord()
{
	return coordinate;
}

void Box::SetCoord(int x, int y)
{
	coordinate[0] = x;
	coordinate[1] = y;
}

void Box::DisplayInformation()
{
	std::cout << "Case Valeur : " << value << std::endl << " De coordonnée : " << std::endl << "  x : " << coordinate[0] << std::endl << "  y : " << coordinate[1];
}