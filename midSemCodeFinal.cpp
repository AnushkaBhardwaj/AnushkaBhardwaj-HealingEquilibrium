#include<iostream>
#include<stdlib.h>

using namespace std;

	string name;
	string address;
	string email;
	string phno;
	string pincode;
	string user;
	string pass;
	string cfm_pass;
	string luser;
	string lpass;
	int amt=0;
	int total_amt=0;

class Shop 
{
	public:
		void shop() //home page
		{
			int items;
			Main_Menu:
			cout<<"\n\n\nSelect <1> for Medicines.";
			cout<<"\nSelect <2> for Equipments.";
			cout<<"\nSelect <3> for Other drugstore products";
			cout<<"\n\nEnter your choice:";
			cin>>items;
			
			switch(items)
			{
				case 1: //medicines();
						break;
						
				case 2: //equipments();
						break;
						
				case 3: //Others();
						break;
						
				default: 
						cout<<"\nPlease select from the given options."; 
			}
		}
};


class Login:public Shop
{
	public:
		void login() //defining the login function
		{
			relogin:
			cout<<"\n\n\nEnter username:";
			cin>>luser;
			
			cout<<"\nEnter password:";
			cin>>lpass;
			
			if((user==luser)&&(pass==lpass))
			{
				shop();	
			}	
			else
			{
				cout<<"\n\nYour username or password is incorrect.";
				cout<<"\nPlease try again.";
				goto relogin; //checks the password & username, if wrong repeats
			}
		}
};	
	
class Signup:public Login
{
	public:
		void signup() //defining the signup function
		{
			cout<<"\n\n\nPlease enter the following details:";
			
			cout<<"\n\n Name:";
			cin>>name;	
			
		    cout<<"\n Phone number:";
			cin>>phno;
					
			cout<<"\n E-mail id:";
			cin>>email;
			
			cout<<"\n Username:";
			cin>>user;
			
			Password:
			cout<<"\n Create Password:";
			cin>>pass;
			
			cout<<"\nConfirm Password:";
			cin>>cfm_pass;	
			
			if(pass==cfm_pass)
			{
				cout<<"\n\n\t\t*************CONGRATULATIONS**************\n";
				cout<<"\n\t\tYour account has been successfully created";
				login(); //calling the login function
				
			}
			else
			{
				cout<<"\nPassword does not match, please try again.";
				goto Password; //checks the password, if wrong repeats
			}
		}
		
};
	
class Welcome: public Signup 
{
	public:
		Welcome() //constructor
		{
			int ch;
			int wel,line,end1;
    		cout<<"\n\n\n\n\n";
			cout<<"\n\n\n   Welcome to Healing Equilibrium\n";
			cout<<"\n\tLOADING\n\n";
	
			for(wel=1;wel<=50;wel++) 
			{
				cout<<"=";
			}
			cout<<"\n\nPress <1> if you are a new user.";
			cout<<"\nPress <2> if you are an existing user.";
			cout<<"\nEnter your choice: ";			
			cin>>ch;
				
				switch(ch)
				{
					case 1: signup(); //calling the signup function
							break;
										 
					case 2: login(); //calling the login function
							break;
								
					default:
							cout<<"Please select from the given options.";
				}
		}
};
	
int main()	
{
	Welcome obj; //declaring the object of class 'Welcome'
}
