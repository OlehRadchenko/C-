#include <iostream>
using namespace std;
int main() {
    int osoby, max, wylosowano1[4], wylosowano2[4], pkt[4], pkt_og[4], remis_2;
    string nazwa[4], osoba_win[6];
    int point = 0, point2 = 1;
    srand(time(NULL));
start:
    cout << "Ile osob ma grac? (od 2 do 4) ";
    cin >> osoby;
    if (osoby > 4 || osoby < 2)
        goto start;
    for (int i = 0; i < osoby; i++) {
        cout << "Podaj nick dla gracza " << i + 1 << "\n";
        cin >> nazwa[i];
    }
    for (int rundy = 0; rundy < 6; rundy++) {
        cout << "\n";
        for (int runda = 0; runda < osoby; runda++) {
            wylosowano1[runda] = rand() % 6 + 1, wylosowano2[runda] = rand() % 6 + 1;
            pkt[runda] = wylosowano1[runda] + wylosowano2[runda];
            if (wylosowano1[runda] == 1 && wylosowano2[runda] == 1)
                pkt[runda] = 0;
            else if (rundy > 0) {
                pkt_og[runda] += pkt[runda];
            }
            else {
                pkt_og[runda] = pkt[runda];
            }
            cout << "Runda " << rundy + 1 << ", gracz " << nazwa[runda] << " wyrollowal numery " << wylosowano1[runda] << " i " << wylosowano2[runda] << ", wynik pkt: " << pkt[runda] << ", a ogolne pkt to: " << pkt_og[runda] << endl;
            if (pkt[runda] == 12) {
                wylosowano1[runda] = rand() % 6 + 1, wylosowano2[runda] = rand() % 6 + 1;
                pkt_og[runda] += wylosowano1[runda] + wylosowano2[runda] + 1;
                cout<<"Gracz "<<nazwa[runda]<<" wyrollowal dwie 6. Drugi raz wyrollowal "<< wylosowano1[runda] << " i " << wylosowano2[runda] << ", a ogolne pkt to: " << pkt_og[runda] << endl;
            }
            else if (wylosowano1[runda] % 2 == 0 && wylosowano2[runda] % 2 == 0) 
                pkt_og[runda] += 1;
        }
        max = 0;
        for (int a = 0; a < osoby; a++) {
            for (int b = 0; b < osoby; b++) {
                if (nazwa[a] != nazwa[b] && pkt[a] == pkt[b]) {
                    while (point == 0) {
                        remis_2 = a;
                        point += 1;
                    }   
                    if (point2 % 2 == 0) {
                        point = 0;
                        pkt_og[a] -= pkt[a];
                        pkt[a] = pkt[a] - wylosowano1[a] - wylosowano2[a];
                        wylosowano1[a] = rand() % 6 + 1, wylosowano2[a] = rand() % 6 + 1;
                        pkt[a] = wylosowano1[a] + wylosowano2[a];
                        if (wylosowano1[a] == 1 && wylosowano2[a] == 1)
                            pkt[a] = 0;
                        pkt_og[a] += pkt[a];
                        cout << "Runda " << rundy + 1 << ", gracz " << nazwa[a] << " ponownie wyrollowal numery " << wylosowano1[a] << " i " << wylosowano2[a] << ", wynik pkt: " << pkt[a] << ", a ogolne pkt to: " << pkt_og[a] << endl;
                        if (pkt[a] == 12) {
                            wylosowano1[a] = rand() % 6 + 1, wylosowano2[a] = rand() % 6 + 1;
                            pkt_og[a] += wylosowano1[a] + wylosowano2[a] + 1;
                            cout << "Gracz " << nazwa[a] << " wyrollowal dwie 6. Drugi raz wyrollowal " << wylosowano1[a] << " i " << wylosowano2[a] << ", a ogolne pkt to: " << pkt_og[a] << endl;
                        }
                        else if (wylosowano1[a] % 2 == 0 && wylosowano2[a] % 2 == 0)
                            pkt_og[a] += 1;
                        pkt_og[remis_2] -= pkt[remis_2];
                        pkt[remis_2] = pkt[remis_2] - wylosowano1[remis_2] - wylosowano2[remis_2];
                        wylosowano1[remis_2] = rand() % 6 + 1, wylosowano2[remis_2] = rand() % 6 + 1;
                        pkt[remis_2] = wylosowano1[remis_2] + wylosowano2[remis_2];
                        if (wylosowano1[remis_2] == 1 && wylosowano2[remis_2] == 1)
                            pkt[remis_2] = 0;
                        pkt_og[remis_2] += pkt[remis_2];
                        cout << "Runda " << rundy + 1 << ", gracz " << nazwa[remis_2] << " ponownie wyrollowal numery " << wylosowano1[remis_2] << " i " << wylosowano2[remis_2] << ", wynik pkt: " << pkt[remis_2] << ", a ogolne pkt to: " << pkt_og[remis_2] << endl;
                        if (pkt[remis_2] == 12) {
                            wylosowano1[remis_2] = rand() % 6 + 1, wylosowano2[remis_2] = rand() % 6 + 1;
                            pkt_og[remis_2] += wylosowano1[remis_2] + wylosowano2[remis_2] + 1;
                            cout << "Gracz " << nazwa[remis_2] << " wyrollowal dwie 6. Drugi raz wyrollowal " << wylosowano1[remis_2] << " i " << wylosowano2[remis_2] << ", a ogolne pkt to: " << pkt_og[remis_2] << endl;
                        }
                        else if (wylosowano1[remis_2] % 2 == 0 && wylosowano2[remis_2] % 2 == 0)
                            pkt_og[remis_2] += 1;
                    }
                    point2 += 1;
                }
                else {
                    if (pkt[a] > max) {
                        max = pkt[a];
                        osoba_win[rundy] = nazwa[a];
                    }
                }
            }
        }
        cout << "Wygral w rundzie: " << osoba_win[rundy] << "\n";
    }
    cout << "\n\n\n";
    for (int wynik = 0; wynik < osoby; wynik++)
        cout << nazwa[wynik] << " zdobyl " << pkt_og[wynik] << " punktow\n";
}