/*
	Kyle Riley
	SE114.21
	Lab7
	December 5th, 2017
*/
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
void goto_xy(int c, int r);
int add(), sub();
void multi();
double divi();

int column = 10, row = 10;
void main()
{
	int x = 0;
	while (x != 5)
	{
		double final;
		goto_xy(column,row);
		cout << "What function will you be using?" << endl;
		goto_xy(column,row+1);
		cout << "1. Add" << endl;
		goto_xy(column,row+2);
		cout << "2. Subtract" << endl;
		goto_xy(column,row+3);
		cout << "3. Multiply" << endl;
		goto_xy(column,row+4);
		cout << "4. Divide" << endl;
		goto_xy(column,row+5);
		cout << "5. Exit" << endl;
		cin >> x;

		switch(x)
		{
			case 1:
				final = add();
				goto_xy(column+9,row);
				cout << final << endl;
				goto_xy(column,row+1);
				system("pause");
				system("cls");
			break;

			case 2:
				final = sub();
				goto_xy(column+9,row);
				cout << final << endl;
				goto_xy(column,row+1);
				system("pause");
				system("cls");
			break;

			case 3:
				multi();
				goto_xy(column,row+1);
				system("pause");
				system("cls");
			break;

			case 4:
				final = divi();
				goto_xy(column+9,row);
				cout << final << endl;
				goto_xy(column,row+1);
				system("pause");
				system("cls");
			break;

			case 5:
				system("cls");
				goto_xy(column,row);
				cout << "Goodbye" << endl;
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
int add()
{
	system("cls");
	int firstNum, secondNum, final;
	goto_xy(column,row);
	cout << "What is your first number?" << endl;
	goto_xy(column,row+1);
	cin >> firstNum;
	goto_xy(column,row);
	cout << "What is your second number?" << endl;
	goto_xy(column,row+1);
	cin >> secondNum;
	system("cls");
	goto_xy(column,row);
	cout << firstNum << " + " << secondNum << " = " << endl;
	final = firstNum + secondNum;
	return final;
	
}
int sub()
{
	system("cls");
	int firstNum, secondNum, final;
	goto_xy(column,row);
	cout << "What is your first number?" << endl;
	goto_xy(column,row+1);
	cin >> firstNum;
	goto_xy(column,row);
	cout << "What is your second number?" << endl;
	goto_xy(column,row+1);
	cin >> secondNum;
	system("cls");
	goto_xy(column,row);
	cout << firstNum << " - " << secondNum << " = " << endl;
	final = firstNum - secondNum;
	return final;


}
void multi()
{
	system("cls");
	double firstNum, secondNum, final;
	goto_xy(column,row);
	cout << "What is your first number?" << endl;
	goto_xy(column,row+1);
	cin >> firstNum;
	goto_xy(column,row);
	cout << "What is your second number?" << endl;
	goto_xy(column,row+1);
	cin >> secondNum;
	system("cls");
	goto_xy(column,row);
	cout << firstNum << " * " << secondNum << " = " << endl;
	final = firstNum * secondNum;
	goto_xy(column+9,row);
	cout << final << endl;


}
double divi()
{
	system("cls");
	double firstNum, secondNum, final;
	goto_xy(column,row);
	cout << "What is your first number?" << endl;
	goto_xy(column,row+1);
	cin >> firstNum;
	goto_xy(column,row);
	cout << "What is your second number?" << endl;
	goto_xy(column,row+1);
	cin >> secondNum;
	system("cls");
	goto_xy(column,row);
	cout << firstNum << " / " << secondNum << " = " << endl;
	final = firstNum / secondNum;
	return final;

}
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	return;
}