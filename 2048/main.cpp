#include <iostream>

using namespace std;

int tab[4][4] = { 0 };


void display() {
    int i, j, k;
    for (i = 0; i < 5; i++) {

        for (k = 0; k < 4; k++) {
            cout << " ----";
            if (k == 3)
                cout << endl;
        }

        if (i < 4) {
            for (j = 0; j < 4; j++) {
                cout << "|  " << tab[i][j] << " ";
                if (j == 3)
                    cout << "|" << endl;
            }
        }

    }
}

int main()
{
    display();
    return 0;
}


/*
[    ][    ][    ][    ]
[    ][    ][    ][    ]
[    ][    ][    ][    ]
[    ][    ][    ][    ]



  ---- ---- ---- ---- 
 |    |    |    |    |
  ---- ---- ---- ---- 
 |    |    |    | 2  |
  ---- ---- ---- ---- 
 |    | 16 |    |    |
  ---- ---- ---- ---- 
 |    |256 |    |2048|
  ---- ---- ---- ---- 

*/