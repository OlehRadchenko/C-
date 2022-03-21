#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <clocale>

using namespace std;

struct postac {
    string name;
    int HP;
    int def;
    int stamina;
    int damage;
    int SKILL[4];
    string SKILL_NAME[4];
};
struct enemy {
    string name;
    int HP;
    int damage;
    int SKILL[4];
    string SKILL_NAME[4];
};
int main()
{
    setlocale(LC_ALL, "Polish");
    postac postac[10];
    enemy enemy[11];

    postac[0] = { "Wiesniak", 85, 0, 80, 40}; postac[1] = {"Mag",125,105,105,66}; postac[2] = {"Wojownik",125,50,90,55}; postac[3] = {"Lowca",80,85,90,60}; postac[4] = {"Rolnik",80,5,50,40}; postac[5] = {"Archer",80,80,90,50}; postac[6] = {"Bandyta",40,10,80,40}; postac[7] = {"Kot",30,90,100,80}; postac[8] = {"Pies",35,90,100,80}; postac[9] = {"TUTEL :DD",40,80,100,80};
    postac[0].SKILL[0] = 20; postac[0].SKILL[1] = 30; postac[0].SKILL[2] = 40; postac[0].SKILL[3] = 50; postac[0].SKILL_NAME[0] = "Atak Pięścią"; postac[0].SKILL_NAME[1] = "Śnieżka"; postac[0].SKILL_NAME[2] = "Atak Głową"; postac[0].SKILL_NAME[3] = "Atak Nogą";
    postac[1].SKILL[0] = 20; postac[1].SKILL[1] = 25; postac[1].SKILL[2] = 30; postac[1].SKILL[3] = 35; postac[1].SKILL_NAME[0] = "Regeneracja"; postac[1].SKILL_NAME[1] = "Otrucie"; postac[1].SKILL_NAME[2] = "Atak Kamieniem"; postac[1].SKILL_NAME[3] = "Atak Patykiem";
    postac[2].SKILL[0] = 25; postac[2].SKILL[1] = 40; postac[2].SKILL[2] = 30; postac[2].SKILL[3] = 40; postac[2].SKILL_NAME[0] = "Atak Patykiem"; postac[2].SKILL_NAME[1] = "Atak Mieczem"; postac[2].SKILL_NAME[2] = "Atak Kamieniem"; postac[2].SKILL_NAME[3] = "Czolg(zbroja)";
    postac[3].SKILL[0] = 20; postac[3].SKILL[1] = 60; postac[3].SKILL[2] = 40; postac[3].SKILL[3] = 25; postac[3].SKILL_NAME[0] = "Atak Kamieniem"; postac[3].SKILL_NAME[1] = "Prędkość"; postac[3].SKILL_NAME[2] = "Termowizja"; postac[3].SKILL_NAME[3] = "Atak Patykiem";
    postac[4].SKILL[0] = 20; postac[4].SKILL[1] = 30; postac[4].SKILL[2] = 40; postac[4].SKILL[3] = 50; postac[4].SKILL_NAME[0] = "Atak Pięścią"; postac[4].SKILL_NAME[1] = "Śnieżka"; postac[4].SKILL_NAME[2] = "Atak Głową"; postac[4].SKILL_NAME[3] = "Atak Nogą";
    postac[5].SKILL[0] = 10; postac[5].SKILL[1] = 15; postac[5].SKILL[2] = 20; postac[5].SKILL[3] = 30; postac[5].SKILL_NAME[0] = "Atak Z Łuku"; postac[5].SKILL_NAME[1] = "Atak Kamieniem"; postac[5].SKILL_NAME[2] = "Atak Pięścią"; postac[5].SKILL_NAME[3] = "Atak Nogą";
    postac[6].SKILL[0] = 20; postac[6].SKILL[1] = 40; postac[6].SKILL[2] = 30; postac[6].SKILL[3] = 50; postac[6].SKILL_NAME[0] = "Atak Pięścią"; postac[6].SKILL_NAME[1] = "Śnieżka"; postac[6].SKILL_NAME[2] = "Atak Kamieniem"; postac[6].SKILL_NAME[3] = "Atak Kosą";
    enemy[0] = { "Giant",150,28 }; enemy[1] = { "Witch",65,15 }; enemy[2] = { "Goblin",20,5 }; enemy[3] = { "szczur",6,1 }; enemy[4] = { "ghost",15,9 }; enemy[5] = { "wilk",20,20 }; enemy[6] = { "niedźwiedź",150,20 }; enemy[7] = { "karakal",120,30 }; enemy[8] = { "krokodyl",99,20 }; enemy[9] = { "Mały Smok",50,30 }; enemy[10] = { "Gigantyczny Smok",300,10 };
    enemy[0].SKILL[0] = 50; enemy[0].SKILL[1] = 40; enemy[0].SKILL[2] = 30; enemy[0].SKILL[3] = 20; enemy[0].SKILL_NAME[0] = "Atak Nogą"; enemy[0].SKILL_NAME[1] = "Atak Pięścią"; enemy[0].SKILL_NAME[2] = "Atak Śnieżką"; enemy[0].SKILL_NAME[3] = "Dmuchnięcie";     enemy[1].SKILL[0] = 10; enemy[1].SKILL[1] = 25; enemy[1].SKILL[2] = 10; enemy[1].SKILL[3] = 20; enemy[1].SKILL_NAME[0] = "Atak Pięścią"; enemy[1].SKILL_NAME[1] = "Otrucie"; enemy[1].SKILL_NAME[2] = "Atak Kamieniem"; enemy[1].SKILL_NAME[3] = "Atak Patykiem";       enemy[2].SKILL[0] = 2; enemy[2].SKILL[1] = 10; enemy[2].SKILL[2] = 12; enemy[2].SKILL[3] = 5; enemy[2].SKILL_NAME[0] = "Atak Pięścią"; enemy[2].SKILL_NAME[1] = "Atak Nogą"; enemy[2].SKILL_NAME[2] = "Atak Kosą"; enemy[2].SKILL_NAME[3] = "Atak Kamieniem";       enemy[3].SKILL[0] = 1; enemy[3].SKILL[1] = 2; enemy[3].SKILL[2] = 3; enemy[3].SKILL[3] = 4; enemy[3].SKILL_NAME[0] = "Atak Ogonem"; enemy[3].SKILL_NAME[1] = "Atak Bezkontaktowy"; enemy[3].SKILL_NAME[2] = "Gryz"; enemy[3].SKILL_NAME[3] = "Wywołanie innych szczurów";       enemy[4].SKILL[0] = 5; enemy[4].SKILL[1] = 10; enemy[4].SKILL[2] = 15; enemy[4].SKILL[3] = 20; enemy[4].SKILL_NAME[0] = "Atak po cichu"; enemy[4].SKILL_NAME[1] = "Podłożenie C4"; enemy[4].SKILL_NAME[2] = "Atak Bezkontaktowy"; enemy[4].SKILL_NAME[3] = "Atak z wystraszeniem";      enemy[5].SKILL[0] = 5; enemy[5].SKILL[1] = 10; enemy[5].SKILL[2] = 15; enemy[5].SKILL[3] = 20; enemy[5].SKILL_NAME[0] = "Atak Ogonem"; enemy[5].SKILL_NAME[1] = "Atak Ogonem"; enemy[5].SKILL_NAME[2] = "Atak Pazurem"; enemy[5].SKILL_NAME[3] = "Gryz";        enemy[6].SKILL[0] = 5; enemy[6].SKILL[1] = 10; enemy[6].SKILL[2] = 20; enemy[6].SKILL[3] = 40; enemy[6].SKILL_NAME[0] = "Dmuchnięcie"; enemy[6].SKILL_NAME[1] = "Atak Bezkontaktowy"; enemy[6].SKILL_NAME[2] = "Atak Pazurem"; enemy[6].SKILL_NAME[3] = "Gryz";     enemy[7].SKILL[0] = 5; enemy[7].SKILL[1] = 15; enemy[7].SKILL[2] = 15; enemy[7].SKILL[3] = 30; enemy[7].SKILL_NAME[0] = "Dmuchnięcie"; enemy[7].SKILL_NAME[1] = "Atak Ogonem"; enemy[7].SKILL_NAME[2] = "Atak Pazurem"; enemy[7].SKILL_NAME[3] = "Gryz";        enemy[8].SKILL[0] = 5; enemy[8].SKILL[1] = 10; enemy[8].SKILL[2] = 15; enemy[8].SKILL[3] = 20; enemy[8].SKILL_NAME[0] = "Atak Bezkontaktowy"; enemy[8].SKILL_NAME[1] = "Atak Pazurem"; enemy[8].SKILL_NAME[2] = "Atak Ogonem"; enemy[8].SKILL_NAME[3] = "Gryz";     enemy[9].SKILL[0] = 5; enemy[9].SKILL[1] = 20; enemy[9].SKILL[2] = 15; enemy[9].SKILL[3] = 25; enemy[9].SKILL_NAME[0] = "Atak Ogonem"; enemy[9].SKILL_NAME[1] = "Atak Ogniem"; enemy[9].SKILL_NAME[2] = "Atak Pazurem"; enemy[9].SKILL_NAME[3] = "Gryz";        enemy[10].SKILL[0] = 20; enemy[10].SKILL[1] = 40; enemy[10].SKILL[2] = 50; enemy[10].SKILL[3] = 45; enemy[10].SKILL_NAME[0] = "Atak Ogonem"; enemy[10].SKILL_NAME[1] = "Atak Ogniem"; enemy[10].SKILL_NAME[2] = "Atak Pazurem"; enemy[10].SKILL_NAME[3] = "Gryz";//enemy[0] = { "Giant",150,20,95,28,10,50,"Czołg",40,"Atak Pięścią",30,"Atak Kamieniem",20,"Dmuchnięcie"}; enemy[1] = {"Witch",65,100,40,15,11,10,"Regeneracja",25,"Otrucie",10,"Atak Kamieniem",20,"Atak Patykiem"}; enemy[2] = {"Goblin",20,10,15,5,5}; enemy[3] = {"szczur",6,1,5,1,1}; enemy[4] = {"ghost",15,5,60,9,40}; enemy[5] = {"wilk",20,0,20,20,5}; enemy[6] = {"niedzwiedz",150,10,50,40,30}; enemy[7] = {"karakal",100,0,20,10,50}; enemy[8] = {"krokodyl",99,0,10,33,10}; enemy[9] = {"small_dragon",45,0,10,50,10}; enemy[10] = {"dragon",300,50,100,60,0};

    srand(time(NULL));
    int wybor, wybor2;
    int postac_hp = 0; int enemy_hp = 0;
    int atak, atak_enemy;
    int losowa, losowa2;
    int postac_def;
    int aktual_stamina;

wybor:
    cout << "Jaką postacią zagrasz?\n1. Wieśniak\n2. Mag\n3. Wojownik\n4. Łowca\n5. Rolnik\n6. Archer\n7. Bandyta\n8. LOCKED\n9. LOCKED\n10. LOCKED\n";
    cin >> wybor;
    if (wybor == 8 || wybor == 9 || wybor == 10) {
        cout << "LOCKED!!! Wybierz ponownie" << endl;
        Sleep(2000);
        system("cls");
        goto wybor;
    }
    else if (wybor == 1 || wybor == 2 || wybor == 3 || wybor == 4 || wybor == 5 || wybor == 6 || wybor == 7) {
        wybor -= 1;
        system("cls");
        cout << "Wybrałeś klasę: " << postac[wybor].name << endl;
        cout << "Twoje statystyki : \nHP = " << postac[wybor].HP << "\nTarcza = " << postac[wybor].def << "\nStamina = " << postac[wybor].stamina << "\nAtaka = " << postac[wybor].damage << endl;
        Sleep(2000);
        system("cls");
        postac_hp = postac[wybor].HP;
        postac_def = postac[wybor].def;
        aktual_stamina = postac[wybor].stamina;
        for (int rundy = 0; rundy < 6; rundy++) {
            losowa = rand() % 10 ;
            cout << "Spotykasz wroga: " << enemy[losowa].name << ". Bijesz pierwszy!" << endl;
            enemy_hp = enemy[losowa].HP;
            do {
                    aktual_stamina += 15;
            walka:
                cout << "Masz " << aktual_stamina << " staminy " << "\nWybierz co zorbić : \n1." << postac[wybor].SKILL_NAME[0] << "(nie zabiera staminy)\n2." << postac[wybor].SKILL_NAME[1] << "(zabiera 10 staminy)\n3." << postac[wybor].SKILL_NAME[2] << "(zabiera 15 staminy)\n4." << postac[wybor].SKILL_NAME[3] << "(zabiera 20 staminy)" << endl;
                cin >> wybor2;
                wybor2 -= 1;
                if (wybor2 == 1) {
                    aktual_stamina -= 10;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 10;
                        goto walka_min_stamina;
                    }
                }
                else if (wybor2 == 2) {
                    aktual_stamina -= 15;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 15;
                        goto walka_min_stamina;
                    }
                }
                else if (wybor2 == 3) {
                    aktual_stamina -= 20;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 20;
                    walka_min_stamina:
                        wybor2 = 0;
                        cout << "NIE MASZ TYLE STAMINY, WYBIERAM ATAK KTÓRY JEJ NIE POTRZEBUJE :<" << endl;
                        if (wybor == 1 && wybor2 == 0) {
                            cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zregenerowałeś sobie " << postac[wybor].SKILL[wybor2] << " HP" << endl;
                            postac_hp = postac[wybor].HP + postac[wybor].SKILL[wybor2];
                            postac[wybor].HP = postac_hp;
                            cout << "Aktualnie posiadasz " << postac_hp << " HP" << endl;
                            goto atak_enemy;
                        }
                        else if (wybor2 < 0 || wybor2 > 3) {
                            cout << "Nie ładnie tak ;c \nWybierz ponownie";
                            Sleep(2000);
                            system("cls");
                            goto walka;
                        }
                        atak = postac[wybor].damage + postac[wybor].SKILL[wybor2];
                        enemy_hp -= atak;
                        if (enemy_hp > 0) {
                            cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " obrażeń \nZostało mu : " << enemy_hp << " HP" << endl;
                            goto atak_enemy;
                        }
                    }
                }
                
                if (wybor == 1 && wybor2 == 0) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zregenerowałeś sobie " << postac[wybor].SKILL[wybor2] << " HP" << endl;
                    postac_hp = postac[wybor].HP + postac[wybor].SKILL[wybor2];
                    postac[wybor].HP = postac_hp;
                    cout << "Aktualnie posiadasz " << postac_hp << " HP" << endl;
                    goto atak_enemy;
                }
                else if (wybor == 2 && wybor2 == 3) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i dodałeś troszkę tarczy sobie " << endl;
                    postac_def = postac[wybor].def + postac[wybor].SKILL[wybor2];
                    postac[wybor].def = postac_def;
                    cout << "Aktualnie posiadasz " << postac_hp << " HP oraz " << postac_def << " tarczy " << endl;
                    goto atak_enemy;
                }
                else if (wybor2 < 0 || wybor2 > 3) {
                    cout << "Nie ładnie tak ;c \nWybierz ponownie";
                    Sleep(2000);
                    system("cls");
                    goto walka;
                }
                atak = postac[wybor].damage + postac[wybor].SKILL[wybor2];
                enemy_hp -= atak;
                if (enemy_hp > 0) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " obrażeń \nZostało mu : " << enemy_hp << " HP" << endl;

                atak_enemy:
                    Sleep(4000);
                    system("cls");
                    cout << "A teraz atakuje wróg " << endl;
                    Sleep(2000);
                    system("cls");
                    losowa2 = rand() % 4;

                    atak_enemy = enemy[losowa].damage + enemy[losowa].SKILL[losowa2] - postac_def;
                    if (atak_enemy <= 0) {
                        cout << enemy[losowa].name << " użył: " << enemy[losowa].SKILL_NAME[losowa2] << ". Ale masz tarczę i to ciebie uratowało :DDD \nTobie zostało " << postac_hp << " HP" << endl;
                        postac_def -= (enemy[losowa].damage + enemy[losowa].SKILL[losowa2]);
                        postac[wybor].def = postac_def;
                        Sleep(4000);
                        system("cls");
                    }
                    else {
                        postac_hp = postac[wybor].HP - atak_enemy;
                        postac[wybor].HP = postac_hp;
                        if (postac_hp <= 0) {
                            cout << "Przegrałeś ;c" << endl;
                            return 0;
                        }
                        cout << enemy[losowa].name << " użył: " << enemy[losowa].SKILL_NAME[losowa2] << " i zaatakował za " << atak_enemy << " HP\nTobie zostało " << postac_hp << " HP" << endl;
                        Sleep(4000);
                        system("cls");
                    }
                }
                else {
                    cout << "Użyłeś: " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " po czym wróg przestał żyć ;c" << endl;
                    Sleep(4000);
                    system("cls");
                }

            } while (postac_hp > 0 && enemy_hp > 0);
        }
        cout << "Brawo pokonałeś 6 enemy" << endl;
            cout << "A teraz spotykasz: " << enemy[10].name << " (bossa) :0" << endl;
            enemy_hp = enemy[10].HP;
            do {
             aktual_stamina += 15;
            walka2:
                cout << "Masz " << aktual_stamina << " staminy " << "\nWybierz co zorbić : \n1." << postac[wybor].SKILL_NAME[0] << "(nie zabiera staminy)\n2." << postac[wybor].SKILL_NAME[1] << "(zabiera 10 staminy)\n3." << postac[wybor].SKILL_NAME[2] << "(zabiera 15 staminy)\n4." << postac[wybor].SKILL_NAME[3] << "(zabiera 20 staminy)" << endl;
                cin >> wybor2;
                wybor2 -= 1;
                if (wybor2 == 1) {
                    aktual_stamina -= 10;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 10;
                        goto walka_min_stamina2;
                    }
                }
                else if (wybor2 == 2) {
                    aktual_stamina -= 15;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 15;
                        goto walka_min_stamina2;
                    }
                }
                else if (wybor2 == 3) {
                    aktual_stamina -= 20;
                    if (aktual_stamina < 0) {
                        aktual_stamina += 20;
                    walka_min_stamina2:
                        wybor2 = 0;
                        cout << "NIE MASZ TYLE STAMINY, WYBIERAM ATAK KTÓRY JEJ NIE POTRZEBUJE :<" << endl;
                        if (wybor == 1 && wybor2 == 0) {
                            cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zregenerowałeś sobie " << postac[wybor].SKILL[wybor2] << " HP" << endl;
                            postac_hp = postac[wybor].HP + postac[wybor].SKILL[wybor2];
                            postac[wybor].HP = postac_hp;
                            cout << "Aktualnie posiadasz " << postac_hp << " HP" << endl;
                            goto atak_enemy2;
                        }
                        else if (wybor2 < 0 || wybor2 > 3) {
                            cout << "Nie ładnie tak ;c \nWybierz ponownie";
                            Sleep(2000);
                            system("cls");
                            goto walka2;
                        }
                        atak = postac[wybor].damage + postac[wybor].SKILL[wybor2];
                        enemy_hp -= atak;
                        if (enemy_hp > 0) {
                            cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " obrażeń \nZostało mu : " << enemy_hp << " HP" << endl;
                            goto atak_enemy2;
                        }
                    }
                }

                if (wybor == 1 && wybor2 == 0) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zregenerowałeś sobie " << postac[wybor].SKILL[wybor2] << " HP" << endl;
                    postac_hp = postac[wybor].HP + postac[wybor].SKILL[wybor2];
                    postac[wybor].HP = postac_hp;
                    cout << "Aktualnie posiadasz " << postac_hp << " HP" << endl;
                    goto atak_enemy2;
                }
                else if (wybor == 2 && wybor2 == 3) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i dodałeś troszkę tarczy sobie " << endl;
                    postac_def = postac[wybor].def + postac[wybor].SKILL[wybor2];
                    postac[wybor].def = postac_def;
                    cout << "Aktualnie posiadasz " << postac_hp << " HP oraz " << postac_def << " tarczy " << endl;
                    goto atak_enemy2;
                }
                else if (wybor2 < 0 || wybor2 > 3) {
                    cout << "Nie ładnie tak ;c \nWybierz ponownie";
                    Sleep(2000);
                    system("cls");
                    goto walka2;
                }
                atak = postac[wybor].damage + postac[wybor].SKILL[wybor2];
                enemy_hp -= atak;
                if (enemy_hp > 0) {
                    cout << "Użyłeś " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " obrażeń \nZostało mu : " << enemy_hp << " HP" << endl;

                atak_enemy2:
                    Sleep(4000);
                    system("cls");
                    cout << "A teraz atakuje wróg " << endl;
                    Sleep(2000);
                    system("cls");
                    losowa2 = rand() % 4;

                    atak_enemy = enemy[10].damage + enemy[10].SKILL[losowa2] - postac_def;
                    if (atak_enemy <= 0) {
                        cout << enemy[10].name << " użył: " << enemy[10].SKILL_NAME[losowa2] << ". Ale masz tarczę i to ciebie uratowało :DDD \nTobie zostało " << postac_hp << " HP" << endl;
                        postac_def -= (enemy[10].damage + enemy[10].SKILL[losowa2]);
                        postac[wybor].def = postac_def;
                        Sleep(4000);
                        system("cls");
                    }
                    else {
                        postac_hp = postac[wybor].HP - atak_enemy;
                        postac[wybor].HP = postac_hp;
                        if (postac_hp <= 0) {
                            cout << "Przegrałeś ;c" << endl;
                            return 0;
                        }
                        cout << enemy[10].name << " użył: " << enemy[10].SKILL_NAME[losowa2] << " i zaatakował za " << atak_enemy << " HP\nTobie zostało " << postac_hp << " HP" << endl;
                        Sleep(4000);
                        system("cls");
                    }
                }
                else {
                    cout << "Użyłeś: " << postac[wybor].SKILL_NAME[wybor2] << " i zadałeś mu: " << atak << " po czym wróg przestał żyć ;c\nBRAWO!!!!! WYGRAŁEŚ!!!" << endl;
                    Sleep(4000);
                    system("cls");
                }
            } while (postac_hp > 0 || enemy_hp > 0);
        }
    else {
        cout << "NIEPRAWIDŁOWA WARTOŚĆ!!! Wybierz ponownie" << endl;
        Sleep(2000);
        system("cls");
        goto wybor;
    }
}
