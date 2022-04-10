#include<bits/stdc++.h>
using namespace std;
vector<string> split(string s, char c) {
    vector<string> v;
    stringstream ss(s);
    string x;
    while (getline(ss, x, c))
        if(x.length()>0 && x!=" ") v.push_back(x);
    return move(v);
}
template<typename T>
void print(T x){
    for(auto i:x)
        cout<<i<<" ";
    cout<<endl;
}
int main(){
    string s;
    cin>>s;
    vector<string> v=split(s,'/');
    stack<string> st;
    string ans;
    print(v);
    for(string a:v){
        if(a==".") continue;
        if(a==".."){
            if(!st.empty()) st.pop();
        }
        else st.push(a);
    }
    while(!st.empty()){
        if(st.top()=="") {
            st.pop();
            continue;
        }
        ans="/"+st.top()+ans;
        st.pop();
    }
    cout<<ans<<endl;
}