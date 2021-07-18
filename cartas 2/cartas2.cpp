#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void draw(int, int);
void clear();

int main()
{
int choice;
cout << "ENTER NUMBER VALUE OF CARD: ";
cin >> choice;

clear();

int icon;
cout << "1 FOR SQUARE" << endl;
cout << "2 FOR CIRCLE" << endl;
cout << "3 FOR TRIANGLE" << endl;
cout << "4 FOR RECTANGLE" << endl;
cout << "ENTER NUMBER THAT REPRESENTS ICON: ";
cin >> icon;

clear();

draw(choice,icon);



cin.get();
} // end of main

void draw(int num, int icon)
{
char obj;
char letter;

if (num <= 9)
{
letter = num + 48;
}
else
{
switch (num)
{
  
case 10:
letter = '0';
break;

case 11:
letter = 'J';
break;

case 12:
letter = 'Q';
break;

case 13:
letter = 'k';
}
}



switch (icon)
{
case 1:
obj = '-';
break;

case 2:
obj = 'o';
break;

case 3:
obj = '<';
break;

case 4:
obj = '=';
break;
}


ifstream infile;
string drawing ="";
string drawing1, drawing2, drawing3;
infile.open("drawing.txt");

getline(infile,drawing, '#');
cout << drawing << endl;


getline(infile,drawing,'#');
drawing1 = drawing;
getline(infile,drawing,'#');
drawing2 = drawing;
getline(infile,drawing,'#');
drawing3 = drawing;

cout << drawing1 << obj << drawing2 << obj << drawing3 << endl;

getline(infile,drawing,'#');
drawing1 = drawing;
getline(infile,drawing,'#');
drawing2 = drawing;

cout << drawing1 << letter << drawing2 << endl;


getline(infile,drawing,'#');
drawing1 = drawing;
getline(infile,drawing,'#');
drawing2 = drawing;
getline(infile,drawing,'#');
drawing3 = drawing;

cout << drawing1 << obj << drawing2 << obj << drawing3 << endl;



getline(infile,drawing,'#');
cout << drawing << endl;

infile.close();


} // end of draw


void clear()
{
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
system("cls");
#else
system("clear");
#endif
} // end of clear()
