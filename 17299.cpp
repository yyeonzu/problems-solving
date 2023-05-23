#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;


int main() {

    int N;
    vector<int> v;
    vector<int> ret;
    stack<int> st;
    int m[1000001];
	
    cin >> N;
	v.resize(N + 1);
	ret.resize(N + 1);
	for (int i = 1; i <= N; i++) {
		cin >> v[i];
		m[v[i]]++;
	}

	for (int i = N; i >= 1; i--) {
		if (st.empty()) {
			st.push(v[i]);
			ret[i] = -1;
		}
		else if (m[v[i]] < m[st.top()]) {
			ret[i] = st.top();
			st.push(v[i]);
		}
		else {
			while (!st.empty() && m[v[i]] >= m[st.top()]) {
				st.pop();
			}
			if (st.empty()) {
				ret[i] = -1;
				st.push(v[i]);
			}
			else {
				ret[i] = st.top();
				st.push(v[i]);
			}
		}
	}

	for (int i = 1; i <= N; i++)
		cout << ret[i] << " ";
}