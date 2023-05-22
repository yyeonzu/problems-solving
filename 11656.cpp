#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v;
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		v.push_back(&str[i]);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}