/*WEEK 8: FUNCTIONSgoto_xy function notes from 12.1.16*/
#include<iostream>
#include<string>
#include<windows.h>   
//this is necessary to use the goto_xy()
using namespace std;
void goto_xy(int c, int r);    
//this is the function prototype, same idea as the function header
void main(){
	int column, row;
	column = 20;
	row = 15;
	goto_xy(column,row);
	/*^^this line calls the goto_xy function.  at this time, the main() passes control
	to the goto_xy. main waits for the function to finish before it goes tot he next line
	*/
	cout << "X is at column " << column << " and row " << row << " ";
	system("pause");
}// main() close/*this is the function header.  this is where the goto_xyfunction begins*/
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	return;
}//goto_xy() close