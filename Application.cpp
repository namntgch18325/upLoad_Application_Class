#include "Application.h"
#include <iostream>

using namespace std;

Application::Application()
{

}

void Application::signup()
{

}
void Application::displayMenu()
{
	system("cls");
	cout << "APPLICATION MANAGE HABITS" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "1. Manage Habits" << endl;
	cout << "2. Manage Accounts" << endl;
	cout << "3. Summary Table" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: menuManageHabit();
	case 2: menuManageAccount();
	case 3: displaySummaryTable();
	default:
		break;
	}
}

void Application::start()
{
	system("cls");
	cout << "APPLICATION MANAGE HABITS" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "1. Login" << endl;
	cout << "2. Sign up" << endl;
	int choice;
	cin>> choice;
	switch (choice)
	{
	case 1: 
		//if (login() == true) displayMenu();
		displayMenu();
		break;
	case 2: 
		cout << "You need to sign up" << endl;
		signup();
	default:
		break;
	}
}


void Application:: menuManageHabit()
{
	system("cls");
	cout << "APPLICATION MANAGE HABITS" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "1. Add new habit" << endl;
	cout << "2. Edit habit" << endl;
	cout << "3. Remove habit" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		cout << "You need to add habit" << endl;
		break;
	case 2:
		cout << "You need to edit habit" << endl;
		break;
	case 3:
		cout << "You need to remove habit" << endl;
		break;
	default:
		break;
	}
}

void Application:: menuManageAccount()
{
	system("cls");
	cout << "APPLICATION MANAGE HABITS" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "1. Edit account" << endl;
	cout << "2. Remove account" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: 
		cout << "You need to edit account" << endl;

		break;
	case 2: 
		cout << "You neen to remove account" << endl;
		break;

	default:
		break;
	}
}

void Application:: displaySummaryTable()
{
	
}