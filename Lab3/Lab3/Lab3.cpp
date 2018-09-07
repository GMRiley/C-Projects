/*
	Kyle Riley
	SE114.21
	October 26th
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main() 
{
	int bigMac=563,bigNum,mFries=378,mNum,sShake=580,sNum;
	double timeRun, timeJog,burnRun=557,burnJog=398;
	double cost, money, change;
	int x;
	cout << " Which part are you testing? (1/2)" << endl;
	cin >> x;

	switch(x)
	{
	case 1: //Part I
		cout << "How many Big Macs have you eaten?" << endl;
		cin >> bigNum;
		cout << "How many Medium fries have you eaten?" << endl;
		cin >> mNum;
		cout << "How many small shakes have you drank?" << endl;
		cin >> sNum;
		timeRun = ((bigMac * bigNum) + (mFries * mNum) + (sShake * sNum))/burnRun;
		timeJog = ((bigMac * bigNum) + (mFries * mNum) + (sShake * sNum))/burnJog;
		cout << "If you ran, it would take " << timeRun << " hours to burn these calories. If you jogged, it would take " << timeJog << " hours." << endl;
		system("pause");
	break;
	case 2: //Part 2
		cout << fixed << setprecision(2);
		cout << "How much does the item cost?" << endl;
		cin >> cost;
		cout << "How much are you paying with?" << endl;
		cin >> money;
		if (money<cost)
			cout << "You do not have enough money" << endl;
		else
		{
			change = money - cost;
			cout << "You will get $" << change << endl;
		}
		system("pause");
	break;
	}

}
/*
	A1: double amount=4.56,cost=3.2,total=0;
	A2: It is not because grand_total must be stated before the math.
	A3: CIN
*/