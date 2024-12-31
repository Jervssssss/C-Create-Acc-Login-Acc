#include<iostream>
#include<string>
using namespace std;

int main()
{
	string username,inputuser,password,inputpass;
	
	cout<<"\t ----------Create your Account---------- "<<endl;
	
	cout<<"\n Create username: ";
	cin>>username;
	cout<<"\n Create password: ";
	cin>>password;
	
	system("CLS");
	
	username==inputuser;
	password==inputpass;
	
	cout<<"\t ----------Login Your Account---------- \t"<<endl;
	
	cout<<"\n Enter your username: ";
	cin>>inputuser;
	cout<<"\n Enter your password: ";
	cin>>inputpass;
	
	system("CLS");
	
	if ( username==inputuser && password==inputpass)
	 {
		cout<<"\n Login Successful! "<<endl;
	 }
	else
	 {
		cout<<"\n Login Failed.\n "<<"\n Incorrect Password or Username "<<" Please Try Again!";
	 } 
	 
	 return 0;
}
