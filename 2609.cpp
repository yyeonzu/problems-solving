#include <iostream>
#include <algorithm>

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
	int a, b, c;

	cin >> a >> b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	cout << gcd(a, b) << "\n"
		 << lcm(a, b);
}