#include "box.h"
#include <iostream>

Box::Box(int _value, int x, int y) : value(_value)
{
	coordinate[0] = x;
	coordinate[1] = y;

	is_empty = false;
}

int Box::getValue()
{
	return value;
}

void Box::setValue(int _value)
{
	value = _value;
}

int* Box::getCoord()
{
	return coordinate;
}

void Box::setCoord(int x, int y)
{
	coordinate[0] = x;
	coordinate[1] = y;
}

bool Box::getEmpty()
{
	return is_empty;
}

void Box::setEmpty(bool _is_empty)
{
	is_empty = _is_empty;
}

void Box::displayInformation()
{
	std::cout << "Case Valeur : " << value << std::endl << " De coordonn�e : " << std::endl << "  x : " << coordinate[0] << std::endl << "  y : " << coordinate[1];
}