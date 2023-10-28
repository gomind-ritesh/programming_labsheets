/*Write a program that accepts an exam score as input and uses a decision structure to
find the corresponding grade. Display suitable messages if the marks do not lie in the
range 0 - 100.*/
#include <iostream>

using namespace std;

int main()
{
    int score;
    cout<<"Input the score: "<<endl;
    cin>>score;

    switch(score){
    case 70 ... 100:
        cout<<"Your grade is A";
        break;
    case 60 ... 69:
        cout<<"Your grade is B";
        break;
    case 50 ... 59:
        cout<<"Your grade is C";
        break;
    case 40 ... 49:
        cout<<"Your grade is D";
        break;
    case 0 ... 39:
        cout<<"Your grade is F";
        break;
    default:
        cout<<"Score is out of range";
    }
    return 0;
}
