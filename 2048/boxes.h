class Boxes
{
public:
	int value;
	int coordinate[2];

	Boxes(int _value, int x, int y);

	int GetValue();

	void SetValue(int _value);

	int* GetCoord();

	void SetCoord(int x, int y);

	void DisplayInformation();

};