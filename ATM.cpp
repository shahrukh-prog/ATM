#include <iostream>

using namespace std;

int BC(int &balance)
{
	cout<<"Your current balance is: "<<balance<<endl;
	cout<<"Thank You for using our services"<<endl;
}
int DA(int &amount, int &balance)
{
	cout<<"Enter Amount: ";
	cin>>amount;
	balance=balance+amount;
	cout<<"Amount Deposited Succesfully: "<<endl;
	cout<<"Available Balance is: "<<balance<<endl;
	cout<<"Thank You for using our services"<<endl;

}
int WA(int &amount, int &balance)
{
	cout<<"Enter Amount: ";
	cin>>amount;
	if(amount<=balance)
	{
		balance=balance-amount;
		cout<<"Transaction Succesful"<<endl;
		cout<<"Available Balance is: "<<balance<<endl;
		cout<<"Thank You for using our services"<<endl;
	}else cout<<"Not Enough Balance"<<endl;

}
int zakat(int &balance)
{
	int zkt;
	zkt=(balance*2.5)/100;
	cout<<"Your Zakat Is: "<<zkt<<endl;
	balance=balance-zkt;
	cout<<"Available Balance is: "<<balance<<endl;
	cout<<"Thank You for using our services"<<endl;

	
}

int main()
{	
    int pin;
	int balance=20000;
	int amount;
	int choice;
	cout<<"Welcome To STICS Bank"<<endl<<"Enter your pin: ";
	cin>>pin;
	if(pin==1234)
	{ 
	
		cout<<"Enter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			     cout<< BC(balance);
			     break;
		    case 2:
		    	cout<<DA(amount,balance);
		    	  break;
			case 3 :
				cout<<WA(amount, balance);
				  break;
			case 4 :
			    cout<<zakat(balance);
			      break;
			default :
				cout<<"Invalid Choice!"<<endl;
		}
		
	}else 
	cout<<"Invalid Code"<<endl;
	char cont;
	cout<<"Do you want another transaction..?";
	cin>>cont;
	cout<<endl;
	if(cont=='y'){
		return main();
	}else cout<<"Good Bye";
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

