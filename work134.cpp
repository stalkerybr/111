#include <iostream> //code by Fortochkin / stalkerybr@gmail.com
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	srand(time(NULL));
	int n(0), min(0), max(0), a1(0), a2(0), b1(0), b2(0), c(0);
	cout << "Enter Xn massive lenght: ";
	cin >> n;
	int a[n][n] = {0};

	for(int c1(0); c1 < n; c1++)
	{
		for(int c2(0); c2 < n; c2++)
		{
			a[c1][c2] = 1 + rand() % 100;
		}
	}

	for(int c1(0); c1 < n; c1++)
	{
		for(int c2(0); c2 < n; c2++)
		{
			cout << setw(3) << a[c1][c2] << " ";
		}
		cout << endl;
	}

	min = a[1][0];

	for(int c1(0); c1 < n; c1++)
	{
		for(int c2(0); c2 < n; c2++)
		{
			if(c1 > c2)
			{
				if(min >= a[c1][c2])
				{
					min = a[c1][c2];
					a1 = c1;
					a2 = c2;
				}
			}
		}
	}

	cout << endl;
	cout << "min[" << a1+1 << "][" << a2+1 << "] = " << min;

	max = a[0][0];

	for(int c1(0); c1 < n; c1++)
	{
		for(int c2(0); c2 < n; c2++)
		{
			if(c1 + c2 < n - 2)
			{
				if(max <= a[c1][c2])
				{
					max = a[c1][c2];
					b1 = c1;
					b2 = c2;
				}
			}
		}
	}

	cout << endl;
	cout << "max[" << b1+1 << "][" << b2+1 << "] = " << max;
	cout << endl;
	cout << endl;

	c = a[a1][a2];
	a[a1][a2] = a[b1][b2];
	a[b1][b2] = c;

	for(int c1(0); c1 < n; c1++)
	{
		for(int c2(0); c2 < n; c2++)
		{
			cout << setw(3) << a[c1][c2] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "min[" << b1+1 << "][" << b2+1 << "] = " << min;
	cout << endl;
	cout << "max[" << a1+1 << "][" << a2+1 << "] = " << max;
	cout << endl;

	return 0;
}
