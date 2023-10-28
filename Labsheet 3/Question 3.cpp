/*A factory pays its workers at the rate of Rs 100 per hour if the number of hours worked
(per week) does not exceed 40. Otherwise, the hourly rate is Rs 150 for any hour worked
above 40 in a given week. Write a program that allows the input of number of hours
worked in a week and calculates and displays the wages for that week.*/
#include <iostream>

using namespace std;

int main()
{
    float hours, wages;

    cout<<"Please input the number of worked: "<<endl;
    cin>>hours;

    if(hours<40){
        wages = hours*100;
    }
    else{
        wages = (40*100)+((hours-40)*150);
    }

    cout<<"The total wages is "<<wages;
    return 0;
}
