/*Write a program that allows the user to continuously input an integer. It calculates the sum of all
positive values input so far, it also counts the number of positive values input, and the number of
negative values input, except -2. On input of -2, the program simply displays the current sum and
exits. Other negative values are counted but they do not participate in the sum.*/
#include <iostream>

using namespace std;

int main()
{
    int value,sum;
    int PosCount,NegCount;

    cout<<"Please input integer values. Use -2 to terminate the process"<<endl;
    cin>>value;
    PosCount = 0;
    NegCount = 0;
    while(value!=-2){
        if (value>0){
            sum = sum + value;
            PosCount++;
        }
        else if(value<0){
            NegCount++;
        }
    cin>>value;
    }
    cout<<"The sum of positive values is "<<sum<<endl;;
    cout<<PosCount<<" positive values were input"<<endl;
    cout<<NegCount<<" negative values were input"<<endl;

    return 0;
}
