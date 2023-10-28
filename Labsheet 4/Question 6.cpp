/*A company sells 5 different types of cars. Type 1 is a car of 1500 CC, Type 2 is 1500 CC with
automatic mirrors, type 3 is 1500 CC with automatic mirrors and front and rear sensors. Type 4 is
1200 CC while type 5 is 1200 CC with automatic gear. Write a program that allows the input of a type
of car between 1 and 5 (inclusive) and it displays the details of the car. Use switch statements.*/
#include <iostream>

using namespace std;

int main()
{
    int CarType;

    cout<<"Please input the type of car(1-5): "<<endl;
    cin>>CarType;

    while (CarType<1 || CarType>5){
        cout<<"Out of bounds. Try again"<<endl;
        cin>>CarType;
    }

    switch(CarType){
    case 1:
        cout<<"1500 CC"<<endl;
        break;
    case 2:
        cout<<"1500 CC with automatic mirrors"<<endl;
        break;
    case 3:
        cout<<"1500 CC with automatic mirrors and front & rear sensors"<<endl;
        break;
    case 4:
        cout<<"1200 CC"<<endl;
        break;
    case 5:
        cout<<"1200 CC with automatic gear"<<endl;
    }

    return 0;
}
