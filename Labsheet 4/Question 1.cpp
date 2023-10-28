/*A swimming club charges a fee per swimming session. If, for members, it charges a fee x per
session per adult and y per child, for non-members, the charges will be 2x per adult and 1.5
y per child. If the head of a family is a member, the whole family is charged as members.
Write a program that performs the calculation for the fee to be charged to a family. The
program should allow as inputs the values of x and y, the number of adults and number of
children and whether they should be charged as members or non-members.*/
#include <iostream>

using namespace std;

int main()
{
    float x,y, total;
    int num_child, num_adult;
    char member = 'Y';

    cout<<"Please input the fees for adults and children: "<<endl;
    cin>>x>>y;
    cout<<"Please input the number of adults and children: "<<endl;
    cin>>num_adult>>num_child;

    cout<<"Is the head of the family a member?(Y/N)"<<endl;
    cin>>member;

    if (member = 'N'){
    for (int i=1;i<=num_child;i++){
        cout<<"Is child "<<i<<" a member?(Y/N)"<<endl;
        cin>>member;
        if(member = 'Y'){
            total = total + y;
        }
        else{
            total = total +(1.5*y);
        }
    }
    for (int i=1;i<=num_adult;i++){
        cout<<"Is adult "<<i<<" a member?(Y/N)"<<endl;
        cin>>member;
        if(member = 'Y'){
            total = total + x;
        }
        else{
            total = total +(2*x);
        }
    }
    }
    else{
        total = (num_adult*x)+(num_child*y);
    }


    cout<<"Your total is "<<total;
    return 0;
}
