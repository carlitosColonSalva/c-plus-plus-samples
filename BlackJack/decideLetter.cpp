#include <iostream>
using namespace std;
#include <string>

string decideLetter(int);



int main()
{

int num = 0;
string letter = "";
string p = "";

cout << "enter number: ";
cin >> num;

letter = decideLetter(num);

cout << letter;

cout << "pause";
cin >> p;
return 0;
}



string decideLetter(int num)
{
string letter = "";
switch (num)
{

case 13:
letter = "k";
break;

case 12:
letter = "q";
break;

case 11:
letter = "j";

case 1:
letter = "a";

default:
letter = num + 48; //using ascii table

} // end of switch
cout << letter;
return letter;
} // end of function decideLetter
