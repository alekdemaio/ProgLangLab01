/* Author:      Alek DeMaio (ademaio@muhlenberg.edu)
      Date:     09 / 19 / 2021
      Description: This program uses a String read from the user and prints
      to the console if there is a 'gene' with a start and stop codon
*/
#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
  char sequence[20];
  int start;
  int stop;
  cout<<"Enter a String containing only the characters A, T, C, & G: ";
  cin>>sequence;
  for(int i=0; i<20 ; i++) {
    if(sequence[i]=='A') {
      if(sequence[i+1]=='T') {
        if(sequence[i+2]=='G') {
          start = i;
        }
      }
    }
  }
  for(int i=0; i<20 ; i++) {
    if(sequence[i]=='T') {
      if(sequence[i+1]=='A') {
        if(sequence[i+2]=='G') {
          stop = i+2;
        }
      }
    }
  }
  for(int i=start; i<stop+1 ; i++) {
    cout<<sequence[i];
  }
  cout<<endl;
  return 0;
}
