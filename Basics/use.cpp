#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 ="TUSHAR";
    string s2= "kandoo";
    cout<<s2.find('o')<<endl;
    cout<<s2.rfind('o')<<endl;
    cout<<s1.length()<<endl;
    cout<<s2.size()<<endl;
    cout<<s1.compare(s2)<<endl;
    cout<<s1.at(4)<<endl;
    cout<<s2.at(3)<<endl;
     cout<<s1.substr(2,4);
     s1.replace(2,3,"ran");
     cout<<s1<<endl;

 s1.insert(6," KANDOO");
 cout<<s1<<endl;
 s1.erase(2,3);
 cout<<s1<<endl;
 s1.append(" ");
 s1.append("GREAT");
 cout<<s1<<endl;
 s1.push_back('a');
 cout<<s1<<endl;
 s1.pop_back();
 cout<<s1<<endl;
 reverse(s1.begin(),s1.end());
cout<<s1<<endl;
sort(s2.begin(),s2.end());
cout<<s2<<endl;
sort(s1.begin(),s1.end(),greater<char>());
cout<<s1<<endl;
string s3 = s1;
cout<<s3<<endl;

 }