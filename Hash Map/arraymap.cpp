// C++ program to count the frequency of elements in an array using map
///In this code snippet, we create an array of integers and use a map to count the frequency of each element in the array. We iterate through the array and increment the count for each element in the map. Finally, we print out each unique element along with its frequency.

#include <bits/stdc++.h>
using namespace std;
int main (){
    int a[5] ={1,3,3,9,3};
    map <int,int> m;
    for(int i:a){
        m[i]+=1;
    }
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}


