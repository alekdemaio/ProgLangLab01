/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program reads quiz input for 3 stduents from the user
      then computes the average of all their quizzes and also finds the minimum
      grade among all the quizzes
*/

#include<iostream>
using namespace std;

void computeAverage(float grades[][COLS], int rows, float minimum[]) {
  float avg[3];
  for(int i=0; i<rows; i++) {
    float sum=0;
    for(int j=0; j<COLS-1; j++) {
      sum += grades[i][j];
    }
    avg[i]=(sum-minimum[i])/3;
    grades[i][4]= avg[i];
  }
}
