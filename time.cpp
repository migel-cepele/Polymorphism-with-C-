#include <iomanip> // for setw and setfill stream manipulators
#include <stdexcept> // for invalid_argument exception class
#include <sstream> // for ostringstream class
#include <string>
#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int hour, int minute, int second) {

    setTime(hour, minute, second); // validate and set time
}

Time& Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this;
}

// set hour value
Time& Time::setHour(int h) {

    if (h >= 0 && h < 24) {

        hour = h;
    }
    else {
       throw invalid_argument("hour must be 0-23");
    }
    return *this; //i kthen vleren objektit qe e therret
}
// set minute value
Time& Time::setMinute(int m) {

    if (m >= 0 && m < 60) {

    minute = m;
    }
    else {
       throw invalid_argument("minute must be 0-59");
    }
    return *this;
}
Time& Time::setSecond(int s) {
    if(s >= 0 && s<=60) {
        second = s;
    } else {
        throw invalid_argument("i ke dhene sekondat gabim o rak");
    }

    return *this;  // keto lloj return mundesojne cascading
}

unsigned Time::getHour() const {return hour;}
unsigned Time::getMinute() const {return minute;}
unsigned Time::getSecond() const {return second;}

string Time::toUniversalTime() const {
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str(); /*setfill perdoret per te mbushur vendin qe ngelet bosh me nje karakter te dhene si input. 
    karakteri vendoset ne te majte sepse numrat jane te vendosur right aligned by default. ky fun eshte sticky setting sepse u aplikohet cdo karakteri me pas. ndersa setw perdoret
    vetem per variablen me pas*/

}

string Time::toStandardString() const {
    
    ostringstream output;  //krijon ne objekt ne klasen string per te ruajtur printin dhe me pas e kthen ate si string. thirret nga klasa sstream
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"<< setfill('0')<< setw(2) << getMinute() << ":" << setw(2)<< getSecond() << (getHour() < 12 ? " AM" : " PM");
    return output.str();
}

void displayTime(const string& message, const Time& koha) {

    cout << message<< "  " << koha.toUniversalTime() << "  " << koha.toStandardString();
    cout << endl;

}



int main(){

    

   Time k;
   k.setHour(1).setMinute(2).setSecond(3); /*cascading funksionon perafersisht si recursion. ne shprehjen perkrah: si fillim ekzekutohet fun. setHour, i cili
   i kalon vleren k. Me pas shprehja duket si: k.setMinute.setSecond. se dyti ekzekutohet k.setMinute dhe ne fund k.setSecond. */
   cout << k.toUniversalTime();

}
