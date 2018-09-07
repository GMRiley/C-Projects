#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{
	srand(time(NULL*NULL));

	int x = 1 + (rand() % 100);
	int attempts = 0,num=0;

	while (attempts < 5 && num!=x)
	{
		cout << "Enter a number:" << endl;
		cin >> num;
		if (num > x && attempts != 4)
		{
			cout << "Guess lower -- try again" << endl;
		}
		if (num < x && attempts != 4)
		{
			cout << "Guess higher -- try again" << endl;
		}
		attempts ++;
	}
	if (num == x)
	{
		cout << "Congratulations, you won! It took you " << attempts << " tries" << endl;
	}
	if (attempts ==5)
	{
		cout << "Sorry, you lost! It took you " << attempts << " tries" << endl;
	}
	system("pause");
}