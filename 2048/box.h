class Box
{
public:
	int value;
	int coordinate[2];

	Box(int _value, int x, int y);

	int getValue();

	void setValue(int _value);

	int* getCoord();

	void setCoord(int x, int y);

	void displayInformation();

};