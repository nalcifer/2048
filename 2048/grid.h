class Box;

class Grid
{
private :
	int i;
	int j;
	int k;

public :
	Box* tab[4][4];

	Grid();

	void display();
};

/*

tab de box ou tab d'adress de box

comment on init les box, boucle for ?

*/