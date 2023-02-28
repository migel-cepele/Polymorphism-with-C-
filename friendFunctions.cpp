#include <iostream>
using namespace std;
// nje funksion mund te behet friend i klases nese deklarohet me keyword friend in class definiton. keta fun mund aksesojne all memebers of the class.
class Count{
    
    friend void setx(Count&, int);
    public:
    int getx() const {return x;}
    private:
    int x{0};
};

void setx(Count& c, int val) {
    c.x = val;

}

int main() {
    Count counter;
    cout << "count x befor instntiantion: " << counter.getx() << endl;

    setx(counter, 2);
    cout << " x pas riparaqitjes me nje friend function: " << counter.getx() << endl;
}

