#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
        {
            str[i] = str[i] + 13;
        }
        else if ((str[i] > 'M' && str[i] <= 'Z') || (str[i] > 'm' && str[i] <= 'z'))
        {
            str[i] = str[i] - 13;
        }
        cout << str[i];
    }

    return 0;
}