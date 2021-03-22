#include <iostream>
using namespace std;

struct Kniga {
    char reg_nom[4];
    char author[20];
    char title[20];
    int year;
    char izdatel[20];
    char country[20];
};

void sort(Kniga *author, int size) {
    for (int i = size-1; i > 0; i--) {
        for (int j=0; j < i; j++) {
            if (strcmp(author[j].author, author[j + 1].author) > 0)
                swap(author[j], author[j + 1]);
        }
    }
};

int main()
{
    
    Kniga bibl[100];
    int k, i;
    cout << "Kol-vo knig: ";
    cin >> k;
    for (i = 0; i < k; i++) {
        cout << "\nKniga number: " << i + 1;
        cout << "\nVvedite reg nomer: ";
        cin >> bibl[i].reg_nom;
        cout << "\nVvedite avtora: ";
        cin >> bibl[i].author;
        cout << "\nVvedite nazvanie: ";
        cin >> bibl[i].title;
        cout << "\nVvedite god: ";
        cin >> bibl[i].year;
        cout << "\nVvedite izdatel: ";
        cin >> bibl[i].izdatel;
        cout << "\nVvedite country:";
        cin >> bibl[i].country;
    }

    sort(bibl, k);

    int god;
    cout << "=====================" << endl;
    cout << "Year = ";
    cin >> god;
    
    for (i = 0; i < k; i++) {
        if (god <= bibl[i].year) {

            cout << "\nReg nomer: "<<bibl[i].reg_nom;
            cout << "\nAuthor: "<<bibl[i].author;
            cout << "\nTitle: "<<bibl[i].title;
            cout << "\nYear: "<<bibl[i].year;
            cout << "\nIzdatel: "<<bibl[i].izdatel;
            cout << "\nCountry: "<<bibl[i].country;
            cout << "===================";
        }
    }
}

