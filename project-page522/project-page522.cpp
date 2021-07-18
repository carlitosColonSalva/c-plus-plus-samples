//TryThis15.cpp
//Displays the contents of a two-dimensional array
//Created/revised by <your name> on <current date>

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;


 int GetRand();

 int main()
 {
 //declare and initialize array
 int orders[4][3] = {0};

 //enter data into the array
 int region = 0;
 int month = 0;
 while (region < 4)
 {
 while (month < 3)
 {
 cout << "Number of orders for Region "
 << region + 1 << ", Month "
 << month + 1 << ": ";

 orders[region][month] = GetRand();
 month += 1;
 } //end while
 region += 1;
 month = 0;
 } //end while

 //display the contents of the array
 region = 0;
 month = 0;
 do //begin outer loop
 {
 cout << "Region " << region + 1
 << ": " << endl;
 do //begin nested loop
 {
 cout << " Month " << month + 1
 << ": ";
 cout << orders[region][month] << endl;
 month += 1;
 } while (month < 3);
 region += 1;
 month = 0;
 } while (region < 4);

cin.get();
return 0;
 } //end of main function
 
 


int GetRand()
{
	int num = 0;
	srand(time(NULL));
	num = 12 + rand() % (60 - 12 + 1);
	return num;
} // end of GetRand()
 
 
 
