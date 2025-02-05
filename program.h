#ifndef DATE_H //Šī ir pirmprocesora direktīva, kas pārbauda, vai nav definēts identifikators DATE_H.
#define DATE_H //Ja DATE_H nav definēts, tas tiek definēts šeit. Tas ir izplatīts paņēmiens, ko dēvē par iekļaušanas aizsargs, kas novērš viena un tā paša galvenes faila vairākkārtēju iekļaušanu vienā tulkojuma vienībā.

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int initialYear, int initialMonth, int initialDay); //Šī ir klases konstruktora deklarācija, kas inicializē 'Date' objektu ar norādīto gadu, mēnesi un dienu.
    ~Date(); //Šī ir klases destruktora deklarācija, kas ir atbildīgs par resursu attīrīšanu, kad objekts tiek iznīcināts.
    void Change(int newYear, int newMonth, int newDay); //Deklarē metodi, kas maina 'Date' objekta datumu uz norādīto gadu, mēnesi un dienu.
    void Print(); //Deklarācija metodei, kas izdrukā 'Date' objekta pašreizējo datumu.
    void Calculate(); //Deklarē metodi, kas aprēķina un izdrukā nedēļas dienu, pamatojoties uz 'Date' objekta pašreizējo datumu.
};

#endif 
//Noslēdz nosacītās kompilēšanas direktīvu. Ja DATE_H nav definēts iepriekš, tas tiek definēts šeit, un kompilācijā tiks iekļauts sekojošais kods.
