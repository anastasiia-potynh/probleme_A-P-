// NIM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, m, castigator = 0;
	cin >> n >> m >> castigator;
	//castigator = 1 , muta omul
	while (n + m = 0)
	{
		if (castigator != 0)
		{

			cout << "your turn!";
			cout << " din ce gramada si citi bolovani iau?";
			int b, g;//b - bolovani , g - gramada
			cin >> g >> b;
			if (g == 1) {
				n = n - b;
			}
			else
			{
				m = m - b;
			}
		}
		else
		{
			cout << "wait for you turn!'";
			if (n > m)
			{
				cout << " din gramada 1 sa iau" << n - m << "bolovani" << endl;
				n = m;
			}
			if (m > n)
			{
				cout << " din gramada 1 sa iau" << m - n << "bolovani" << endl;
				m = n;
			}
			else
			{
				cout << " din gramada 1 sa iau" << 1 << "bolovani" << endl;
				n--;
			}
			if (n + m = 0)
			{
				castigator = 0;
			}
		}
		if (castigator = 0)
		{
			cout << " ai pierdut" << endl;
		}
		else
		{
			cout << " ai castigat ' << endl";
		}
	}
}
