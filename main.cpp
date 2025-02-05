
/******************************
Pāvels Petrovs, pp23055
D20. "Izveidot klasi ""Datums"" - Date, kurā tiek glabāti trīs skaitļi - gads, mēnesis, datums. 
Klasei izveidot šādas metodes: 
	(1) konstruktors, ar kuru tiek padotas sākotnējās vērtības, 
	(2) destruktors, kurš paziņo par objekta likvidēšanu, 
	(3) metode ""Mainīt"" - change ar trīs parametriem, kas uzstāda jaunās vērtības, 
	(4) metode ""Drukāt"" - print, kas izdrukā datumu, 
	(5) metode ""Aprēķināt"" - calculate, kas izdrukā dotā datuma nedēļas dienu."
Programma izveidota: 10.12.2023
******************************/

#include "program.h"
#include "program.cpp"
using namespace std;

int main() {
    int initialYear, initialMonth, initialDay, newYear, newMonth, newDay, x;

    cout << "Ievadiet gadu: ";
    cin >> initialYear; 
    cout << "Ievadiet mēnesi: ";
    cin >> initialMonth; 
    cout << "Ievadiet dienu: ";
    cin >> initialDay;
    Date myDate(initialYear, initialMonth, initialDay); // Ievadiet sākotnējās vērtības

    do {
        cout << endl;
        cout << "----------------" << endl;
        cout << "Stop         (0)" << endl;
        cout << "Change       (1)" << endl;
        cout << "Print        (2)" << endl;
        cout << "Calculate    (3)" << endl;
        cout << "----------------" << endl;

        cout << "Ievadiet indeksu: ";
        cin >> x;

        if (x == 1) {
            cout << "Ievadiet jaunu gadu: ";
            cin >> newYear; 
            cout << "Ievadiet jaunu mēnesi: ";
            cin >> newMonth; 
            cout << "Ievadiet jaunu dienu: ";
            cin >> newDay;
            myDate.Change(newYear, newMonth, newDay); // Mainiet datumu
        } else if (x == 2) {
            myDate.Print();
        } else if (x == 3) {
            myDate.Calculate(); // Aprēķiniet nedēļas dienu
        } else if (x != 1 && x != 2 && x != 3 && x != 0){
            cout << "Nav metodu, kas ir saistīts ar šo indeksu" << endl;
        }
    } while (x != 0);

    return 0;
}
