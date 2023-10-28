/*Write a program that uses an interactive loop and allows the input a number of positive values
and displays the number of even values input as well as the sum of the even values.*/
#include <iostream>

using namespace std;

int main()
{
    int inp,sum;
    int c = 0;

    cout<<"Input any number of positive values. Use a negative value to terminate"<<endl;

    while(inp>=0){
        cin>>inp;
        if ((inp%2)==0){
            sum = sum + inp;
            c=c+1;
        }
    }
    cout<<"Number of even numbers input is "<<c<<endl;
    cout<<"Sum of even values is "<<sum<<endl;
    return 0;
}
