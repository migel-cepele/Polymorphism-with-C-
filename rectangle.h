#include <array>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    public:

    Rectangle(int [], int); //konstruktoret nuk mund te kene return type , gjithashtu dhe destruktoret, sepse do te conte ne nje compilation error
    //kjo ndodh sepse ti nuk mund te presesh nga nje objekt te rikthej dicka kur ai eshte duke u ndertuar(apo shkaterruar)
    void setCoordinates(int [], int);
    

    int getLength() const;
    int getWidth() const;

    
    int siperfaqja();
    int perimetri();
    int gjatesia(int, int);
    int lartesia(int, int);    

    bool square();

    private:
    int length = 1;
    int width = 1;
};
/*
class Rectangle{  //versioni vk
    public:
    float getWidth() const;
    float getHeight() const;

    void setBrinje(float, float);
    void setWidth(float);
    void setHeight(float);

    float perimetri(float, float);
    float siperfaqja(float, float);

    private:
    float width;
    float height; 

};
*/

#endif