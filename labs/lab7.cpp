#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
	system("chcp 1251 && cls");

	//7.1
	/*
	float u = 0;
	float a[6] = {3.5,-6.3,2.1,0.1,5.1,-2.1};
	for (int i = 0; i < 6; i++) 
	{
		if (a[i] < 0.25) 
		{
			u += a[i];
		}
	}
	cout << u;
	*/
	//7.2
	/*
	float s = 0;
	float b[16];
	int i = 0;
	for (float x = 0.1; x <= 1.6; x += 0.1) 
	{
		for (int n = 0; n <= 5; n++) 
		{
			s = pow(-1, n) * pow(x, 2 * n) / (2 * n);
		}
		b[i] = s;
		cout << b[i];
		i++;
	}
	*/
	//7.3
	/*
	float a[12];
	for(int i=0;i<12;i++)
	{
		a[i]=rand() % 100;
	}
	for(int i=0;i<12;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	min=a[0];
	max=a[1];
	for(int i=0;i<12;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<max-min;
	*/
	//7.4
	/*
	float a[12];int n=0;
	for(int i=0;i<12;i++)
	{
		a[i]=rand() % 100;
	}
	for(int i=0;i<12;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<12;i++)
	{
		if(a[i]>0)
		{
			cout<<a[i]<<" ";
			n++;
		}
	}
	cout<<endl;
	cout<<n;
	*/
}
