#include <iostream>
using namespace std;

#include "get_system.cpp"
#include "clear.cpp"
#include "set_money.cpp"
#include "money.cpp"
#include "race.cpp"
#include "upgrade.cpp"
#include "reset.cpp"

int main()
{
int menu;

cout << "WELCOME TO RACING" << endl;
cout << "PRESS ENTER TO START" << endl;
cin.get();
// delay here

do{
delay();
cout << "ENTER 1 TO RACE, 2 TO UPGRADE CAR, 3 TO RESET GAME, 0 TO EXIT" << endl;
cout << "WANT TO RACE OR UPGRADE CAR?:  ";

cin >> menu;

switch(menu)
{
case 1:
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

default:
cout << "WRONG SELECTION" << endl;

}

} while (menu != 0);

return 0;
} // end of main()