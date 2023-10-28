/*Write a program that merges the contents of two text files, file1.txt and
file2.txt and merges their contents in a third file, target.txt.*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
      string filetext,buffer;
    ifstream filereader;
    ofstream filewriter;

    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\file1.txt");
    while(!filereader.eof()){
        getline(filereader,filetext);
        filewriter.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\file2.txt",ios::app);
        filewriter<<filetext<<"\n";
        filewriter.close();
    }
    getline(filereader,buffer);
    filereader.close();

    filereader.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\file2.txt");
    while(!filereader.eof()){
        getline(filereader,filetext);
        filewriter.open("C:\\Users\\User\\Desktop\\Programming Labsheets\\Labsheet 7 files\\target.txt",ios::app);
        filewriter<<filetext<<"\n";
        filewriter.close();
    }
    filereader.close();

    return 0;
}
