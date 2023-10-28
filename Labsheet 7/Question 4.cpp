/*Write a program that copies the contents of a file input.dat into a file
output.dat.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filetext;
    ifstream filereader;
    ofstream filewriter;

    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\input.dat.txt");
    while(!filereader.eof()){
        getline(filereader,filetext);
        filewriter.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\output.dat.txt",ios::app);
        filewriter<<filetext<<"\n";
        filewriter.close();
    }
    filereader.close();


    return 0;
}
