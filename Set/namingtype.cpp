// A person wants to name his new born daughter and son he has bought hold of a list of names according to his belief system.
//He wants to name his daughter by the name that appears least in his list of names and he wants to name his son by the name that appears most in the list in case of a tie he will pick the lexicograpically smaller name.Help that person find suitable names for his daughter and names 
// Test case size 7
// Strings: jackal tiger jackal fox lion eagle lion 
// Answer Eagle and jackal
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    map < string, int> m;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        m[s]++;
    }
    for (auto elem:m){
    if(elem.second==2){
        cout<<"son name "<<elem.first<<endl;
    }
    if(elem.second==1)
   {
    cout<<"daughter name "<<elem.first<<endl;
    }
    }
}