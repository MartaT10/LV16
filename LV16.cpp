#include <iostream>
#include <string>
using namespace std;

void a_ocjene();
void b_matura();

int main()
{
    //a_ocjene();
    //b_matura();

    return 0;
}

void a_ocjene() {
    /* ruj lis stu pro sij velj ožu tra svi lip
        0   5   0   0   0    5   0   0   4   0
        0   0   0   2   0    0   3   0   0   2
        0   4   2   0   0    0   5   0   4   0  */

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

void b_matura() {
    /*      pon uto sri cet pet sub ned
        MAT 2   1   0.5 0   1.5 0   1
        HJ  1   2   1   2   0   0   1.5
        EJ  1   1.5 0   0   1.5 0   0   */

    string dani[10];
    string predmeti[3];
    float tablica[3][7];
    float ukupno = 0, psati = 168, dsati = 168, b1;
    string predmet = ""; string dan = "";

    for (int i = 0;i < 7;i++) {
        cin >> dani[i];
    }

    for (int i = 0;i < 3;i++) {
        b1 = 0;
        cin >> predmeti[i];
        for (int j = 0;j < 7;j++) {
            cin >> tablica[i][j];
            ukupno += tablica[i][j];
            b1 += tablica[i][j];
        }
        if (b1 < psati) {
            predmet = predmeti[i];
            psati = b1;
        }
    }

    for (int i = 0;i < 7;i++) {
        b1 = 0;
        for (int j = 0;j < 3;j++) {
            b1 += tablica[j][i];
        }
        if (b1 < dsati) {
            dan = dani[i];
            dsati = b1;
        }
    }

    cout << "Ukupno je ucio " << ukupno << " sati.\n";
    cout << "Najmanje je ucio " << predmet << " i to " << psati << " sati.\n";
    cout << "Najmanje je ucio u " << dan << " i to " << dsati << " sati.\n";
  
}