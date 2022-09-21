#include <iostream>
using namespace std;

/*
**Autor: Davydiuk Karina
**Metoda ma wyswietliać wskaznik stanowisko i zwróczić wartość przepisaną stanowisko
*/
class Pracownik {
private:
    int pesel;
public:
    int id;
    string imie, nazwisko;
    string stanowisko;
    string *w_stanowisko = &stanowisko;
    void ustawPersonalia() {
        cout <<"Personalia " <<imie << " " + nazwisko << " " << pesel << endl;
    }
    void ustawStanowisko() {
        //stanowisko = &staniwosko;
        cout <<"Stanowisko " << *w_stanowisko;
    }
    void wyswietl_dane() {
        cout <<"Dane " <<id<<" " << imie << " " << nazwisko << " " << pesel << " " << *w_stanowisko << endl;
    }
    void wyswietl_personalia() {
        ustawPersonalia();
    }
    void wyswietl_stanowisko() {
        ustawStanowisko();
    }
};

int main()
{
    Pracownik pracownik;
    pracownik.id = 1;
    pracownik.imie = "Jan";
    pracownik.nazwisko = "Kowalski";
    pracownik.stanowisko = "nauczyciel";
    pracownik.wyswietl_dane();
    pracownik.wyswietl_personalia();
    pracownik.wyswietl_stanowisko();
}
