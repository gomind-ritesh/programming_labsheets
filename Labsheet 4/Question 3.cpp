/*Write a program that allows as input the annual income of a person and outputs the tax payable by
the person.*/
#include <iostream>

using namespace std;

int main()
{
    int depend;
    float salary,tax;

    cout<<"Please enter your annual salary: "<<endl;
    cin>>salary;

    cout<<"Please enter the number of dependents: "<<endl;
    cin>>depend;
    while(depend < 0 or depend >3){
        cout<<"Number of Dependants out of bounds. Input again"<<endl;
        cin>>depend;
    }


    switch (depend) {
    case 0:
        salary = salary - 255000;
        break;
    case 1:
        salary = salary - 325000;
        break;
    case 2:
        salary = salary - 395000;
        break;
    case 3:
        salary = salary - 455000;
        break;
    }

    if (salary>120000){
        tax =(((salary-120000)*0.25)+(70000*0.2)+(50000*0.15));
    }
    else if(salary<=70000 && salary>50000){
        tax=(((salary-70000)*0.2)+(50000*0.15));
    }
    else{
        tax =(salary*0.15);
    }

    cout<<"Total tax payable is "<<tax;
    return 0;
}
