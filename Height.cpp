/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program prompts the user to enter 8 student heights
      that are then manipulated by the program and an average is printed
      a subarray of the original array is printed and the original is printed
      as well.
*/

#include <iostream>
using namespace std;

int main() {
  const int SIZE=8;
  int height[SIZE];
  int above_average[SIZE];
  double avg;
  int abovePtr = 0;

  for(int i=0; i<SIZE; ++i) {
    cout<<"Enter height in inches of student #"<<i+1<<": ";
    cin>>height[i];
    avg += height[i];
  }
  avg = avg/8;
  cout<<"Height average: "<<avg<<endl;
  for(int i=0; i<SIZE; ++i) {
    if (height[i] > avg) {
      above_average[abovePtr] = height[i];
      ++abovePtr;
    }
  }
  for(int i=0; i<abovePtr; ++i) {
    cout<<"Height in inches of above average student #"
    <<i+1<<": "<<above_average[i]<<endl;
  }
  cout<<"You entered:"<<endl;
  for(int i=0; i<SIZE; ++i) {
    cout<<"Height in inches of student #"<<i+1<<": "<<height[i]<<endl;
  }
  return 0;
}
