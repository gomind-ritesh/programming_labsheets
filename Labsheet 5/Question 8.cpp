/*Modify the previous program to add up the reciprocals of all the integers up to and including the
input value.*/
#include <iostream>

using namespace std;

int main()
{
    int number;
    double sum;

    cout<<"Please enter an integer: ";
    cin>>number;

    for(int i = 1; i<=number;i++){
        sum = sum + (1.0/i);
    }

    cout<<"The sum is "<<sum;
    return 0;
}
