



#include "stdafx.h"		
#include <iostream>	
#include <iomanip>


using namespace std;


int numberInput1 = 0;
int numberInput2 = 0;

void addition();
void subtraction();
void multiplication();
void division();
int displayMenu();


int main()
{
	int goodbye = 0;
	cout << "Welcome to SimpleMath OO!" << endl;
	do
	{
		int option = displayMenu();
		switch (option)
		{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			cout << "Thank you for using the SimpleMath OO program." << endl;
			goodbye = -1;
			break;
		}
	} while (goodbye != -1);
	::system("Pause");
	cout << "Good-Bye!" << endl;
	return 0;
}

void addition()
{
	cout.width(40); cout << "ADDITION MATH!" << endl;
	cout.width(42); cout << "--------------\n\n" << endl;

	int size = 0;
	int answer = 0;
	cout << "How many addition problems would you like to enter? ";
	cin >> size;
	cout << endl;
	int *myArray1 = new int[size];
	int *myArray2 = new int[size];

	for (int i = 1; i <= size; i++)
	{
		cout << "Number set " << i << endl;
		cout << "Please enter the 1st number between 0-9999: ";
		cin >> numberInput1;
		while (numberInput1 < 0 || numberInput1 > 9999)
		{
			cout << "WARNING! Please enter the 1st number again between 0-9999: ";
			cin >> numberInput1;
		}
		myArray1[i] = numberInput1;

		cout << "Please enter the 2nd number between 0-9999: ";
		cin >> numberInput2;
		while (numberInput2 < 0 || numberInput2 > 9999)
		{
			cout << "WARNING! Please enter 2nd number again between 0-9999: ";
			cin >> numberInput2;
		}
		myArray2[i] = numberInput2;
		cout << endl;
	}
	cout << "------------------------\n\n";
	cout << "Display of your Addition problems\n" << endl;
	for (int i = 1; i <= size; i++)
	{

		answer = myArray1[i] + myArray2[i];
		cout << setw(12) << myArray1[i] << endl;
		cout << setw(8) << "+" << setw(4) << myArray2[i] << endl;
		cout << setw(12) << "-------";
		cout << endl << setw(12) << answer << "\n\n";
		cout << "------------------------\n\n";

	}
	::system("PAUSE");



}

void subtraction()
{
	cout.width(40); cout << "SUBTRACTION MATH!" << endl;
	cout.width(42); cout << "-----------------\n\n" << endl;
	int size = 0;
	int answer = 0;
	cout << "How many subtraction problems you want to enter? ";
	cin >> size;
	cout << endl;
	int *myArray1 = new int[size];
	int *myArray2 = new int[size];

	for (int i = 1; i <= size; i++)
	{
		cout << "Number set " << i << endl;
		cout << "Please enter the 1st number between 0-9999: ";
		cin >> numberInput1;
		while (numberInput1 < 0 || numberInput1 > 9999)
		{
			cout << "WARNING! Please enter the 1st number again between 0-9999: ";
			cin >> numberInput1;
		}
		myArray1[i] = numberInput1;

		cout << "Please enter the 2nd number between 0-9999: ";
		cin >> numberInput2;
		while (numberInput2 < 0 || numberInput2 > 9999)
		{
			cout << "WARNING! Please enter 2nd number again between 0-9999: ";
			cin >> numberInput2;
		}
		myArray2[i] = numberInput2;
		cout << endl;

	}
	cout << "------------------------\n\n";
	cout << "Display of your Subtraction problems\n" << endl;
	for (int i = 1; i <= size; i++)
	{

		answer = myArray1[i] - myArray2[i];
		cout << setw(12) << myArray1[i] << endl;
		cout << setw(8) << "-" << setw(4) << myArray2[i] << endl;
		cout << setw(12) << "-------";
		cout << endl << setw(12) << answer << "\n\n";
		cout << "------------------------\n\n";
	}
	::system("PAUSE");
}

