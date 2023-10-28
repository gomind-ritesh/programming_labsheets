/*Write a program which continuously asks the user to key in a positive number and displays the
square root of the number.
The program stops if the user types in a negative number.*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float inp;

    while(inp>=0){
        cout<<"Enter a positive value: "<<endl;
        cin>>inp;
        cout<<"The square root of the value is :"<<sqrt(inp)<<endl;
    }
    return 0;
}
