/*
	Kyle Riley
	SE114.21
	Lab8
	December 14th, 2017
*/
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
void goto_xy(int c, int r);
double ham(), grill(), pizza(), veggie(), turkey();
void checkOut();

void main()
{
	int x = 0;
	while ( x != 6 || x != 7)
	{
		double total = 0;
		cout << "Welcome to Katie's Sandwich Shop" << endl;
		cout << "1.   Ham and Cheese......$4.00" << endl;
		cout << "2.   Grilled Cheese......$2.50" << endl;
		cout << "3.   Pizza Panini........$5.00" << endl;
		cout << "4.   Veggie Wrap.........$4.50" << endl;
		cout << "5.   Turkey Club.........$4.00" << endl;
		cout << "6.   Checkout" << endl;
		cout << "7.   Exit" << endl;
		switch (x)
		{
			case 1:
				total = total + ham();
				system("cls");
			break;

			case 2:
				total = total + grill();
				system("cls");
			break;

			case 3:
				total = total + pizza();
				system("cls");
			break;

			case 4:
				total = total + veggie();
				system("cls");
			break;

			case 5:
				total = total + turkey();
				system("cls");
			break;

			case 6:
				checkOut(total);
			break;

			case 7:
				system("cls");
				goto_xy(column,row);
				cout << "Thank you" << endl;
				goto_xy(column,row+1);
				system("pause");
			break;

			default:
				goto_xy(column,row);
				cout << "Wrong value for a function" << endl;
				goto_xy(column,row+1);
				system("pause");
				system("cls");
			break;
		}
	}
}
double ham()
{
	double food = 4, tax = .07, afterTax, total;
	int num;
	char answer = '';
	afterTax = food * tax;
	total = food + afterTax;
	system("cls");
	cout << "Ham and Cheese......$4.00" << endl;
	cout << "Tax.................$" << afterTax << endl;
	cout << "Total...............$" << total << endl;
	cout << "Would you like to purchase?(Y/N)" << endl;
	if (answer == 'y' || 'Y')
	{
		system("cls");
		cout << "How many would you like to purchase?" << endl;
		cin >> num;
		food = food * num;
		afterTax = food * tax;
		total = food + afterTax;
		cout << "Sandwich      #" << num << endl;
		cout << "Subtotal      $" << food << endl;
		cout << "Tax Amount    $" << afterTax << endl;
		cout << "Total         $" << total << endl;
		return total;
	}
	else
	{
		cout << "Thank you" << endl;
		total = 0;
		return total;
	}
}
double grill()
{
	double food = 2.5, tax = .07, afterTax, total;
	int num;
	char answer = '';
	afterTax = food * tax;
	total = food + afterTax;
	system("cls");
	cout << "Grilled Cheese......$2.50" << endl;
	cout << "Tax.................$" << afterTax << endl;
	cout << "Total...............$" << total << endl;
	cout << "Would you like to purchase?(Y/N)" << endl;
	if (answer == 'y' || 'Y')
	{
		system("cls");
		cout << "How many would you like to purchase?" << endl;
		cin >> num;
		food = food * num;
		afterTax = food * tax;
		total = food + afterTax;
		cout << "Sandwich      #" << num << endl;
		cout << "Subtotal      $" << food << endl;
		cout << "Tax Amount    $" << afterTax << endl;
		cout << "Total         $" << total << endl;
		return total;
	}
	else
	{
		cout << "Thank you" << endl;
		total = 0;
		return total;
	}
}
double pizza()
{
	double food = 5, tax = .07, afterTax, total;
	int num;
	char answer = '';
	afterTax = food * tax;
	total = food + afterTax;
	system("cls");
	cout << "Pizza Panini........$5.00" << endl;
	cout << "Tax.................$" << afterTax << endl;
	cout << "Total...............$" << total << endl;
	cout << "Would you like to purchase?(Y/N)" << endl;
	if (answer == 'y' || 'Y')
	{
		system("cls");
		cout << "How many would you like to purchase?" << endl;
		cin >> num;
		food = food * num;
		afterTax = food * tax;
		total = food + afterTax;
		cout << "Sandwich      #" << num << endl;
		cout << "Subtotal      $" << food << endl;
		cout << "Tax Amount    $" << afterTax << endl;
		cout << "Total         $" << total << endl;
		return total;
	}
	else
	{
		cout << "Thank you" << endl;
		total = 0;
		return total;
	}
}
double veggie()
{
	double food = 4.5, tax = .07, afterTax, total;
	int num;
	char answer = '';
	afterTax = food * tax;
	total = food + afterTax;
	system("cls");
	cout << "Veggie Wrap.........$4.50" << endl;
	cout << "Tax.................$" << afterTax << endl;
	cout << "Total...............$" << total << endl;
	cout << "Would you like to purchase?(Y/N)" << endl;
	if (answer == 'y' || 'Y')
	{
		system("cls");
		cout << "How many would you like to purchase?" << endl;
		cin >> num;
		food = food * num;
		afterTax = food * tax;
		total = food + afterTax;
		cout << "Sandwich      #" << num << endl;
		cout << "Subtotal      $" << food << endl;
		cout << "Tax Amount    $" << afterTax << endl;
		cout << "Total         $" << total << endl;
		return total;
	}
	else
	{
		cout << "Thank you" << endl;
		total = 0;
		return total;
	}
}
double turkey()
{
	double food = 4, tax = .07, afterTax, total;
	int num;
	char answer = '';
	afterTax = food * tax;
	total = food + afterTax;
	system("cls");
	cout << "Turkey Club.........$4.00" << endl;
	cout << "Tax.................$" << afterTax << endl;
	cout << "Total...............$" << total << endl;
	cout << "Would you like to purchase?(Y/N)" << endl;
	if (answer == 'y' || 'Y')
	{
		system("cls");
		cout << "How many would you like to purchase?" << endl;
		cin >> num;
		food = food * num;
		afterTax = food * tax;
		total = food + afterTax;
		cout << "Sandwich      #" << num << endl;
		cout << "Subtotal      $" << food << endl;
		cout << "Tax Amount    $" << afterTax << endl;
		cout << "Total         $" << total << endl;
		return total;
	}
	else
	{
		cout << "Thank you" << endl;
		total = 0;
		return total;
	}
}
void checkOut(total)
{
	system("cls");
	
}

void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	return;
}