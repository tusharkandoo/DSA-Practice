#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout<<"input your string"<<endl;
getline(cin,s);
for(int i = 0;i<s.length();i++)
{
    cout<<s[i]<<"="<<int(s[i])<<endl;
}
}