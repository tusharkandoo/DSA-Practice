#include<bits/stdc++.h>
using namespace std;
int main(){
int count = 0;
string s ="tushar";
for(int i=0;i<=s.length();i++){
if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E'){
    count++;
}
}
cout << count <<endl;
cout<<s.length()-count;
}