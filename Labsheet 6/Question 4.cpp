/*The population of rabbits on a small island in Poole Harbour is being monitored. There are
currently 495 rabbits on the island. It is estimated that the population will grow at 20% a year until
the population exceeds 1,000, after which the growth rate will be 10% a year. Write a program to
calculate how many years (integer value) will elapse before the rabbit population exceeds 1,500.
[Please use integral numbers for rabbits – rabbits should not have fractional parts.]*/
#include <iostream>

using namespace std;

int main()
{
    int years = 0;
    int rabbits = 495;

    while(rabbits<=1000){
        rabbits = rabbits*1.2;
        years++;
    }
    while(rabbits<=1500){
        rabbits = rabbits *1.1;
        years++;
    }
    cout<<"It will take "<<years<<" years for the population to exceed 1500";
    return 0;
}
