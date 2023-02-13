#include<iostream>
#include<fstream> //for file handling operations
#include<iomanip> //for floating point value

using namespace std;

void mainMenu(); //Function prototype

class Management{
	
	public:
		Management(){ //constructor
			
			mainMenu(); //function inside constructor
		}	
};

class Details {
	
	public:
		
		static string name, gender;
		static int age;
		static int phone;
		static string address;
		static int cID;
		char array[100];
		
		void information(){
			cout<<"\n Enter ther Customer ID : ";
			cin>>cID;
			
			cout<<"\n Enter the Name : ";
			cin>>name;
			
			cout<<"\n Enter the Age : ";
			cin>>age;
			
			cout<<"\n Enter the Gender : ";
			cin>>gender;
			
			cout<<"\n Enter ther customer Phone no.: ";
			cin>>phone;
			
			cout<<"\n Enter the Source : ";
			cin>>address;
			
			cout<<"\t\t\t\t !!!!Your Details Are Saved With Us!!!!"<<endl;
			cout<<"\t\t\t\t\t\t !!!!Thanks!!!!"<<endl;

		}
};

int Details :: cID;
string Details :: name;
string Details :: gender;
string Details :: address;
int Details :: age;
int Details :: phone;

class Registration {
	
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flight(){
			cout<<endl;
			
			string flightName[]={"Dubai","UK","USA","Europe","Brazil","Pakistan"};
			
			for(int a=0;a<6;a++){
				cout<<"\t\t\t\t\t"<<(a+1)<<". Flights To "<<flightName[a]<<endl;
			}
	
			cout<<endl;
			cout<<"\t\t\t_______________WELCOME TO THE INDIAN AIRLINES!_______________"<<endl<<endl;
			cout<<"Press the number of country to which you want to book the flight : ";
		
			cin>>choice;
		
			switch(choice){
			
				case 1:
					cout<<endl;
					cout<<"\t\t____________________Welcome To Dubai Airlines____________________\n"<<endl<<endl;
					
					cout<<"Your comfort is our priority, Enjoy the journey !"<<endl;
					cout<<endl;
					cout<<"Followings are the flights  - \n"<<endl;
					
					cout<<"DUB 430"<<" "<<"-"<<" "<<"16/02/2023  6:00 PM  12hr Rs.14000"<<endl;
					
					cout<<"DUB 700"<<" "<<"-"<<" "<<"17/02/2023  10:00 AM  13hr Rs.15000"<<endl;
					
					cout<<"DUB 550"<<" "<<"-"<<" "<<"18/02/2023  4:00 AM  10hr Rs.17000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 14000;
						cout<<endl;
						cout<<"\t\t\t\tYou Successfully Booked the Flight - DUB 430 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==2){
						charges = 15000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - DUB 700 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket  !"<<endl;
					}
					else if(choice1==3){
						charges = 17000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - DUB 550 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket  !"<<endl;
					}
					else{
						cout<<endl;
						cout<<"INVALID INPUT, Shifting to the previous menu !";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu :";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
					break;
					
			
				case 2:
					cout<<endl;
					cout<<"\t\t_______________________Welcome To UK Airlines____________________\n"<<endl;
					cout<<"Your comfort is our priority, Enjoy the journey !"<<endl;
					cout<<endl;
					cout<<"Followings are the flights -  \n"<<endl;
					
					cout<<"UK 330"<<" "<<"-"<<" "<<"16/02/2023  6:00 PM  12hr Rs.14000"<<endl;
					
					cout<<"UK 340"<<" "<<"-"<<" "<<"17/02/2023  10:00 AM  13hr Rs.15000"<<endl;
					
					cout<<"UK 350"<<" "<<"-"<<" "<<"18/02/2023  4:00 AM  10hr Rs.17000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 14000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - UK 330 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else if(choice1==2){
						charges = 15000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - UK 340 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else if(choice1==3){
						charges = 17000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - UK 350 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else{
						cout<<endl;
						cout<<"INVALID INPUT, Shifting to the previous menu";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu : ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
					break;
				
				case 3:
					cout<<endl;
					cout<<"\t\t_______________________Welcome To USA Airlines____________________\n"<<endl;
					cout<<"Your comfort is our priority, Enjoy the journey"<<endl;
					cout<<endl;
					cout<<"Followings are the flights - \n"<<endl;
					
					cout<<"USA 490"<<" "<<"-"<<" "<<"16/02/2023  6:00 PM  12hr Rs.14000"<<endl;
					
					cout<<"USA 480"<<" "<<"-"<<" "<<"17/02/2023  10:00 AM  13hr Rs.15000"<<endl;
					
					cout<<"USA 470"<<" "<<"-"<<" "<<"18/02/2023  4:00 AM  10hr Rs.17000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 14000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - USA 490 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==2){
						charges = 15000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - USA 480 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==3){
						charges = 17000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - USA 470 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else{
						cout<<endl;
						cout<<"Invalid input, Shifting to the previous menu";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu : ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
				   break;
				   	
				case 4:
					cout<<endl;
					cout<<"\t\t_______________________Welcome To Europe Airlines____________________\n"<<endl;
					cout<<"Your comfort is our priority, Enjoy the journey"<<endl;
					cout<<endl;
					cout<<"Followings are the flights - \n"<<endl;
					
					cout<<"Ep 1090"<<" "<<"-"<<" "<<"16/02/2023  9:00 PM  17hr Rs.18000"<<endl;
					
					cout<<"Ep 1080"<<" "<<"-"<<" "<<"17/02/2023  2:00 AM  19hr Rs.16000"<<endl;
					
					cout<<"Ep 1070"<<" "<<"-"<<" "<<"18/02/2023  1:00 AM  22hr Rs.15000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 18000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Ep 1090 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==2){
						charges = 16000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Ep 1080 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==3){
						charges = 15000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Ep 1070 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else{
						cout<<endl;
						cout<<"Invalid input, Shifting to the previous menu";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu : ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
				   break;
				   
				case 5:
					cout<<endl;
					cout<<"\t\t_______________________Welcome To Brazil Airlines____________________\n"<<endl;
					cout<<"Your comfort is our priority, Enjoy the journey"<<endl;
					cout<<endl;
					cout<<"Followings are the flights - \n"<<endl;
					
					cout<<"Br 2090"<<" "<<"-"<<" "<<"16/02/2023  5:00 PM  17hr Rs.19000"<<endl;
					
					cout<<"Br 2080"<<" "<<"-"<<" "<<"17/02/2023  2:00 AM  18hr Rs.18000"<<endl;
					
					cout<<"Br 2070"<<" "<<"-"<<" "<<"18/02/2023  8:00 AM  20hr Rs.16000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 19000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Br 2090 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==2){
						charges = 18000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Br 2080 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==3){
						charges = 16000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - Br 2070 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else{
						cout<<endl;
						cout<<"INVALID INPUT, Shifting to the previous menu";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu : ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
				   break;
				
				case 6:
					cout<<endl;
					cout<<"\t\t_______________________Welcome To Pakistan Airlines____________________\n"<<endl;
					cout<<"Your comfort is our priority, Enjoy the journey"<<endl;
					cout<<endl;
					cout<<"Followings are the flights - \n"<<endl;
					
					cout<<"PAK 90"<<" "<<"-"<<" "<<"16/02/2023  6:00 PM  7hr Rs.9000"<<endl;
					
					cout<<"PAK 80"<<" "<<"-"<<" "<<"17/02/2023  10:00 AM  5hr Rs.6000"<<endl;
					
					cout<<"PAK 70"<<" "<<"-"<<" "<<"18/02/2023  4:00 AM  4hr Rs.12000"<<endl;
					
					cout<<endl;
					cout<<"Select the flight you want to book By Pressing 1 , 2 or 3 According to the sequence: ";
					cin>>choice1;
					
					if(choice1==1){
						charges = 9000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - PAK 90 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==2){
						charges = 6000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - PAK 80 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket !"<<endl;
					}
					else if(choice1==3){
						charges = 12000;
						cout<<endl;
						cout<<"\t\t\t\tYou successfully booked the flight - PAK 70 "<<endl;
						cout<<endl;
						cout<<"You can go back the Main Menu and collect the ticket"<<endl;
					}
					else{
						cout<<endl;
						cout<<"INVALID INPUT, Shifting to the previous menu";
						flight();
					}
					
					cout<<endl;
					cout<<"Press any key to go back the mainMenu : ";
					cin>>back;
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					
				   break;			
				
			    default:
			    	cout<<endl;
					cout<<"INVALID INPUT, shifting to the mainMenu"<<endl;
					mainMenu();
					break;			
			}
		}
		
};

float Registration::charges;
int Registration::choice;

class Ticket:public Registration, Details{
	
	public:
		
		void bill(){
			string dest="";
			
			ofstream outf("record.txt");
			{
				outf<<endl;
				outf<<"\t\t\t\t____________________XYZ Airline___________________"<<endl;
				outf<<endl;
				outf<<"\t\t\t\t____________________TICKET________________________"<<endl;
				outf<<"\t\t\t\t__________________________________________________"<<endl;
				outf<<endl;
				outf<<"\t\t\t\t\t\t ID: "<<" "<<Details::cID<<endl;
				outf<<"\t\t\t\t\t\t Name: "<<" "<<Details::name<<endl;
				outf<<"\t\t\t\t\t\t Age: "<<" "<<Details::age<<endl;
				outf<<"\t\t\t\t\t\t Gender: "<<" "<<Details::gender<<endl;
				outf<<"\t\t\t\t\t\t Phone: "<<" "<<Details::phone<<endl;
				outf<<endl;
				outf<<"\t\t\t\t\t***************DESCRIPTION***************"<<endl<<endl;
				outf<<"\t\t\t\t\t\tSource: "<<" "<<Details::address<<endl;
				switch(Registration::choice){
					case 1:
						outf<<"\t\t\t\t\t\tDestination : Dubai"<<endl;
						break;
					case 2:
						outf<<"\t\t\t\t\t\tDestination : UK"<<endl;
						break;
					case 3:
						outf<<"\t\t\t\t\t\tDestination : USA"<<endl;
						break;
					case 4:
						outf<<"\t\t\t\t\t\tDestination : Europe"<<endl;
						break;
					case 5:
						outf<<"\t\t\t\t\t\tDestination : Brazil"<<endl;
						break;
					case 6:
						outf<<"\t\t\t\t\t\tDestination : Pakistan"<<endl;
						break;
					default:
						outf<<"\t\t\t\t\t\tINVALID INPUT OF COUNTRY"<<endl;
						
						
				}
				
				outf<<"\t\t\t\t\t\tFlight Charges : "<<Registration :: charges<<endl;
			}
			
			outf.close();
		}
		
		
		void disBill(){
			ifstream ifs("record.txt");
			{
				if(!ifs){
					cout<<"File Error!"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(array,100);
					cout<<array<<endl;
				}
			}
			ifs.close();
		}
};

void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t                               INDIAN AIRLINES\n"<<endl;
	cout<<"\t________________________________Main Menu_________________________"<<endl;
	
	cout<<"\t__________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	
	cout<<"\t|\t      Press 1 to add the customer Details             \t|"<<endl;
	cout<<"\t|\t      Press 2 for Flight Registration                 \t|"<<endl;
	cout<<"\t|\t      Press 3 for Ticket and Charges                  \t|"<<endl;
	cout<<"\t|\t      Press 4 to  Exit                                \t|"<<endl;
	cout<<"\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t__________________________________________________________________"<<endl;
	cout<<endl;
	
	cout<<"Enter the choices : ";
	cin>>lchoice;
	
	Details d;
	Registration r;
	Ticket t;
	
	switch(lchoice){
		case 1:
			cout<<endl;
			cout<<"_______________Customers_______________\n"<<endl;
			d.information();
			
			cout<<endl;
			cout<<"Press any key to go back in the Main Menu : ";
			cin>>back;
			if(back==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
			break;
			
			
		case 2:
			cout<<endl;
			cout<<"\t\t\t\t_______________Book Flight_______________\n"<<endl;
			r.flight();
			break;
			
		case 3:
			cout<<endl;
			cout<<"\t\t\t\t_______________Get Your Ticket _______________\n"<<endl;
			t.bill();
			
			cout<<"Your ticket is printed, You can collect it!"<<endl;
			cout<<endl;
			cout<<"Press 2 to display your Ticket  : ";
			
			cin>>back;
			if(back==2){
				t.disBill();
				
				cout<<"Press any key to go out Main Menu : ";
				cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
			}
			else{
				mainMenu();
			}
			break;	
			
		case 4:
			cout<<endl;
			cout<<"\n\n\t\t\t\t\t_____________Thank-You_____________"<<endl;
			break;
		
		default:
			cout<<endl;
			cout<<"Invalid Input, Please Try Again\n"<<endl;
			mainMenu();
			break;
	}
}

int main(){
	
	Management Mobj; //object of class
	return 0;
}
