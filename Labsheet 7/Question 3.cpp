/*Write a program to read the contents of file Squares.txt and write the
sum of all the numbers, the average of all the numbers, the largest
number and the smallest number in a file named Analysis.txt, in the
following format:
Sum 165
Average 55
Largest 81
Smallest 1*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream filereader;
    ofstream filewriter;
    string header;
    int num,sum;
    int counter = 0;
    int largest = -999999999;
    int smallest = 999999999;
    float average;

    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\Squares.txt");
    getline(filereader,header);

    while (!filereader.eof()){
        filereader>>num;;
        sum = sum+num;
        if (num>largest){
            largest = num;
        }
        else if (num<smallest){
            smallest = num;
       }
        counter = counter + 1;
    }
    average = sum/counter;

    filereader.close();

    filewriter.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\Analysis.txt");
    filewriter<<"Sum          "<<sum<<endl;
    filewriter<<"Average      "<<average<<endl;
    filewriter<<"Largest      "<<largest<<endl;
    filewriter<<"Smallest     "<<smallest<<endl;

    return 0;
}
