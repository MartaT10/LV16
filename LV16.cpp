#include <iostream>
#include <string>
using namespace std;

void a_ocjene();

int main()
{
    a_ocjene();

    return 0;
}

void a_ocjene() {
    string mjeseci[10];
    int tablica[3][10];
    int petice = 0, ocjene = 0;
    float prosjek = 0;

    for (int i = 0;i < 10;i++) {
        cin >> mjeseci[i];
    }

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 10;j++) {
            cin >> tablica[i][j];
        }
    }

    
    for (int i = 0;i < 10;i++) {
        cout << mjeseci[i] << " ";
        for (int j = 0;j < 3;j++) {
            if (tablica[j][i] != 0) {
                cout << tablica[j][i] << " ";
                ocjene++;
                prosjek += tablica[j][i];
            }
            if (tablica[j][i] == 5) {
                petice++;
            }
        }
        cout << endl;
    }
    cout << "Broj petica: " << petice << endl;
    prosjek = prosjek / ocjene;
    cout << "Prosjek: " << prosjek;
    
    if (prosjek < 1.5) {
        cout << " - nedovoljan";
    } else if (prosjek < 2.5) {
        cout << " - dovoljan";
    } else if (prosjek < 3.5) {
        cout << " - dobar";
    } else if (prosjek < 4.5) {
        cout << " - vrlo dobar";
    }
    else {
        cout << " - odlican";
    }


}