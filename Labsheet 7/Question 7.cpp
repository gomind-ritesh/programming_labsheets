/*Write a program that opens the file you created in Question 6 (again, the
file name will be input), reads the data, calculates and display the average

marks of each student and finally displays the student id and average
marks of the student who scored the highest overall average.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    ifstream filereader;
    string ID;
    string Highscorer;
    float marks,sum,average;
    float highest = 0.0;

    cout<<"Enter the name of the file : ";
    cin>>filename;

    filereader.open(filename);

    while(!filereader.eof()){
        file>>ID;

        for(int i = 1, i<=3,i++){
            file>>marks;
            sum+=marks;
        }
        average = sum/3;

        if(average>highest){
            highest = average;
            Highscorer= ID;
        }
    }
    filereader.close();

    cout<<"Highest average scorer ID: "<<Highscorer<<endl;
    cout<<"Highest average: "<<highest<<endl;

    return 0;
}
