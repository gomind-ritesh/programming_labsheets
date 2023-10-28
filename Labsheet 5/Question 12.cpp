/*Write a program that uses a while loop to determine how long it takes for an investment to double
at a given interest rate. The input will be an annualized interest rate, and the output is the number of
years it takes an investment to double.*/
#include <iostream>

using namespace std;

int main()
{
    float P = 100.0;
    float r;
    int counter;

    cout<<"Please input the rate of interest: ";
    cin>>r;

    while (P<=200){
        P = P+(P*r);
        counter++;
    }
    cout<<"It will take "<<counter<<" years for the investment to double ";
    return 0;
}
