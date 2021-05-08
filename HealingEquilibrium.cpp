#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string>

using namespace std;
void welcome();
void title();
int menu();

int cart();
void nameask();

int medicineprice,tprice=0,num_items=0,card1=0;
string cart_medicines[21];
int cart_medicine_price[21];
string name("none");
string medicinex[3];

class MEDICINE
{
public:
	
	string medicine0[3]={"Masks N-95","Magmum health & safety pvt ltd.","****"};
	string medicine1[3]={"Sanitizer 500ml","Dettol","*****"};
	string medicine2[3]={"Oxymeter","Brand Villa","****"};
	string medicine3[3]={"Paracetamol/strip","McNeil consumer healthcare","****"};
	string medicine4[3]={"Crocin","GSK consumer","****"};
	string medicine5[3]={"Dolo 650 tablet","Micro Labs ltd.","*****"};
	string medicine6[3]={"Honitous 200ml","Dabur","*****"};
	string medicine7[3]={"Azee 500mg","Cipla","***"};
	string medicine8[3]={"Chericof syrup","Sun pharamaceutical industries ltd","****"};
	string medicine9[3]={"Monadine","Franco-Indian pharamaceutical pvt ltd.","***"};
	string medicine10[3]={"Allegra","Sanofi India ltd.","***"};
	string medicine11[3]={"Citrizine","Ranbaxy laboratories ltd (RLL)","****"};
	string medicine12[3]={"Naproxen","Ranbaxy laboratories ltd (RLL)","*****"};
	string medicine13[3]={"Crocin","GSK consumer","****"};
	string medicine14[3]={"Disprin","Reckitt Benckiser","***"};
	string medicine15[3]={"Limcee vitamin c","Arvincare","***"};
	string medicine16[3]={"Calcium tablets","Dabur","*****"};
	string medicine17[3]={"Amla Giloy tablets","Dabur","*****"};
	
	
	string sub0[3]={"Masks N-95","Sanitizer 500ml","Oximeter"};
	string sub1[3]={"Paracetamol 10/strip","Crocin 10/strip","Dolo 650 tablet 10/strip"};
	string sub2[3]={"Honitous 200ml","Azee 500mg 10/strip","Chericof syrup"};
	string sub3[3]={"Monadine 10/strip","Allegra 120mg 10/strip","Citragen 10/strip"};
	string sub4[3]={"Naproxen 500mg 10/strip","Crocin 10/strip","Disprin 10/strip"};
	string sub5[3]={"Limcee vitamin c 10/strip","Calcium tablets/bottle","Amla Giloy tablets 10/strip"};
	
	int medicine_price[18]={145,250,1499,70,30,27,149,67,78,122,17,57,30,11,75,90,185,150};
	
	int choices()
	{
	try_again:
	system("cls");
	title(); //heading
	int ch_sub,ch_medicine;
	
	cout<<"Please select your choice (1-6):\n\n";
	cout<<"1. EQUIPMENTS\n";
	cout<<"2. FEVER\n";
	cout<<"3. COLD & COUGH\n";
	cout<<"4. ANTI-ALLERGY\n";
	cout<<"5. HEADACHE\n";
	cout<<"6. MULTI VITAMINS\n";
	cin>>ch_sub;
	
	system("cls");
	title();
	cout<<"Please Select your medicine (1-3)\n\n";
	
	switch(ch_sub)
	{
		case 1:
			cout<<"1. "<<sub0[0]<<"\n";
			cout<<"2. "<<sub0[1]<<"\n";
			cout<<"3. "<<sub0[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine-1);
			
		case 2:
			cout<<"1. "<<sub1[0]<<"\n";
			cout<<"2. "<<sub1[1]<<"\n";
			cout<<"3. "<<sub1[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine+3-1);
			
		case 3:
			cout<<"1. "<<sub2[0]<<"\n";
			cout<<"2. "<<sub2[1]<<"\n";
			cout<<"3. "<<sub2[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine+6-1);
		
		case 4:
			cout<<"1. "<<sub3[0]<<"\n";
			cout<<"2. "<<sub3[1]<<"\n";
			cout<<"3. "<<sub3[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine+9-1);
		
		case 5:
			cout<<"1. "<<sub4[0]<<"\n";
			cout<<"2. "<<sub4[1]<<"\n";
			cout<<"3. "<<sub4[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine+12-1);
									
		case 6:
			cout<<"1. "<<sub5[0]<<"\n";
			cout<<"2. "<<sub5[1]<<"\n";
			cout<<"3. "<<sub5[2]<<"\n";
			cin>>ch_medicine;
			if(ch_medicine>3 || ch_medicine<1)
			{
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;		
			}
			return (ch_medicine+15-1);
				
				
		default:
			cout<<"Invalid Choice, Try Again";
			getch();
			goto try_again;	
	}	
	}
	
