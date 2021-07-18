#include <iostream>
using namespace std;
#include <cstdlib> // know system
// // linux
#include <conio.h> // windows

char OS();
void windows();
void linux();

int main()
{
char sysV;
sysV = OS();
if (sysV == 'w')
{
windows();
}
else
{
linux();
} // end of if sysV
return 0;
}


char OS()
{
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
sysV ='w';
#else
sysV ='l';
#endif
} // end of OS()


void windows()
{
     bool keepGoing = true;
     char key = ' ';
     while (keepGoing){
       cout << "Enter a key" << endl;
       while(_kbhit()){
         key = _getch();
         cout << "You entered: " << key << endl;
       }
     }
}

void linux()
{
#include <termios.h>
tcgetattr(STDIN_FILENO, &t); //get the current terminal I/O structure
t.c_lflag &= ~ICANON; //Manipulate the flag bits to do what you want it to do
tcsetattr(STDIN_FILENO, TSCANOW, &t); //Apply the new settings
}
	  
	  
	  

