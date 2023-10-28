/*For obtaining good crop yields, the amount of rainfall obtained and the
amount of evaporation that has occurred each day have to be monitored.
Evaporation, like rainfall, is measured in mm. Write a program that allows
the input of rainfall and evaporation for a number of regions on a
particular day and write them to a file. The program should allow the
input of the file name. The regions will be numbered as 1, 2, 3 etc.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream filewriter;
    string region, filename;
    float nums;

    cout<<"Please input the name of the file: ";
    cin>>filename;

    filewriter.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\"+filename+".txt");
    do {
        cout<<"Enter the number of the region. Use -1 if you wish to end input"<<endl;
        cin>>region;

        if (region != "-1"){
            filewriter<<region<<endl;
            cout<<"Please input rainfall in mm"<<endl;
            cin>>nums;
            filewriter<<nums<<" mm"<<endl;
            cout<<"Please input evaporation in mm"<<endl;
            cin>>nums;
            filewriter<<nums<<" mm"<<endl;
        }

    }
    while (region!= "-1");

    filewriter.close();

    return 0;
}
