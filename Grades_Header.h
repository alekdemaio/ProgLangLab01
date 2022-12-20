/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program reads quiz input for 3 stduents from the user
      then computes the average of all their quizzes and finds the minimum
      grade among all the quizzes
*/
const int COLS = 5;

void computeAverage(float grades[][COLS], int rows, float minimum[]);
void computeMinimum(float grades[][COLS], int rows, float minimum[]);
