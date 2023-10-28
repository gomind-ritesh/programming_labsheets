/*Write a program that allows you to input an integer value n. If n is greater than 100, it displays the
message ‘Wrong Input’, otherwise it displays all factors of n.*/
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Please enter n: ";
    cin>>n;

    if(n>100){
        cout<<"Wrong Input"<<endl;
    }
    else{
        cout<<"The factors of "<<n<<"are: "<<endl;
        for (int i = 1; i<=100;i=i+1){
            if(n%i==0){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
