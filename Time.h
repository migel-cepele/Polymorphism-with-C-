#include <string>
using namespace std;

#ifndef TIME_H
#define TIME_H

/*class Time{
    public:
    explicit Time(int = 0, int = 0, int = 0);  // konstruktori default per klasen. type do shpjegohet me vone. lejon qe nje objekt te deklarohet me vetem nje nder argumentat

    // set functions
    void setTime(int, int, int); // set hour, minute, second
    void setHour(int); // set hour (after validation)
    void setMinute(int); // set minute (after validation)
    void setSecond(int); // set second (after validation)

    // get functions
    unsigned int getHour() const; // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second

    

    string toUniversalTime() const;
    string toStandardString() const;

    private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};

};*/

class Time{
    public:
    explicit Time(int = 0, int = 0, int = 0);  // konstruktori default per klasen. type do shpjegohet me vone. lejon qe nje objekt te deklarohet me vetem nje nder argumentat

    // set functions which are cascaded
    Time& setTime(int, int, int); // set hour, minute, second
    Time& setHour(int); // set hour (after validation)
    Time& setMinute(int); // set minute (after validation)
    Time& setSecond(int); // set second (after validation)

    // get functions
    unsigned int getHour() const; // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second

    

    string toUniversalTime() const;
    string toStandardString() const;

    private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};

};
#endif