/*Write a program to input a set of numbers and print out their average. The program will start by
prompting the user for the number of numbers to be input and will then prompt for the individual
numbers.*/
#include <iostream>

using namespace std;

int main()
{
    int no_inp,inp;
    float sum;

    cout<<"Please enter the number of inputs: ";
    cin>>no_inp;

    for (int i = 1;i<=no_inp;i++){
        cout<<"Enter number "<<i<<endl;
    cin>>inp;
    sum = sum+inp;
    }
    cout<<"The average is "<<sum/no_inp<<endl;
    return 0;
}
