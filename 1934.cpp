#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main()
{
	int T, a, b, c;

	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		cout << lcm(a, b) << "\n";
	}
}