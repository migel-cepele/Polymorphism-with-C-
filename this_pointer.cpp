// "this" eshte nje pointer qe i atribohet nje pjestari te nje klase ne rastet kur ai thirret ne nje funksion, i cili ka nje variabel lokale me te njejtin emer

#include <iostream>
using namespace std;

class Test{
    public:
    explicit Test(int);
    void print() const;

    private:
    int x{0};
};

Test::Test(int val): x{val} {}

void Test::print() const {
    cout << "implicity using this pointer to access x: " << x << endl;

    cout << "explicity: " << this->x << endl;

    // explicitly use the dereferenced this pointer and
// the dot operator to access the member x
    cout << "\n(*this).x = " << (*this).x << endl;
}

int main() {
    Test v{12};

    v.print();
}

