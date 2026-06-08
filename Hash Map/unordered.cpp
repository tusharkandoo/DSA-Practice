//WAP to create an unordered map insert roll no of a student and name

#include <bits/stdc++.h>
using namespace std;
int main (){
   unordered_map <int,string> m;
   m[1]="Tushar";
   m[2]="Ujjwal";
   m[3]="Nikhil";
   m[4]="Piyush";
   m[5]="Snehil";
   m.clear();
   m[1]="Tushar";
   for(auto i:m){
       cout<<i.first<<" "<<i.second<<endl;
    }
}

