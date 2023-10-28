/*A person currently has an amount P of money, in a bank, which pays an annual interest rate of r%.
Write a program that allows the input of values for P, r as well as n, where n represents the
number of years for which the money has remained in the bank. The program must calculate and
display the total amount in the person’s account at the end of each year for the n years. Display
the results in an appropriate format.*/
#include <iostream>

using namespace std;

int main()
{
    float P, r;
    int n;

    cout<<"Please input the amount of money in your bank: ";
    cin>>P;
    cout<<"Please input the interest rate: ";
    cin>>r;
    cout<<"Input the number of years: ";
    cin>>n;

    for(int i = 1; i<=n;i++){
        P=P+(P*r);
    }

    cout<<"Your balance after "<<n<<" years will be "<<P;
    return 0;
}
