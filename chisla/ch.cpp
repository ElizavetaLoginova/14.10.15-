#include <iostream>
using namespace std;
int main()
{
	while (true)
	{

		long long n;
		cout << "Enter your number: " << endl;
		cin >> n;
		if (n > 0) break;
		cout << "Error!" << endl;

		long long t = n;

		int p = 0, m = 0, r = 0;

		while (t)
		{
			int a = t % 10;
			t = t / 10;
			if (t == 0) 
				break;
			int b = t % 10;

			if (a < b)
				m++;
			if (a > b)
				p++;
			if (a == b)
				r++;

		}
		if (r == 0 && m == 0 && p > 0)
			cout << "strictly increasing ";
		if (r == 0 && p == 0 && m > 0)
			cout << "strictly decreasing ";
		if (p == 0 && m == 0 && r > 0)
			cout << "monotonic ";
		if (r > 0 && m == 0 && p > 0)
			cout << "not strictly increasing ";
		if (r > 0 && p == 0 && m > 0)
			cout << "not strictly decreasing ";
		if (r > 0 && m != 0 && p > 0)
			cout << " Unordered ";


	
		system("pause");
		system("cls");
	}
	return 0;
}