/*Write a program which displays the following given the input below:*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Input x: ";
    cin>>x;
    //cout<<"*"<<endl;

    /*for (int i = 1; i<=x+1;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/

     for (int k=1;k<=x;k++){
          for (int i = 1; i<=x+1;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     }
    return 0;
}
