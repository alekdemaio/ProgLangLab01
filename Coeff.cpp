/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program uses two functions to calculate the answer to
      the quadratic equation from double values read from the user
*/
#include<iostream>
using namespace std;

void get_coeff(double& coeff,int pos){
   cout<<"Enter coefficient for position "<<pos<<": ";
   cin>>coeff;
}

double bb_4ac(){
   double a;
   double b;
   double c;

   get_coeff(c,0);
   get_coeff(b,1);
   get_coeff(a,2);

   return (b*b-4*a*c);
}
int main(){
   double ans;
   ans = bb_4ac();
   cout<<"Answer = "<<ans<<endl;
   return 0;
}
