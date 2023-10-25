#include "boxes.h"

Boxes::Boxes(int _value, int x, int y)
{
	coordinate[0] = x;
	coordinate[1] = y;
}

int Boxes::GetValue()
{
	return value;
}

void Boxes::SetValue(int _value)
{
	value = _value;
}

int* Boxes::GetCoord()
{
	return coordinate;
}

void Boxes::SetCoord(int x, int y)
{
	coordinate[0] = x;
	coordinate[1] = y;
}

void Boxes::DisplayInformation()
{
	std::cout << "Case Valeur : " << value << std::endl << " De coordonnée : " << std::endl << "  x : " << coordinate[0] << std::endl << "  y : " << coordinate[1];
}