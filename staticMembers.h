// ketu ilustrohet me shembull perdorimi dhe aksesimi i public static class members

#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
    public:

    Employee(const string&, const string&);
    ~Employee();
    string getFirstName() const;
    string getLastName() const;

    static unsigned int getCount();

    private:
    string firstName;
    string lastName;
    static unsigned int count;

};

#endif