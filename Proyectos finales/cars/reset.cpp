#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>
#include <fstream>


void reset()
{
ofstream outi;
outi.open("money.txt", ios::out);
outi << 0 << endl;
outi.close();


outi.open("upgrades.txt", ios::out);
outi << 0 << endl;
outi << 0 << endl;
outi << 0 << endl;
outi << 0 << endl;
outi.close();

cout << "GAME RESET SUCCESS" << endl;
pausey();
}
