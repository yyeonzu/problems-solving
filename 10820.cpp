#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        int upper = 0, lower = 0, num = 0, space = 0;
        for (int i = 0; str[i]; i++)
        {
            if (isupper(str[i]))
                upper++;
            else if (islower(str[i]))
                lower++;
            else if (isdigit(str[i]))
                num++;
            else if (isspace(str[i]))
                space++;
        }
        cout << lower << " " << upper << " " << num << " " << space << "\n";
    }
    return 0;
}