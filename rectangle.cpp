#include <iostream>
#include <stdexcept>
#include <array>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int a[], int n) {

    setCoordinates(a, n);

}

void Rectangle::setCoordinates(int a[], int n) {

    

    for (int i = 0; i < 8; i++) {
        
        
        if( a[i] >= 0 && a[i] <= 20) {
            continue;
        } else {
            cout << "vlere  e gabuar: " << endl;
            break;
        }
    }

    if (a[0] == a[6] && a[1] == a[3] && a[2] == a[4] && a[7] == a[5] ) {
        length = gjatesia(a[0], a[2]);
        width = lartesia(a[1], a[7]);

        cout << "figura me koordinatat e vendosura paraqet nje drejtkendesh" << endl;
    } else {
        cout << "figura vk!" << endl;
    }

}

int Rectangle::gjatesia(int k, int j) { //x1 dhe x2
    return j - k;
}

int Rectangle::lartesia(int k, int j) { //y1 dhe y2
    return j - k;
}

int Rectangle::getLength() const {return length;}
int Rectangle::getWidth() const {return width;}

int Rectangle::siperfaqja() {
    cout << "Siperfaqja e drejtekendeshit eshte: " << endl;
    return getWidth() * getLength();
}

int Rectangle::perimetri() {
    cout << "Perimetri i drejtekendeshit eshte: " << endl;
    return getWidth() * 2 + getLength() * 2;
}

bool Rectangle::square() {
    cout << endl << "Nese drejtekendeshi eshte katror shfaqet 1, perndryshe shfaqet 0: " <<endl;
    return (getLength() == getWidth());
    
}

/*
void Rectangle::setBrinje(float w, float h) {
    setHeight(h);
    setWidth(w);

}

void Rectangle::setHeight(float h) {

    if(h > 0.0 && h < 20.0) {
        height = h;
    } else {
        throw invalid_argument("lartesia duhet te jete mes 0 dhe 20");
    }

}

void Rectangle::setWidth(float w) {

    if(w > 0.0 && w < 20.0) {
        width = w;
    } else {
        throw invalid_argument("gjeresia duhet te jete mes 0 dhe 20");
    }

}

float Rectangle::getHeight() const {return height;}
float Rectangle::getWidth() const {return width;}

float Rectangle::siperfaqja(float h, float w) {
    setBrinje(w,h);

    return getWidth() * getHeight();

}

float Rectangle::perimetri(float h, float w) {
    setBrinje(w, h);

    return 2* getWidth() + 2* getHeight();
}
*/

void drawRec( int b[], int n) {
    for(int i= 50; i >0; i=i - 2) {
        for(int j=0; j <50; j++) {

            if ( j % 2== 0) {
                cout << "__|";
            } else if((j >= 1 && j<8) and (i >= 1 && i <16)) {
                cout << "*";
            }
        }
        cout << endl;
    }
    
}

int main () {

    int a[] = {1, 1, 4, 1, 4, 8, 1, 8};

    /*Rectangle k = Rectangle(a, 8);


    
    cout << k.siperfaqja() << endl;
    cout << k.perimetri();

    cout <<k.square();*/

    drawRec(a,8);


    

}