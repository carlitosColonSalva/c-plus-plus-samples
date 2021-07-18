#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>
#include <fstream>

double points()
{
double mymoney;
ifstream infile;
  
  infile.open("money.txt");
  infile >> mymoney;
  infile.close();
return mymoney;
}
