/*Modify the program in question 6 so that it allows the input of two values x and n and it calculates and
displays the value of x n + 3x n-1 + 2x n-2*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,n;
    cout<<"Please enter the value of x and n"<<endl;
    cin>>x>>n;
    cout<<Pow(x,n)+3*(Pow(x,n-1)+2*Pow(x,n-2);
    return 0;
}
