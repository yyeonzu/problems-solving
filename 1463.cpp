#include <iostream>

using namespace std;

int main()
{
	int n;
	int count = 0;

	cin >> n;

	while (1)
	{
		if (n == 1)
		{
			cout << count;
			return 0;
		}
		else if (n % 2 == 0)
		{
			n = n / 2;
			count++;
		}
		else if (n % 3 == 0)
		{
			n = n / 3;
			count++;
		}
		else
		{
			n = n - 1;
			count++;
		}
	}

	return 0;
}
