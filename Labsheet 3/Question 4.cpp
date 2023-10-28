/*A baby-sitter charges Rs 250 an hour until 21:00 hrs. when the rate drops to Rs 175 an
hour (the children are in bed). Write a program that accepts a starting time and ending
time in hours and calculates the total baby-sitting bill. You can assume that the baby-
sitter leaves at latest by 23: hrs. (Note: Consider full hours only).*/

#include <iostream>

using namespace std;

int main()
{
    int hourIn, hourOut;
    float reg_wages, bed_wages;

    cout<<"Please enter the time of entry and the time of leaving"<<endl;
    cin>>hourIn>>hourOut;
    if (hourOut>21){
        bed_wages = (hourOut-21)*175;
        reg_wages = (20-hourIn)*250;
    }
    else{
        reg_wages = (hourOut- hourIn)*250;
    }
    cout<<"Total fees payable = "<<reg_wages+bed_wages<<endl;
    return 0;
}
