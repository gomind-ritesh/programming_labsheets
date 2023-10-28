/*Write a program that allows the input of an integer value n and displays all multiples of 3 which
are less than or equal to n, as well as the sum of the square of these values.*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,sum;
    cout<<"Please input n: ";
    cin>>n;

    for(int i=3;i<=n;i=i+3){
        cout<<i<<endl;
        sum = sum + pow(i,2);
    }
    cout<<"The sum of the squares is: "<<sum<<endl;
    return 0;
}
