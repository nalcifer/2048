class Box;

class Grid
{
private :
	int i;
	int j;
	int k;

public :
	
	Box* tab[4][4];
	Box* free_tab[16];

	Grid();

	void display();
	void debut();
};

/*

tab de box ou tab d'adress de box

comment on init les box, boucle for ?

*/