void multiplication()
{
	cout.width(40); cout << "MULTIPLICATION MATH!" << endl;
	cout.width(42); cout << "--------------------\n\n" << endl;
	int size = 0;
	int answer = 0;
	cout << "How many multiplication problems you want to enter? ";
	cin >> size;
	cout << endl;
	int *myArray1 = new int[size];
	int *myArray2 = new int[size];

	for (int i = 1; i <= size; i++)
	{
		cout << "Number set " << i << endl;
		cout << "Please enter the 1st number between 0-9999: ";
		cin >> numberInput1;
		while (numberInput1 < 0 || numberInput1 > 9999)
		{
			cout << "WARNING! Please enter the 1st number again between 0-9999: ";
			cin >> numberInput1;
		}
		myArray1[i] = numberInput1;

		cout << "Please enter the 2nd number between 0-9999: ";
		cin >> numberInput2;
		while (numberInput2 < 0 || numberInput2 > 9999)
		{
			cout << "WARNING! Please enter 2nd number again between 0-9999: ";
			cin >> numberInput2;
		}
		myArray2[i] = numberInput2;
		cout << endl;

	}
	cout << "------------------------\n\n";
	cout << "Display of your multiplication problems\n" << endl;
	for (int i = 1; i <= size; i++)
	{

		answer = myArray1[i] * myArray2[i];
		cout << setw(12) << myArray1[i] << endl;
		cout << setw(8) << "x" << setw(4) << myArray2[i] << endl;
		cout << setw(12) << "-------";
		cout << endl << setw(12) << answer << "\n\n";
		cout << "------------------------\n\n";
	}
	::system("PAUSE");
}

void division()
{
	cout.width(40); cout << "DIVISION MATH!" << endl;
	cout.width(42); cout << "--------------\n\n" << endl;
	int size = 0;
	double answer = 0;
	cout << "How many division problems you want to enter? ";
	cin >> size;
	cout << endl;
	double *myArray1 = new double[size];
	double *myArray2 = new double[size];

	for (int i = 1; i <= size; i++)
	{
		cout << "Number set " << i << endl;
		cout << "Please enter the 1st number between 0-9999 to be the dividend: ";
		cin >> numberInput1;
		while (numberInput1 < 0 || numberInput1 > 9999)
		{
			cout << "WARNING! Please enter the 1st number again between 0-9999 to be the dividend: ";
			cin >> numberInput1;
		}
		myArray1[i] = numberInput1;

		cout << "Please enter the 2nd number between 0-9999 to be the divisor: ";
		cin >> numberInput2;
		while (numberInput2 < 0 || numberInput2 > 9999)
		{
			cout << "WARNING! Please enter 2nd number again between 0-9999 to be the divisor: ";
			cin >> numberInput2;
		}
		myArray2[i] = numberInput2;
		cout << endl;

	}
	cout << "------------------------\n\n";
	cout << "Display of your Division problems\n" << endl;
	for (int i = 1; i <= size; i++)
	{

		answer = myArray1[i] / myArray2[i];
		cout << setw(12) << myArray1[i] << endl;
		cout << setw(14) << "--------" << " = " << answer << endl;
		cout << setw(12) << myArray2[i] << endl;
		cout << setw(12) << endl;
		cout << "------------------------\n\n";
	}
	::system("PAUSE");

}
int displayMenu()
{
	int option;
	do
	{
		::system("cls");
		::system("mode 80");
		cout.width(55); cout << setw(25) << "" << "SimpleMath OO" << endl;
		cout.width(55); cout << setw(25) << "" << "---------------------" << endl;
		cout << endl;
		cout.width(50); cout << setw(25) << "" << "1) Addition" << endl;
		cout.width(50); cout << setw(25) << "" << "2) Subtraction" << endl;
		cout.width(50); cout << setw(25) << "" << "3) Multiplication" << endl;
		cout.width(50); cout << setw(25) << "" << "4) Division" << endl;
		cout.width(50); cout << setw(25) << "" << "5) Quit program" << endl;
		cout.width(50); cout << setw(25) << "" << "Please make a selection: ";
		cin >> option;
		cout << endl;
	
		if (option < 1 || option > 5)
		{
			cout << "Invalid selection." << endl;
			cout << "Please enter a valid number." << endl;
			::system("PAUSE");
		}
	} while (option < 1 || option > 5);
	::system("cls");

	return option;
}