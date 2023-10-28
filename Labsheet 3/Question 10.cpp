/*A speeding ticket fine policy is Rs 500 plus Rs 10 for each km/hr over the speed limit of
90 km/hr.
Write a program that accepts speed in km/hr as input, and displays a message indicating
that the speed limit has not been exceeded or prints the amount of the fine that has to
be paid. Also, speed should be in the range of 0 – 300 km/hr. All speeds outside this
range should be rejected as invalid and a suitable message is to be displayed.*/
#include <iostream>

using namespace std;

int main()
{
    int speed;
    cout<<"Input the speed: "<<endl;
    cin>>speed;

    switch(speed){
    case 0 ... 90:
        cout<<"Speed limit not yet exceeded"<<endl;
        break;
    case 91 ... 300:
        cout<<"Your fine is "<<500+(speed-90)*10<<endl;
        break;
    default:
        cout<<"Speed out of bounds"<<endl;
    }
    return 0;
}
