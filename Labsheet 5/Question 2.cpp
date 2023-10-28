/*Write a program that displays the sum of all multiples of 5 between 0 and 100 inclusive.*/
#include <iostream>

using namespace std;

int main()
{
    int sum;
     for(int i = 5;i<=100;i=i+5){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}
