/*Note : No has a width of 5, Name a width of 15, and Marks a width of 10, the marks are displayed with a precision of 2 decimal places.*/


#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<setw(5) << "No"<<setw(15) << "Name"<<setw(10) << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<setw(5)<<  r+1 
          <<setw(15)<<  names[r]
          <<setw(10)<<fixed<<showpoint<<setprecision(2)<< marks[r] << endl;
 }
}