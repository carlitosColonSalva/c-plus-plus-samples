main

  pin_verify = false
  
  print "WELCOME TO RANDOM BANK"
  system("pause")()

  print "ENTER ACCOUNT NUMBER: "
  read account_number


  pin_verify = pin_check(account_number)  
  if pin_verify == true)
  {
    do
    {
  
     print "ENTER ACCOUNT TYPE 	1 FOR CHECKING, 2 FOR SAVINGS, 3 FOR CREDIT: "
   read account_type
   transactions_2[many_transactions][0] = account_type
   
   
   print "ENTER TRANSACTION TYPE: "
   switch(account_type)
  {
      case 1:
      case 2:
	// balance, withdraws, transfer
	print "1 FOR BALANCE, 2 FOR WITHDRAW, 3 FOR TRANSFER: "
      break   
      
      case 3:
     print "1 FOR BALANCE: "
     
      break
  }
   
  
  print ": "
  read transaction_type
  transactions_2[many_transactions][1] = transaction_type
  
  clear()
  
  switch(transaction_type)
  {
      case 1: // balance
      balance(accounts[account_type - 1])
      break
    
      case 2: // withdraws
     transactions_1[many_transactions][1] = withdraws(accounts[account_type - 1]) // get quantity
     accounts[account_type - 1] -= transactions_1[many_transactions][1]
     transactions_1[many_transactions][0] = accounts[account_type - 1]
      break
      
      case 3: // transfer
     transactions_1[many_transactions][1] = transfer(accounts[account_type - 1]) // get quantity
     if account_type - 1 == 0)
     {
       accounts[0] -= transactions_1[many_transactions][1]
       accounts[1] += transactions_1[many_transactions][1]
       transactions_2[many_transactions][2] = 0
     }
      else
     {
       accounts[1] -= transactions_1[many_transactions][1]
       accounts[0] += transactions_1[many_transactions][1]
     }
      transactions_1[many_transactions][0] = accounts[account_type - 1]
      transactions_2[many_transactions][2] = 1
      break
  }
  
     transactions_2[many_transactions][1] = transaction_type
  
system("pause")()
 clear() 
  
  
      
      	many_transactions++
	if many_transactions < 10)
	{
	another_transaction = false 
	print "ANOTHER TRANSACTION? 1 FOR YES AND 0 FOR NO: 	"
	read another_transaction
	}

    }
    while (another_transaction == true && many_transactions < 10)
    
  }
  else
  {
    print "WRONG PASSWORD EXITING NOW" 
  }
  
  clear()
print "GOODBYE" system("pause")()
  return 0
end of main()



pin_check(account_number)
{
try_pin = 3
pin_correct = false
int pin
int right_pin = 0000 // really has to be from another source
  
  
  
  
    while (try_pin > 0 && pin_correct == false)
  {
    print "ENTER PIN: "
    read pin
    if pin == right_pin)
    {
      pin_correct = true
    }
    else
    {
      print "WRONG PIN, YOU HAVE " & try_pin - 1 & " TRIES LEFT"
      try_pin--
    }// endif right pin
    
  } // while have pin attempts
  if pin_correct == true)
  {
    if account_number == "*#999")
    {
      // admin()
    }
    else
    {
      // regular user
    } // endif account_number
  }
  else
  {
    print "TOO MANY ATTEMPTS!!!"
  }
  clear()
  return pin_correct
} // end of pin_check()

void balance(double account_balance)
{
  print "balance is: " & account_balance
}

double withdraws(double account_balance)
{
  double how_much = 0
  print "HOW MUCH WILL YOU WITHDRAW? : "
  read how_much
  
  if how_much >= account_balance)
  {
    print "NOT ENOUGH CASH FOR THAT TRANSACTION"
    how_much = 0
  }
  print "YOU WITHDRAWED " & how_much & " YOUR BALANCE NOW IS " & account_balance -how_much
  return how_much
} // end withdraws()

double transfer(double account_balance)
{
    double how_much = 0
    print "HOW MUCH WILL YOU TRANSFER : "
  read how_much
  
  if how_much >= account_balance)
  {
    print "NOT ENOUGH CASH FOR THAT TRANSACTION"
    how_much = 0
  }
  print "YOU TRASFERED " & how_much & " YOUR BALANCE NOW IS " & account_balance - how_much
      return how_much
}

void clear()
{
  system("pause")()
  print string(50, '\n')
  
}

