#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
	system("chcp 1251 && cls");

	//8.1
	/*
	float a[3][4]={-0.7,1.2,3.5,0.3,0.5,0.7,-1.1,-3.5,0.9,0.8,2.7,1};
	float u = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if (a[i][j] <= 1 && a[i][j]  >= -1) 
			{
				u += a[i][j];
			}
		}
	}
	cout << u;
	*/
	float a[7][5];
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			swap(a[i][0], a[i][1]);
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
