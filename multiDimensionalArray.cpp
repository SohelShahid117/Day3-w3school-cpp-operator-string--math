#include <iostream>
using namespace std;
int main() {
  // https://www.w3schools.com/cpp/cpp_arrays_multi.asp
  /**/
  cout << "hello\n";
  cout << "hi\n";

  // Array indexes start with 0: [0] is the first element. [1] is the second
  // element, etc.

  string alphabet[2][3] = {{"a", "b", "c"}, {"d", "e", "f"}};
  cout << alphabet[1][2] << "\n";

  string letter[2][3][4] = {
      {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}, {"I", "J", "K", "L"}},
      {{"a", "b", "c", "d"}, {"e", "f", "g", "h"}, {"i", "j", "k", "l"}}};
  cout << letter[1][2][3] << "\n";

  cout
      << "now print all element from Alphabet array-2D by applying for loop:\n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << alphabet[i][j] << "\n";
    }
  }
  cout << "now apply for loop in 3D array\n";

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        cout << letter[i][j][k] << "\n";
      }
    }
  }

  // Change Elements in a Multi-Dimensional Array
  alphabet[0][1] = "XYZ";
  alphabet[1][0] = "pqr";
  cout << "after changing element of 2D-Alphabet array\n";

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << alphabet[i][j] << "\n";
    }
  }



  /*
  Why Multi-Dimensional Arrays?
Multi-dimensional arrays are great at representing grids. This example shows a practical use for them. In the following example we use a multi-dimensional array to represent a small game of Battleship:
  */

 bool ship[4][4] = {
    {0,1,1,0},  //2-ship
    {0,0,0,0},  //0-ship
    {1,0,0,0},  //1-ship
    {0,0,1,1}   //2-ship
 };

 /*
 totalShip==5 nos ;
 so it required 5 hits for destroy 5 ship;
 */
int hits = 0;
int numberOfTurns=0;
while(hits<5){
    int row,col;
    // int col;
    cout<<"enter the row & coloumn number:\n";
    cin>>row;
    cin>>col;

    if(ship[row][col]){
        ship[row][col]=0;
        hits++;
        // cout<<"destroy 1 ship\n";
        cout<<"remaing ship:"<<(5-hits)<<" nos\n";
    }
    else{
        cout<<"oh!!!you miss the hit.Hit again.\n";
    }
    numberOfTurns++;
}
cout<<"total number of turns:"<<numberOfTurns<<"\n";
cout<<"Victory!!!\n";
cout<<"successfully you destroy the all ship.";

  return 0;
}
/*

*/
