/*Write a program to prompt the user for an integer and calculate the sum of all the integers up to
and including the input value. The program should also display the result.*/
#include <iostream>

using namespace std;

int main()
{
    int number,sum;

    cout<<"Please enter an integer: ";
    cin>>number;

    for(int i = 1; i<=number;i++){
        sum = sum + i;
    }

    cout<<"The sum is "<<sum;
    return 0;
}
