#include <iostream>
#include "staticMembers.h"
using namespace std;


unsigned int Employee::count{2}; //deklarimi i var static ne globalscope

unsigned int Employee::getCount() {return count;}

Employee::Employee(const string& first, const string& last): lastName(last), firstName(first) {
    ++count;
    cout << "Employee constructor for " << firstName<< ' ' << lastName << " called." << endl;
}

Employee::~Employee() {
    cout << "dekonstruktori thirret per: " << firstName << "  " <<lastName << endl;
    count--;
}

string Employee::getFirstName() const {return firstName;}
string Employee::getLastName() const{return lastName;}


int main() {

    cout << "count perpara se te krijohen objektet ne klase: " << Employee::getCount() << endl;
    {
    Employee k1{"eduard", "kari"};
    Employee k2{"cope", "trapi"};

    cout<<"count tani eshte: " <<Employee::getCount() << endl; 

    cout << k1.getFirstName() << k1.getLastName() << k2.getFirstName() <<k2.getLastName() << endl;
    }
    cout<<"count pas fshirjes se objekteve eshte: " <<Employee::getCount() << endl; 



}