	int show()
	{
		int k;
	system("cls");
	title();
	cout<<"Item name:-  "<<medicinex[0];
	cout<<"\nManufactured by:-      "<<medicinex[1];
	cout<<"\n\n\t\t\t\t   Ratings: "<<medicinex[2];
	cout<<"\n\t\t\t\t     _________  \n";
	cout<<"\t\t\t\t    /________/| \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |  Price | | \n";
	cout<<"\t\t\t\t   |   "<<medicineprice<<"  | | \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |        | | \n";
	cout<<"\t\t\t\t   |________|/  \n";
	
	cout<<"\nSelect your choice:-\n";
	cout<<"1. Add to Cart\n";
	cout<<"2. Go to Main Menu\n";
	cin>>k;
	return k;
		
	}
	
			
};


class PAYMENT : public MEDICINE
{
	public:
	string user1,pass1,pass2,email,mobno,bank,cardno,cvv,add;

	int entries()
	{
		ofstream out;
		out.open("HealingEquiSignUP.txt" , ios::in|ios::out|ios::app);

		system("cls");
		title();
		
		cout<<"Enter your personal Details\n\n";
		
		
		cout<<"NAME: ";
		out<<"\n";
        cin>>name;
		out<<"Name - "<<name;
		
		cout<<"\nEMAIL: ";
		out<<"\n";
		cin>>email;
		out<<"EMAIL - "<<email;
		
		cout<<"\nADDRESS: ";
		//cin.ignore();
		out<<"\n";
		getline(cin,add);
		cin>>add;
		out<<"Address - "<<add;
						
		mobile:
		cout<<"\nMOBILE NUMBER: ";
		out<<"\n";
		
		cin>>mobno;
		out<<"Mobile no.- "<<mobno;
		if((mobno.length())!=10)
		{
			cout<<"\nPlease enter 10 digit Mobile number\n";
			goto mobile;
		}
		
		cout<<"\nCreate Username: ";
		out<<"\n";
		cin>>user1;
		out<<"Username - "<<user1;

		password:
		cout<<"\n\nCreate Password: ";
		cin>>pass1;
		out<<"\nPassword\n\n - "<<pass1;		
		cout<<"\nConfirm Password: ";
		cin>>pass2;
		if(pass1==pass2)
		{
			ofstream save("logindata.txt",ios::app);
			save<<user1<<" "<<pass1<<" "<<name<<" "<<email<<" "<<mobno<<" "<<add<<endl;
			cout<<"\n\nRegistration Successful";
			save.close();
			return 0;		
		}
		else
		{
		cout<<"\nIncorrect Password. Try Again";
		goto password;	
		}
		
		out.close();	
	}
	
	
	int login()
	{
		string user,pass;
		int flag=0;
		system("cls");
		title();
		//writing in the file
		ofstream out;
		out.open("HealingEquiStore.txt");
		cout<<"Enter username:";
		cin>>user;
		out<<user;
		cout<<"Enter password: ";
		cin>>pass;
		out<<pass;
		
		ifstream get("logindata.txt");

		while(get>>user1>>pass1) //not reading data from the file, user1 will not come, read from the file.
		{
		if(user==user1 && pass==pass1)
		{
			flag=1;
		}	
		}
		get.close();
		if(flag==1)
		{
		cout<<"Login Success. Press any key to continue";
		getch();
		return 0;
	    }
	    
	    else
		{
		cout<<"Login Failure. Press any key to continue";
		getch();
		return 1;
	    }
	    	
	}
	
	int method()
	{
		int method;
		system("cls");
		title();
		cout<<"Choose one option: \n\n";
		cout<<"1.Existing user- Login\n";
		cout<<"2.Sign Up\n";
		cin>>method;
		return method;	
	}
	
	int payment_option()
	{
		int choice4;
		system("cls");
		title();
		cout<<"Choose Payment Option\n\n";
		cout<<"1.Cash on Delivery\n";
		cout<<"2.Credit Card\n";
		cout<<"3.Debit Card\n";
		cin>>choice4;
		return choice4;
	}
	
