/*Write a program that allows the input of the tariff chosen by a consumer and the number of units
consumed, in a month, and outputs the total amount the consumer has to pay for that month.*/
#include <iostream>

using namespace std;

int main()
{
    int tariff,units;
    float TotalCharge;

    cout<<"Please input tariff number: 110,120,140"<<endl;
    cin>>tariff;

    while (tariff != 110 || tariff!=120 || tariff!=140){
        cout<<"Incorrect tariff input. Please try again"<<endl;
        cin>>tariff;
    }

    cout<<"Please enter the number of units"<<endl;
    cin>>units;

    switch (tariff){
    case 110:
        if (units>150){
            TotalCharge = 44.00+((units-150)*6.50)+(75*4.00)+(50*3.25)+(25*2.75);
        }
        else if(units<=150 && units>75){
                TotalCharge = 44.00+((units-75)*4.00)+(50*3.25)+(25*2.75);
        }
        else if(units<=75 && units>50){
             TotalCharge = 44.00+((units-50)*3.25)+(25*2.75);
        }
        else if(units<=50 && units >25){
            TotalCharge = 44.00+((units-25)*2.75)+(25*2.75);
        }
        else{
            TotalCharge = 44.00+(units*2.75);
        }
        break;
    case 120:
        if (units>150){
            TotalCharge = 184.00+((units-150)*6.00)+(75*4.25)+(50*3.50)+(25*3.00);
        }
        else if(units<=150 && units>75){
                TotalCharge = 184.00+((units-75)*4.25)+(50*3.50)+(25*3.00);
        }
        else if(units<=75 && units>50){
             TotalCharge = 184.00+((units-50)*3.50)+(25*3.00);
        }
        else if(units<=50 && units >25){
            TotalCharge = 184.00+((units-25)*3.00)+(25*3.00);
        }
        else{
            TotalCharge = 184.00+(units*3.00);
        }
        break;
    case 140:
        if (units>150){
            TotalCharge = 360.00+((units-150)*5.75)+(75*4.50)+(50*3.75)+(25*3.25);
        }
        else if(units<=150 && units>75){
                TotalCharge = 360.00+((units-75)*4.50)+(50*3.75)+(25*3.25);
        }
        else if(units<=75 && units>50){
             TotalCharge = 360.00+((units-50)*3.75)+(25*3.25);
        }
        else if(units<=50 && units >25){
            TotalCharge = 360.00+((units-25)*3.25)+(25*3.25);
        }
        else{
            TotalCharge = 360.00+(units*3.25);
        }
        break;
    }

    cout<<"Total bill is "<<TotalCharge;


    return 0;
}
