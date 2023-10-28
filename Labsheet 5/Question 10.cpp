/*The factorial of a positive integer n is defined as 1*2*3……n.
Write a program that allows for the input of a value n and calculates and displays the factorial of n.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int f = 1;

    cout<<"Please input the value for n: ";
    cin>>n;

    for(int i = 1; i<=n;i++){
        f = f*i;
    }
    cout<<"The factorial of "<<n<<" is "<<f;
    return 0;
}
