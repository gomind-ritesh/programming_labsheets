/*On any day, if the amount of rainfall exceeds the evaporation, it is
considered to be a water surplus. If the rainfall is less than the
evaporation, it is considered to be a water deficit. Write a program that
opens the file created in question 8 (the file name will be input) and reads
the data. It displays the region of highest water surplus, the rainfall and
evaporation for that region as well as the surplus amount. It also displays
the region of highest water deficit, the rainfall and the evaporation
amount as well as the deficit. In case there has been no surplus or no
deficit, the program should display messages accordingly.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream filereader;
    string filename, region;
    string surregion,defregion;
    double highest_surplus = 0.0;
    double highest_deficit = 0.0;
    double surrain, surevap;
    double defrain,defevap;
    double curr_rain, curr_evap;
    bool waterdiscrepancy = false;

    cout<<"Input the name of the file you want to open: ";
    cin>>filename;
    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\"+filename+".txt");

    while (!filereader.eof()){
        filereader>>region;
        filereader>>curr_rain;
        filereader>>curr_evap;
        if (curr_rain > curr_evap){
                waterdiscrepancy =  true;
            if (curr_rain - curr_evap > highest_surplus){
                highest_surplus = curr_rain - curr_evap;
                surregion = region;
                surrain = curr_rain;
                surevap = curr_evap;
            }
        }
        if (curr_evap > curr_rain){
            waterdiscrepancy =  true;
            if(curr_evap - curr_rain > highest_deficit){
                highest_deficit = curr_evap - curr_rain;
                defregion = region;
                defrain = curr_rain;
                defevap = curr_evap;
            }
        }

    }

    if (waterdiscrepancy = false){
        cout<<"No surplus or deficit found"<<endl;
    }
    else{
        cout<<"Region with highest surplus: "<<surregion<<endl<<"Rainfall ="<<surrain<<endl<<"Evaporation ="<<surevap<<endl<<"Surplus ="<<highest_surplus<<endl;
        cout<<"Region with highest deficit: "<<defregion<<endl<<"Rainfall ="<<defrain<<endl<<"Evaporation ="<<defevap<<endl<<"Deficit ="<<highest_deficit<<endl;
    }
    return 0;
}
