/*A car travels a distance d1 at a speed s1, followed by a distance d2 at a speed s2 and finally a
distance d3 at a speed s3. Assuming all distances to be in km and all speeds in km/h, write a
program to input the values of s1, s2, s3 and d1, d2, d3 and display:
 The total distance travelled.
 The total time taken for the whole journey and
 The average speed over the journey. */

#include <iostream>

using namespace std;

int main()
{
   string id;
   double d1,d2,d3,totald,s1,s2,s3,time;

   cout<<("Enter the three distances")<<endl;
   cin>>d1,d2,d3;
   totald = d1+d2+d3;

   cout<<("Enter the speeds")<<endl;
   cin>>s1,s2,s3;

   time = (d1/s1)+(d2/s2)+(d3/s3);

   cout<<("Total distance traveled is:")<<totald<<endl;
   cout<<("Total time taken is:")<<time<<endl;
   cout<<("Average speed is: ")<<totald/time<<endl;


    return 0;
}