	void card()
	{
		int v;
		string cardnm,cr("CREDIT"),db("DEBIT ");
		
		if(card1==2)
		{
			cardnm=cr;			
		}
		else if(card1==3)
		{
			cardnm=db;
		}
		system("cls");
		title();
		cout<<"Enter card Details:\n\n";
		
		cout<<"Bank Name:";
		cin.ignore();
		getline(cin,bank);
		
		cardnum:
		cout<<"\nCard Number:";		
		cin>>cardno;
		if(cardno.length()!=16)
		{
			cout<<"\nPlease enter 16 digit card number";
			goto cardnum;
		}
		cvv1:
		cout<<"\nCVV:";
		cin>>cvv;
		if(cvv.length()!=3)
		{
			cout<<"\nPlease enter 3 digit card number";
			goto cvv1;
		}
		
		system("cls");
		title();
		
		cout<<"\t        _________________________________________________ \n";
		cout<<"\t       |                                                 |\n";
		cout<<"\t       |  CLASSIC "<<cardnm<<" CARD                            |\n";
		cout<<"\t       |  "<<bank<<"                                            \n";
		cout<<"\t       |    ________                     MONTH/YEAR      |\n";
		cout<<"\t       |   |___|| __|       VALID          06/24         |\n";
		cout<<"\t       |   |__|  |__|       THRU                         |\n";
		cout<<"\t       |   |___||___|                                    |\n";
		cout<<"\t       |                                                 |\n";
		cout<<"\t       |   "<<cardno<<"                              |\n";
		cout<<"\t       |                                    VISA         |\n";
		cout<<"\t       |   "<<name<<"                                           \n";
		cout<<"\t       |_________________________________________________|\n";
		cout<<"\n\n\t                            Processing                \n";
		
		for(v=1;v<=80;v++)
		{
		cout<<"=";
		Sleep(50);
		}
		
		cout<<"\n\nSorry, you have nil balance in your bank account.\n\nPress Enter to pay with Cash on Delivery\n\n";
		getch();
	}
	
};


	
	int cart()
	{
	system("cls");
	title();

	if(num_items==0)
	{
	cout<<"\nSorry "<<name<<", you have no medicines in your cart. Please add medicines";
	cout<<"\n\nPress any key to go to Main menu";
	getch();
	return 3;
		
	}
	else
	{
	return 2;
	}
	
	}


void welcome()
{
	int wel,line,end1;
    cout<<"\n\n\n\n\t\t=============="
           "============================="
           "===========";
    cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~";
    cout<<"\n\t\t===================="
           "============================="
           "=====";
    cout<<"\n\t\t[|:::>:::>:::>::>  "
           "HEALING EQUILIBRIUM  <::<:::<:"
           "<:::|]\t";
    cout<<"\n\t\t===================="
           "============================="
           "=====";
    cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~";
    cout<<"\n\t\t======================"
           "================================\n";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t"
           "\n\n\t\t\t\t";
	
	cout<<"\n\n\n\t\t\t\t    LOADING\n\n";
	
	for(wel=1;wel<=80;wel++)
	{
	cout<<"=";
	Sleep(30);
	}
	cout<<"\n\n\t\t\t   Press any key to Continue";
    getch();
    
    for(end1=10;end1>=0;end1--)
    {
       	system("cls");
    	for(line=end1;line>=0;line--)
    	{
    	cout<<"\n";	
        }
		cout<<"\n\t\t[|:::>:::>:::>::>  "
           "HEALING EQUILIBRIUM  <::<:::<:"
           "<:::|]\t";
		//cout<<"\t\t   -------------------------------------------\n";
		Sleep(50);
	}
}

void title()
{
	system("cls");
	cout<<"\n\t\t[|:::>:::>:::>::>  "
           "HEALING EQUILIBRIUM  <::<:::<:"
           "<:::|]\t";
	cout<<"\t\t   -------------------------------------------\n";
	
}

int menu()
{
	menu:
	system("cls");
	title();
	int menu;
	cout<<"\nWelcome "<<name<<", Please select your choice:\n\n1.Add medicines to Cart\n2.Go to cart\n3.Contact and support\n";
	cin>>menu;
	if(menu>=1 && menu<=3)
	{
		switch(menu)
		{
		case 1:
		return 1;
		break;
		
		case 2:
		return cart();
		break;
		
		case 3:
		system("cls");
		title();

		cout<<"Contact information:\n\n";
		cout<<"Healing equilibrium\n";
		cout<<"+919876543210\n";
		cout<<"healingequilibrium@gmail.com\n\n";

		cout<<"Press any key to go to Main menu";
		getch();
		goto menu;
		
	    }
	}
	else
	{
		cout<<"Invalid Choice, Press any key to continue.\n";
		getch();
		goto menu;
	}
}


void nameask()
{
cout<<"\nPlease Enter your Name: ";
getline(cin,name);
}


