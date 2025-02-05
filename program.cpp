#include "program.h"
#include <iostream>
using namespace std;

Date::Date(int initialYear, int initialMonth, int initialDay) : year(initialYear), month(initialMonth), day(initialDay) { 
//Date::Date(int initialYear, int initialMonth, int initialDay): Klases 'Date' konstruktora definīcija, kas tiek izsaukts, kad tiek izveidots jauns objekts. 
//: year(initialYear), month(initialMonth), day(initialDay): Inicializē klases datu locekļus (year, month, day) ar vērtībām no konstruktoram padotajiem argumentiem.
    cout << "Objekts izveidots ar datuma vērtībām: " << year << "-" << month << "-" << day << endl;
}

Date::~Date() { //Klases 'Date' destruktora definīcija, kas tiek izsaukts, kad objekts tiek iznīcināts.
    cout << "Objekts likvidēts." << endl;
}

void Date::Change(int newYear, int newMonth, int newDay) {
//Klases 'Date' metodes 'Change' definīcija, kas ļauj mainīt objekta datumu uz jaunajām vērtībām.
    year = newYear;
    month = newMonth;
    day = newDay;
    cout << "Datums mainīts uz: " << year << "-" << month << "-" << day << endl;
}

void Date::Print() { //Klases 'Date' metodes 'Print' definīcija, kas izvada esošo datumu.
    cout << "Datums: " << year << "-" << month << "-" << day << endl;
}

void Date::Calculate() { //Klases 'Date' metodes 'Calculate' definīcija, kas aprēķina nedēļas dienu atbilstoši esošajam datumam.
    int d = day;
    int m = month;
    int y = year;

// Nedēļas dienas aprēķināšanai var izmantot 'Zellera sakritība' algoritmu.
    if (m < 3) { //Pārveido datumu, lai aprēķinātu korektu nedēļas dienas nosaukumu.
        m += 12;
        y -= 1;
    }
    int K = y % 100;
    int J = y / 100;
    int h = (d + 13 * (m + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7; //Aprēķina dienas indeksu (0 - Sestdiena, 1 - Svētdiena, 2 - Pirmdiena, utt.).

    const char* weekdays[] = {"Sestdiena", "Svētdiena", "Pirmdiena", "Otrdiena", "Trešdiena", "Ceturtdiena", "Piektdiena"};
    cout << "Nedēļas diena: " << weekdays[h] << endl;
}

