// DailyCode 13_7_18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vecInput{ 1, 2, 3, 4, 5 };
	vector <int> vecReturn;
	int product = 1;

	for (int i = 0; i < vecInput.size(); i++)
	{	
		for (int j = 0;j < vecInput.size(); j++)
		{
			if (j == i)
			{
				continue;
			}
			else
			{	
				product = product * vecInput[j];		
			}	
		}
		vecReturn.push_back(product);
		product = 1;
	
	}

	for (int i = 0; i < vecReturn.size();i++)
	{
		cout << vecReturn[i] << ", ";
	}
	string end;
	cin >> end;
    return 0;
}

