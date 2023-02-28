#include <string>
#include <iostream>

#include "createAndChange.h"
using namespace std;

//objektet mund te deklarohen const, dhe fun qe i perdorin kete fun duhen te deklarohen explicity const gjithashtu, perndryshe do te jete compile error

CreateAndDestroy::CreateAndDestroy(int ID, string messageString): objectID{ID}, message{messageString} {
    cout << "objekti: " << objectID << "Constructor runs " << message << endl;
}

CreateAndDestroy::~CreateAndDestroy() { /*shembull destruktori. destruktori mund te perceptohet si e kunderta e konstruktorit
 dhe perdoret per ti bere terminate "housekeeping" objekteve ne menyre qe te shfrytezohet hapsira e memorjes qe ata zene*/
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");

    cout << "Object " << objectID << " destructor runs "
    << message << endl;
}

void create();

CreateAndDestroy first{1, "global before main"};

int main() {

    cout << "execution begins in main function: " << endl;
    CreateAndDestroy second{2, "(local in main)"};
    static CreateAndDestroy third{3, "(local static in main)"};

    create();
    cout << "execution resumes in main function: " << endl;
    CreateAndDestroy forth{4, "(local in main)"};
    cout << "execution ends in main function: " << endl;
    

}

void create() {
    cout << "execution in create function begins: " << endl;
    CreateAndDestroy fifth{5, "(local in create)"};
    static CreateAndDestroy sixth{6, "(local static in create)"};
    CreateAndDestroy seventh{7, "(local in create)"};
    cout << "execution in create function ends: " << endl;
}