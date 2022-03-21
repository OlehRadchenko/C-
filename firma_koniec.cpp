#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <clocale>

using namespace std;

struct pracownik {
    int ID;
    string imie;
    string nazwisko;
    string stanowisko;
    string forma_zatr;
    float pensja_b;
    float pensja_n;
};

int main()
{
    setlocale(LC_ALL, "Polish");
    int n;
    int juz = 0;
    cout << "Ile będzie pracowników?" << endl;
    cin >> n;
    pracownik* pracownicy = new pracownik[n];
    for (int i = 0; i < n; i++)
    {
        pracownicy[i].ID = i + 1;
        pracownicy[i].imie = "NULL";
    }
    int wybor, pkt;
    int a = 0;
poczatek:
    cout << "1.Dodaj pracownika\n2.Edytuj dane pracownika\n3.Usuń pracownika\n";
    cin >> wybor;
    switch (wybor) {
    case 1: {
        system("cls");
        if (juz == n) {
            cout << "Już masz maksymalną ilość pracowników, wiesz co musisz zrobić ;)" << endl;
        }
        else {

            cout << "Podaj jego imię : ";
            for (int i = 0; i < n; i++) {
                if (pracownicy[i].imie != "NULL") {
                }
                else {
                    pkt = i;
                    break;
                }
            }
            cin >> pracownicy[pkt].imie;

            cout << "Podaj jego nazwisko : ";
            cin >> pracownicy[pkt].nazwisko;

            cout << "Podaj jego stanowisko : ";
            cin >> pracownicy[pkt].stanowisko;

            cout << "Podaj jego formę zatrudnienia : ";
            cin >> pracownicy[pkt].forma_zatr;

            cout << "Podaj jego pensje(brutto) : ";
            cin >> pracownicy[pkt].pensja_b;
            juz++;
            goto napewno;
        }
        break;
    }
    case 2: {
        system("cls");
        cout << "ID\tIMIE\tNAZWISKO\tSTANOWISKO\tFORMA_ZATRUDNIENIA\tPENSJA_BRUTTO\tPENSJA_NETTO\n";
        for (int i = 0; i < n; i++)
        {
            if (pracownicy[i].pensja_b >= 0) {
                pracownicy[i].pensja_n = pracownicy[i].pensja_b - (pracownicy[i].pensja_b * 0.23) / (1.23);
            }
            else {
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (pracownicy[i].imie != "NULL") {
                cout << pracownicy[i].ID << "\t" << pracownicy[i].imie << "\t" << pracownicy[i].nazwisko << "\t" << pracownicy[i].stanowisko << "\t" << pracownicy[i].forma_zatr << "\t" << pracownicy[i].pensja_b << "\t" << pracownicy[i].pensja_n << "\n";
                a = i;
            }
            else if (pracownicy[i + 1].imie != "NULL") {
                cout << pracownicy[i + 1].ID << "\t" << pracownicy[i + 1].imie << "\t" << pracownicy[i + 1].nazwisko << "\t" << pracownicy[i + 1].stanowisko << "\t" << pracownicy[i + 1].forma_zatr << "\t" << pracownicy[i + 1].pensja_b << "\t" << pracownicy[i + 1].pensja_n << "\n";
                a = i;
                i++;
            }
            else {
                a = i;
                break;
            }
        }
        int mod;
        cout << "Jakie ID chcesz zmodyfikować?" << endl;
        cin >> mod;
        if (mod <= a + 1 && mod > 0) {
            mod -= 1;
            cout << "Podaj nowe imie: ";
            cin >> pracownicy[mod].imie;
            cout << "Podaj nowe nazwisko: ";
            cin >> pracownicy[mod].nazwisko;
            cout << "Podaj nowe stanowisko: ";
            cin >> pracownicy[mod].stanowisko;
            cout << "Podaj nową forme zatrudnienia: ";
            cin >> pracownicy[mod].forma_zatr;
            cout << "Podaj nową pensje: ";
            cin >> pracownicy[mod].pensja_b;
            for (int i = 0; i < n; i++)
            {
                if (pracownicy[i].pensja_b >= 0) {
                    pracownicy[i].pensja_n = pracownicy[i].pensja_b - (pracownicy[i].pensja_b * 0, 23) / (1, 23);
                }
                else {
                }
            }
        }
        else {
            cout << "To pole jest puste -_-" << endl;
        }
        goto napewno;
        break;
    }
    case 3: {
        system("cls");
        cout << "ID\tIMIE\tNAZWISKO\tSTANOWISKO\tFORMA_ZATRUDNIENIA\tPENSJA_BRUTTO\tPENSJA_NETTO\n";
        for (int i = 0; i < n; i++)
        {
            if (pracownicy[i].pensja_b >= 0) {
                pracownicy[i].pensja_n = pracownicy[i].pensja_b - (pracownicy[i].pensja_b * 0, 23) / (1, 23);
            }
            else {
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (pracownicy[i].imie != "NULL") {
                cout << pracownicy[i].ID << "\t" << pracownicy[i].imie << "\t" << pracownicy[i].nazwisko << "\t" << pracownicy[i].stanowisko << "\t" << pracownicy[i].forma_zatr << "\t" << pracownicy[i].pensja_b << "\t" << pracownicy[i].pensja_n << "\n";
                a = i;
            }
            else if (pracownicy[i + 1].imie != "NULL") {
                cout << pracownicy[i + 1].ID << "\t" << pracownicy[i + 1].imie << "\t" << pracownicy[i + 1].nazwisko << "\t" << pracownicy[i + 1].stanowisko << "\t" << pracownicy[i + 1].forma_zatr << "\t" << pracownicy[i + 1].pensja_b << "\t" << pracownicy[i + 1].pensja_n << "\n";
                a = i;
                i++;
            }
            else {
                a = i;
                break;
            }
        }
        int del;
        cout << "Jakie ID chcesz usunąć?" << endl;
        cin >> del;
        if (del <= a + 1 && del > 0) {
            del -= 1;
            pracownicy[del].imie = "NULL";
            pracownicy[del].nazwisko = "NULL";
            pracownicy[del].stanowisko = "NULL";
            pracownicy[del].forma_zatr = "NULL";
            pracownicy[del].pensja_b = 0;
            pracownicy[del].pensja_n = 0;
        }
        else {
            cout << "To pole jest puste -_-" << endl;
        }
        goto napewno;
        break;
    }
    default: {
        cout << "Nie ma takiego ;c" << endl;
        goto poczatek;
    }
    }
napewno:
    cout << "Coś jeszcze?(1-Tak, 2-Nie)" << endl;
    cin >> wybor;
    switch (wybor) {
    case 1: {
        goto poczatek;
        break;
    }
    case 2: {
        return 0;
        break;
    }
    default: {
        cout << "Nie ma takiego ;c" << endl;
        goto napewno;
    }
    }
}
