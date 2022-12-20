/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program reads quiz input for 3 stduents from the user
      then computes the average of all their quizzes and finds the minimum
      grade among all the quizzes
*/
#include "Grades_Header.h"
#include "computeAverage.cpp"
#include "computeMinimum.cpp"
#include<iostream>
using namespace std;

int main() {
  const int ROWS=3;
  float grades[ROWS][COLS];
  float minimum[ROWS];

  for(int row=0; row<ROWS; row++) {
    for(int col=0; col<COLS-1; col++) {
      cout<<"Enter QUIZ #"<<col+1<<" for STUDENT #"<<row+1<<": ";
      cin>>grades[row][col];
    }
  }

  computeMinimum(grades, ROWS, minimum);
  computeAverage(grades, ROWS, minimum);

  for(int row=0; row<ROWS; row++) {
    for(int col=0; col<COLS; col++) {
      cout<<grades[row][col]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