int main()                                   //Starting of INT MAIN
{
	main:
	int check;
	check=0;
	if(name=="none")
	{
		welcome();
		title();
		nameask();
	}
	
	title();
	check=menu();

	if(check==1)
	{
		int sel_medicine,k1;
	
		MEDICINE call;
		sel_medicine=call.choices();
	
		switch(sel_medicine)
		{
		case 0:
			medicinex[0]=call.medicine0[0];
			medicinex[1]=call.medicine0[1];
			medicinex[2]=call.medicine0[2];
			break;
			
		case 1:
			medicinex[0]=call.medicine1[0];
			medicinex[1]=call.medicine1[1];
			medicinex[2]=call.medicine1[2];
			break;
			
		case 2:
			medicinex[0]=call.medicine2[0];
			medicinex[1]=call.medicine2[1];
			medicinex[2]=call.medicine2[2];
			break;
		
		case 3:
			medicinex[0]=call.medicine3[0];
			medicinex[1]=call.medicine3[1];
			medicinex[2]=call.medicine3[2];
			break;
			
		case 4:
			medicinex[0]=call.medicine4[0];
			medicinex[1]=call.medicine4[1];
			medicinex[2]=call.medicine4[2];
			break;
		
		case 5:
			medicinex[0]=call.medicine5[0];
			medicinex[1]=call.medicine5[1];
			medicinex[2]=call.medicine5[2];
			break;
			
		case 6:
			medicinex[0]=call.medicine6[0];
			medicinex[1]=call.medicine6[1];
			medicinex[2]=call.medicine6[2];
			break;
			
		case 7:
			medicinex[0]=call.medicine7[0];
			medicinex[1]=call.medicine7[1];
			medicinex[2]=call.medicine7[2];
			break;
			
		case 8:
			medicinex[0]=call.medicine8[0];
			medicinex[1]=call.medicine8[1];
			medicinex[2]=call.medicine8[2];
			break;
			
		case 9:
			medicinex[0]=call.medicine9[0];
			medicinex[1]=call.medicine9[1];
			medicinex[2]=call.medicine9[2];
			break;
												
		case 10:
			medicinex[0]=call.medicine10[0];
			medicinex[1]=call.medicine10[1];
			medicinex[2]=call.medicine10[2];
			break;
			
		case 11:
			medicinex[0]=call.medicine11[0];
			medicinex[1]=call.medicine11[1];
			medicinex[2]=call.medicine11[2];
			break;
		
		case 12:
			medicinex[0]=call.medicine12[0];
			medicinex[1]=call.medicine12[1];
			medicinex[2]=call.medicine12[2];
			break;
		
		case 13:
			medicinex[0]=call.medicine13[0];
			medicinex[1]=call.medicine13[1];
			medicinex[2]=call.medicine13[2];
			break;
		
		case 14:
			medicinex[0]=call.medicine14[0];
			medicinex[1]=call.medicine14[1];
			medicinex[2]=call.medicine14[2];
			break;
							
		case 15:
			medicinex[0]=call.medicine15[0];
			medicinex[1]=call.medicine15[1];
			medicinex[2]=call.medicine15[2];
			break;
		
		case 16:
			medicinex[0]=call.medicine16[0];
			medicinex[1]=call.medicine16[1];
			medicinex[2]=call.medicine16[2];
			break;
		
		case 17:
			medicinex[0]=call.medicine17[0];
			medicinex[1]=call.medicine17[1];
			medicinex[2]=call.medicine17[2];
			break;
								

    	}
    	medicineprice=call.medicine_price[sel_medicine];
	
		k1=call.show();
		
		if(k1==1)
		{
			if(num_items==21)
			{
			cout<<"Sorry, Your cart is full\nPress any key to continue.";
			getch();
			goto main;	
			}
			cart_medicines[num_items]=medicinex[0];
			cart_medicine_price[num_items]=medicineprice;
			num_items=num_items+1;
			tprice=tprice+medicineprice;
			
			cout<<"Your medicine has been added to cart Successfully\nPress any key to continue.";
			getch();
			goto main;	
			
		}
		
		else if(k1==2)
		{
		goto main;	
		}
		
		else 
		{	
		cout<<"Invalid response\n Press any key to go to Main Menu";
		getch();
		goto main;	
		}
	
	}

	else if(check==2)                                                 //Cart
	{	
	int k2, choice3;
	cout<<"\n\n";
	cout<<"\t\t\t_________________________________\t\t\t";
	cout<<"\n\t\t\t|                                |\t\t\t\n";
	cout<<"\t\t\t|         BILL RECEIPT           |\t\t\t\n";
	cout<<"\t\t\t|________________________________|\t\t\t";
	cout<<"\n";
	cout << "\t\t\t__________________________________\t\t\t\n";
	
	cout<<"\n\tTotal Items: "<<num_items<<"\n";
	cout<<"----------------------------------\n";

	for(k2=0;k2<num_items;k2++)
	{
		cout<<k2+1<<". "<<cart_medicines[k2]<<"\n   Rupees "<<cart_medicine_price[k2]<<"\n\n";	
	}
	cout<<"\n----------------------------------";
	cout<<"\n   Total Amount:-"<<tprice<<"\n";
	cout<<"----------------------------------\n";
	cout<<"Please select your choice:\n\n1.Pay Now\n2.Remove medicines from Cart\n3.Go to Main Menu\n";
	cin>>choice3;
	
	if(choice3==1)
	{
		int payop,m;
		PAYMENT object;
		relogin:
		m=object.method();
		if(m==1)
		{
			int choice7;
			choice7=object.login();
			if(choice7==1)
			{
			goto relogin;	
			}	
		}
		else if(m==2)
		{
		object.entries();
        }
		payops:
		payop=object.payment_option();
		
		if(payop==1)                                      //Cash on Delivery
		{
			cod:
			system("cls");
			title();
		cout<<"\n\n\t\t\tYour order has been confirmed\n\t\t\t    Thank you for Shopping with us!\n\n";
		cout<<"\t\t                        .d8b.                \n";
		cout<<"\t\t                    _.d8888888b._            \n";
		cout<<"\t\t                  .88888888888888b.          \n";
		cout<<"\t\t                 d88888888888888888b         \n";
		cout<<"\t\t                 8888888888888888888         \n";
		cout<<"\t\t                 Y88888888888888888P         \n";
		cout<<"\t\t                  'Y8888888888888P'          \n";
		cout<<"\t\t                _..._ 'Y88888P' _..._        \n";
		cout<<"\t\t              .d88888b. Y888P .d88888b.      \n";
		cout<<"\t\t             d888888888b 888 d88888888b      \n";
		cout<<"\t\t             888P  `Y8888888888P'  Y888      \n";
		cout<<"\t\t              b8b    Y88888888P    d8Y       \n";
		cout<<"\t\t               `'   #############  '`        \n";
		cout<<"\t\t                      dP d8b Yb              \n";
		cout<<"\t\t                  Ob=dP d888b Yb=dO          \n";
		cout<<"\t\t                   ` ` O88888O ` `           \n";
		cout<<"\t\t                        'Y8P'                \n";
		cout<<"\t\t                          '                  \n";
		getch();
		return 0;
		}
		if(payop==2)
		{
		card1=2;
		object.card();
		goto cod;	
		}
		if(payop==3)
		{
		card1=3;
		object.card();
		goto cod;	
		}
		else
		{
		cout<<"\nINVALID CHOICE";
		getch();
		goto payops;	
		}
		
	}
	if(choice3==2)                         //Removing From Cart
	{
		system("cls");
		title();
		int k6,k7,k8=0,k9,choice8;
		
		string cart_medicines_backup[21];
		int cart_medicine_price_backup[21];
		
		cout<<"Enter the medicine which you want to remove (1-"<<num_items<<")\n\n";
	
		for(k6=0;k6<num_items;k6++)
		{
		cout<<k6+1<<". "<<cart_medicines[k6]<<"\n   Rupees "<<cart_medicine_price[k6]<<"\n\n";	
		}
		cin>>choice8;
		
		if(choice8>=1 && choice8<=num_items)
		{
			for(k7=0;k7<num_items;k7++)
			{
				if(k7==(choice8-1))
				{
					continue;
				}
				cart_medicines_backup[k8]=cart_medicines[k7];
				cart_medicine_price_backup[k8]=cart_medicine_price[k7];
				k8++;
			}
			num_items--;
			tprice=tprice-cart_medicine_price[(choice8-1)];
			
			for(k9=0;k9<num_items;k9++)
			{
			cart_medicines[k9]=cart_medicines_backup[k9];
			cart_medicine_price[k9]=cart_medicine_price_backup[k9];	
			}
		}
		else
		{
			cout<<"Invalid Response.Try again";
			getch();
			goto main;
		}
		cout<<"\n\nYour item is removed from cart successfully.\n Press any key to Continue";
		getch();
		goto main;
	}
	
	if(choice3==3)
	{
		goto main;	
	}
	else
	{
		cout<<"Invalid Choice.";
		getch();
		goto main;
	}
		
	}

	else if(check==3)
	{	
	goto main;	
	}


getch();
return 0;	
}

