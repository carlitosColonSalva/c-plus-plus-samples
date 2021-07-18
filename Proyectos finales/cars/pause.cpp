#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>
#include <fstream>

void pausey()
{

char cur_system = get_system();
if (cur_system == 'w')
  { system("pause"); }
else
  { system("read p"); }
}
