#include<iostream>
using namespace std;
struct a
{
    char c1;
    double d1;
    char c2;
};
int main(){
    string s="hilo";
    string x="il";
        const char *str = s.c_str();
    // if((str+1)=x)
    cout<<str+1<<endl;
}