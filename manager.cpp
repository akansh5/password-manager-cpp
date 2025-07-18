#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

void view(){
	
	cout << "your saved passwords" << endl;
	//show their passwords
}
void add(){
	
	string new_added_file;
	cout << "enter the file name :" << endl;
	cin >> new_added_file;
	
	string new_added_password;
	cout << "enter the password :" << endl;
	cin >> new_added_password;
}
void change(){
	
	string new_file_name;
	cout << endl << "enter the file to be changed" << endl;
	cout << "change :: \n" << "type 1 -> to change file name\n" << "type 2 -> to change password\n" ;
	cout << "type 3 -> to change both\n";
	
	int change_option;
	cin >> change_option;
	
	string changed_password;
	string changed_file;
	
	if (change_option == 1){
		
		cout <<"file name =";
		cin >> changed_file;
	}
	else if(change_option == 2){
		
		cout << "password =";
		cin >> changed_password;
	}
	else if(change_option == 3)
		{
		
			cout <<"file name =";
			cin >> changed_file;
		
			cout << "password =";
			cin >> changed_password;
		}
	else{
		cout << "\nwrong cmd";
		}
}	

void passmanage(){
	cout << "type any of the following options\n";
	cout << "1.view\n" << "2.add\n" << "3.change\n" << "4.back";
	
	cout << "\nenter the cmd =";
	
	string cmd;
	cin >> cmd;
	
	if (cmd == "view"){
		view();
	}
	else if (cmd == "add"){
		add();
	}
	else if (cmd == "change"){
		change();
	}
	else if ( cmd == "back"){
		cout << "nothing to see for now";
	}
	else{
		cout << "incorrect cmd\nTry Again!";
	}
	
}
int main(){
	
//	string user;
	string pass;
	
	cout << "password manager" << endl << endl;
//	cout << "Enter your Username" << endl;
//	cin >> user ;
	
	cout << "Enter Password to access File" << endl;
	cin >> pass ;
	
	if ( pass != "akansh")
	{
		cout << endl << "access denied \n\n incorrect password";
	}
	
	else
	{
		cout << "\nwelcome!\n\n";
		passmanage();
	}
	
    return 0;
}