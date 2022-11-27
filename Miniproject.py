import os
i=1
totalamount=10000
totaldepo=0
totalwith=0
totaltrans=0
os.system('cls')


def login():
 print("\n\t\tWELCOME TO ONLINE BANKING SYSTEM")
 name = input("\n\t\tEnter your name: ")
 acc = int(input("\n\n\tEnter your account number: "))

 while 1 in i:
    password =int(input("\n\tEnter password:"))
    if(password==12345):
      print("\n\tLogin success..")
      print("\n\nPress any key to continue..")
      break
    else :
      print("\n Wrong Password..")


def list() :      
  print("\n\t\tWELCOME TO ONLINE BANKING SYSTEM")
  print("\n\n\tWhat do you want to do..")
  print("\n\n\t1. Check Balance")
  print("\n\t2. Deposit Amount")
  print("\n\t3. Withdraw Amount")
  print("\n\t4. Transfer Amount")
  print("\n\t5. Account History")
  print("\n\t6. Check details")
  print("\n\t7. Exit")
  print("\n\t8. Logout")

def balanceinqury():
	print("\n\tTotal balance: ",totalamount)
	print("\n\nPress any key to continue..")
  

def deposit():
    depoamo = input("\n\tEnter the amount you want to Deposit: ")
    totalamount+=depoamo
    totaldepo+=depoamo
    print("\n\tAmount added Succsessfully...")
    print("\n\nPress any key to continue..")

def withdraw():
  while 1 in i:
    withamo = input("\n\tEnter the amount you want to Withdraw: ")
    if (withamo<=totalamount):
        totalamount-=withamo
        totalwith+=withamo
        print("\n\tAmount withdraw Succsessfully...")
        print("\nPress any key to continue..")
        break
    else:
        print("]n\tWithdraw failed..")
        print("\n\t------ Insufficient Balance ------")

def transferamount():
     
    while 1 in i:
      transamo = input("\n\tEnter the amount you want to Transfer: ")
      if (transamo<=totalamount):
        totalamount-=transamo
        totaltrans+=transamo
        transacc = int(input("\n\tEnetr Account no. where you want to transfer Money"))
        print("\n\tAmount transfered Succsessfully...")
        print("\nPress any key to choose again..")
        break
      else:
        print("\n\tTransfer failed..")
        print("\n\t------ Insufficient Balance ------")

def accountdetails():
	print("\n\tYour Name= ",name)
  print("\n\tAccount Number= ",acc)
  print("\n\tTotal Amount= ",totalamount) 
  print("\n\tTotal Deposited Amount= ",totaldepo) 
  print("\n\tTotal Withdrawn Amount= ",totalwith) 
  print("\n\tTotal Transfered Amount= ",totaltrans) 
  print("\n\nPress any key to continue..")

def accounthistory():
	print("\n\tYour account history")
  print("\n\n\tTotal Deposited Amount= ",totaldepo) 
  print("\n\tTotal Withdrawn Amount= ",totalwith)
  print("\n\tTotal Transfered Amount= ",totaltrans) 
  print("\n\nPress any key to continue..")

def logout():
	print("\n\tLogout successfull..")
	login()

def end():
  os.system('cls')
  print("\n------------------------------------\n")
  print("\n\tYour Name= ",name)
  print("\n\tAccount Number= ",acc)
  print("\n\tTotal Amount= ",totalamount) 
  print("\n\tTotal Deposited Amount= ",totaldepo)
  print("\n\tTotal Withdrawn Amount= ",totalwith)
  print("\n\tTotal Transfered Amount= ",totaltrans) 
  print("\n\n\t**************Thanks****************")
  exit()

def default():
  print("\n------ Invalid Choice ------")
  print("\nPress any key to choose again..")

login()
while 1 in i:
 os.system('cls')
 list()
 ch = int(input("\n\n\tEnter your choice : "))
 operations = {
    1:balanceinqury,
    2:deposit,
    3:withdraw,
    4:transferamount,
    5:accounthistory,
    6:accountdetails,
    7:end,
    8:logout,
  }
 operations.get(ch,default)()