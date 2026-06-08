//WAP to input  an array of strings using maps and print that array in decreasing order without using inbuilt fuctions.
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    map <string,int> m;
    cout<<"Enter the strings: "<<endl;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]+=1;
    }
    cout<<"Strings in decreasing order: "<<endl;
    for (auto it=m.rbegin();it!=m.rend();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
   

