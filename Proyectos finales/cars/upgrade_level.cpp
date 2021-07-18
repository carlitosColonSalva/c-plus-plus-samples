#include <string>
#include <fstream>
using namespace std;
#include <iostream>

int upgrade_level();


int upgrade_level()
{
  int parts[4];
  string info ="";
  int level = 0;
  ifstream infile;
  infile.open("upgrades.txt");

for (int i = 0; i <= 3; i++)
{
  infile >> parts[i];
  level +=  parts[i];
}  
 infile.close();
 if (level == 0) {level = 1;}
return level;
} // end of upgrade_level()