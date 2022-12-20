/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program reads quiz input for 3 stduents from the user
      then computes the average of all their quizzes and finds the minimum
      grade among all the quizzes
*/


void computeMinimum(float grades[][COLS], int rows, float minimum[]) {
  for(int i=0; i<rows; i++) {
    float minGrade = grades[i][0];
    for(int j=1; j<COLS-1; j++) {
      if(grades[i][j] < minGrade) {
        minGrade = grades[i][j];
      }
    }
    minimum[i] = minGrade;
  }
}
