#include <iostream>
using namespace std;

bool pin_check(string);
void clear();
void balance(double);
double withdraws(double);
double transfer(double);
double check_bills(double); // this is to know if transaction is in multiples of 20 or 10

int many_transactions = 0;
int transaction_type = 0;
int account_type = 0;
double accounts[4] ={100,500,50,5000};// how much money in each account
// the balances order are 

bool another_transaction = true;
// up to 10 transactions
double transactions_1[10][2]; // balance, quantity
int transactions_2[10][3]; // account_type, transaction_type, account_secondary

int main()


{
  string account_number;
  bool pin_verify = false;
  
  cout << "WELCOME TO RANDOM BANK";
  cin.get();

  cout << "ENTER ACCOUNT NUMBER: ";
  cin >> account_number;


  pin_verify = pin_check(account_number);  
  if (pin_verify == true)
  {
    do
    {
  
     cout << "ENTER ACCOUNT TYPE 	1 FOR CHECKING, 2 FOR SAVINGS, 3 FOR CREDIT: ";
   cin >> account_type;
   transactions_2[many_transactions][0] = account_type;
   
   
   cout << "ENTER TRANSACTION TYPE: ";
   switch(account_type)
  {
      case 1:
      case 2:
	// balance, withdraws, transfer
	cout << "1 to know BALANCE, 2 FOR WITHDRAW, 3 FOR TRANSFER: ";
      break;   
      
      case 3:
     cout << "1 FOR BALANCE: ";
     
      break;
  }
   
  
  cout << ": ";
  cin >> transaction_type;
  transactions_2[many_transactions][1] = transaction_type;
  
  clear();
  
  switch(transaction_type)
  {
      case 1: // balance()
      balance(accounts[account_type - 1]);
      break;
    
      case 2: // withdraws()
     transactions_1[many_transactions][1] = withdraws(accounts[account_type - 1]); // get quantity
     accounts[account_type - 1] -= transactions_1[many_transactions][1];
     transactions_1[many_transactions][0] = accounts[account_type - 1];
      break;
      
      case 3: // transfer()
     transactions_1[many_transactions][1] = transfer(accounts[account_type - 1]); // get quantity
     if (account_type - 1 == 0)
     {
       accounts[0] -= transactions_1[many_transactions][1];
       accounts[1] += transactions_1[many_transactions][1];
       transactions_2[many_transactions][2] = 0;
     }
      else
     {
       accounts[1] -= transactions_1[many_transactions][1];
       accounts[0] += transactions_1[many_transactions][1];
     }
      transactions_1[many_transactions][0] = accounts[account_type - 1];
      transactions_2[many_transactions][2] = 1;
      break;
  }
  
     transactions_2[many_transactions][1] = transaction_type;
  
cin.get();
 clear(); 
  
  
      
      	many_transactions++;
	if (many_transactions < 10)
	{
	another_transaction = false; 
	cout << "ANOTHER TRANSACTION? 1 FOR YES AND 0 FOR NO: 	";
	cin >> another_transaction;
	}

    }
    while (another_transaction == true && many_transactions < 10);
    
  }
  else
  {
    cout << "WRONG PASSWORD EXITING NOW"; 
  }
  
  clear();
cout << "GOODBYE"; cin.get();
  return 0;
} // end of main();



bool pin_check(string account_number)
{
int try_pin = 3;
bool pin_correct = false;
int pin;
int right_pin = 0000; // really has to be from another source
  
  
  
  
    while (try_pin > 0 && pin_correct == false)
  {
    cout << "ENTER PIN: ";
    cin >> pin;
    if (pin == right_pin)
    {
      pin_correct = true;
    }
    else
    {
      cout << "WRONG PIN, YOU HAVE " << try_pin - 1 << " TRIES LEFT";
      try_pin--;
    }// endif right pin
    
  } // while have pin attempts
  if (pin_correct != true)
  {
    cout << "TOO MANY ATTEMPTS!!!";
  }
  else
  {
   if (account_number == "*#999")
    {
      // admin();
    }
    else
    {
      // regular user
    } // end if account_number
  }
  clear();
  return pin_correct;
} // end of bool pin_check()

void balance(double account_balance)
{
  cout << "balance is: " << account_balance;
}

double withdraws(double account_balance)
{
double how_much = check_bills(account_balance); // this is to know if transaction is in multiples of 20 or 10

  cout << "YOU WITHDRAWED " << how_much << " YOUR BALANCE NOW IS " << account_balance - how_much;
  return how_much;
} // end withdraws()

double transfer(double account_balance)
{
    double how_much = 0;
    cout << "HOW MUCH WILL YOU TRANSFER : ";
  cin >> how_much;
  check_bills(account_balance); // this is to know if transaction is in multiples of 20 or 10
  if (how_much >= account_balance)
  {
    cout << "NOT ENOUGH CASH FOR THAT TRANSACTION";
    how_much = 0;
  }
  cout << "YOU TRASFERED " << how_much << " YOUR BALANCE NOW IS " << account_balance - how_much;
      return how_much;
}

void clear()
{
  cin.get();
  cout << string(50, '\n');
  
}
double check_bills(double account_balance)
{

double how_much = 0;
bool can_be_used = false;

while(can_be_used = false)
{

	cout << "HOW MUCH WILL YOU WITHDRAW? : ";
	cin >> how_much;

	if (how_much >= account_balance) 
		{ cout << "NOT ENOUGH CASH FOR THAT TRANSACTION"; }
	else {
		for (int count = 10; count <= account_balance; count += 10) {
			if (count == how_much)
				{ can_be_used = true; }
}}}				
return how_much;
} // end of check_bills()