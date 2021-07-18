#include <iostream>
using namespace std;
#include <string>

#include "get_system.cpp"
#include "pause.cpp"
#include "clear.cpp"
#include "set_money.cpp"
#include "money.cpp"
#include "race.cpp"
#include "upgrade.cpp"
#include "reset.cpp"

int main()
{
int menu;

clear();
cout << "WELCOME TO RACING" << endl;
cout << "PRESS ENTER TO START" << endl;
pausey();
// delay here

do{
clear();
cout << "ENTER 1 TO RACE, 2 TO UPGRADE CAR, 3 TO RESET GAME, 0 TO EXIT" << endl;
cout << "WANT TO RACE OR UPGRADE CAR?:  ";

cin >> menu;

switch(menu)
{
case 1:
cout << "PRESS ENTER TO START RACE";
pausey();
race(points());
break;

case 2:
upgrade(points());
break;

case 3:
reset();
break;

case 0:
cout << "BYE" << endl;
break;

default:
cout << "WRONG SELECTION" << endl;

}

} while (menu != 0);
pausey();
return 0;
} // end of main()