/*Modify the previous program to print out the largest and smallest number read in as well as the
average. Also change the prompt to show the number of values still to be entered.*/
#include <iostream>

using namespace std;

int main()
{
    int no_inp,inp;
    float sum;
    float largest = 0;
    float smallest = 999999999;

    cout<<"Please enter the number of inputs: ";
    cin>>no_inp;

    for (int i = 1;i<=no_inp;i++){
        cout<<"Enter number "<<i<<endl;
    cin>>inp;
    sum = sum+inp;
    if (inp>largest){
        largest = inp;
    }
    if (inp<smallest){
        smallest = inp;
    }
    cout<<"Inputs remaining = "<<no_inp-i<<endl;
    }
    cout<<"The average is "<<sum/no_inp<<endl;
    cout<<"The smallest is "<<smallest<<endl;
    cout<<"The largest is "<<largest<<endl;
    return 0;
}
