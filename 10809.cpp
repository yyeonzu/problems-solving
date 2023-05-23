#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int arr[26];
    cin >> str;

    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }

 


    for (int i = 0; i < str.length(); i++){
        int cmp = (int)str[i] - 97;
        
        if (arr[cmp] < 0){
            arr[cmp] = i;
        }
    }
    for (int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }

    return 0;
}