#include<iostream>
#include<algorithm>

using namespace std;
 
int main() {
	string str; 
	cin >> str; 
	
	for (int i = 'a'; i <= 'z'; i++)
	{
		cout << count(str.begin(), str.end(), i) << ' ';
	}
	
	return 0;
}


// count 함수: begin()부터 end()까지 이터러블로 검색하여 그 value가 몇개 존재하는지 리턴