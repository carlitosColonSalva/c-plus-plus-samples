#include <iostream>
using namespace std;
#include <fstream>

void upgrade(double money) {
double  parts_cost[4]  = {50,100,150,200};

clear();

cout << "YOUR MONEY TOTAL IS $" << money << endl << endl;  

  int car1_parts[4];
  ifstream infile;
  infile.open("upgrades.txt");
  bool all_upgraded = true;
  string part_desc[4] = {"ENGINE", "TRANSMISSION", "TIRES", "DIFFERENTIAL"};
  for (int i = 0; i <= 3; i++)
  {
      infile >> car1_parts[i];
      if (car1_parts[i] < 3)
      { all_upgraded = false; }
  }  
  infile.close();

int part;
  // choose part to upgrade
  if (all_upgraded == true)
  { cout << "ALL PARTS UPGRADED!" << endl; }
  
  else
  {
    do {
      // clear();
      cout << endl << "---------" << endl;
	  infile.open("upgrades.txt");
      for (int i = 0; i <= 3; i++) {
		
		infile >> car1_parts[i];
		cout << "UPGRADE LEVEL OF " << part_desc[i] << " IS " << car1_parts[i] << endl;		
		cout << "ENTER " << i << " TO UPGRADE " << part_desc[i] << endl << endl;}
	  infile.close();
      
	 for (int i = 1; i <= 3; i++)
         { cout << "COST TO UPGRADE A PART TO LEVEL " << i << " IS $" << parts_cost[i] << endl; }
    
	   
	  
	  
      cout << "CHOOSE PART TO UPGRADE (-1 TO GO BACK): ";
      
      cin >> part;
      clear();
cout << "YOUR MONEY TOTAL IS $" << money << endl << endl;      
      if (part != -1) {
      if (car1_parts[part] == 3) {
	cout << "THAT PART HAS ALREADY BEEN UPGRADED"; }
      else {
	if (parts_cost[car1_parts[part]] > money) {cout << "NOT ENOUGH MONEY FOR THAT PART" << endl; cin.get();}
	else {
	  money -= parts_cost[car1_parts[part]];
	  set_money(money);
	  car1_parts[part] += 1;	  
	  
	  // save upgrades to file
	    ofstream outi;
	    outi.open("upgrades.txt", ios::out);
	    for (int i = 0; i <= 3; i++)
	    { outi << car1_parts[i] << endl; }
	    outi.close();}}}}
    while (part != -1);}
} // end of upgrade()