/*
	Kyle Riley
	SE114.21
	Lab 6 B
	November 28th, 2017
*/
#include <iostream>;
#include <string>;

using namespace std;

void main()

{
	int maleNum = 0, femNum = 0, maleOldNo = 0, femOldNo = 0; 
	int voteNo = 0, voteYes = 0, record =0;
	string id = "",age = "", gender = "", registered = "", votes = "",contin = "y";
	while (contin == "y")
	{
		cout << "What is your ID number?" << endl;
		getline(cin,id);
		cout << "What is your age?" << endl;
		getline(cin,age);
		cout << "What is your gender?(M/F)" << endl;
		getline(cin,gender);
		cout << "Are you registered to vote?(Y/N)" << endl;
		getline(cin,registered);
		cout<< "Are you voting?(Y/N)" << endl;
		getline(cin, votes);
	
		if(stoi(age,nullptr, 10) >= 18)
		{
			if(registered == "y"|| registered == "Y")
			{
				if(votes == "y"|| votes == "Y")
				{
					voteYes++;
				}
				else
				{
					voteNo++;
				}
			}
			else
			{
				if (gender == "m" || gender =="M")
				{
					maleOldNo++;
				}
				if (gender == "f" || gender =="F")
				{
					femOldNo++;
				}
			}
		}
		else
		{
			if (gender == "m" || gender =="M")
				{
					maleNum++;
				}
				if (gender == "f" || gender =="F")
				{
					femNum++;
				}
		}
		record++;
		cout << "Would you like to continue? (y/n)" << endl;
		getline(cin,contin);
		system("cls");
	}
	cout << "1.  Number of males not eligible to register." << maleNum <<endl;
	cout << "2.  Number of females not eligible to register."<< femNum <<endl;
	cout << "3.  Number of males who are old enough to vote but have not registered."<< maleOldNo<<endl;
	cout << "4.  Number of females who are old enough to vote but have not registered."<< femOldNo <<endl;
	cout << "5.  Number of individuals who are eligible to vote but did not vote."<< voteNo <<endl;
	cout << "6.  Number of individuals who did vote."<< voteYes <<endl;
	cout << "7.  Number of records processed."<< record <<endl;
	system("pause");



}