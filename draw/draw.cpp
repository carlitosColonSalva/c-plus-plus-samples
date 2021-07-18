#include <iostream>
using namespace std;
#include <gl.h>


void main()
{

int driver = DETECT,node;
cout << driver;
initgraph(&driver,&node,"store.txt");

for (int x = 0; x <= 200; x++)
{
putpixel(x,x,WHITE);
}
cin.get();
}

