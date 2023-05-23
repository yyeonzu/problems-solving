#include <iostream>
#include <stack>

using namespace std;
string str, ans;
stack <char> st;
int main() {
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') { ans += str[i]; continue; }

        if(str[i] == '(') { st.push(str[i]); continue; }

        if(str[i] == ')'){
            while(st.top()!='(') 
                ans += st.top(), st.pop(); 
            st.pop();
            continue;
        }
        if(str[i] == '*' || str[i] == '/'){
            while(!st.empty() && (st.top() == '*' || st.top() == '/'))
                ans += st.top(), st.pop();
        }
        else{
            while(!st.empty() && st.top() != '(')
                ans += st.top(), st.pop(); 
        }
        st.push(str[i]);
    }
 
    while (!st.empty()) 
        ans += st.top(), st.pop();
    cout << ans <<'\n';    
}
