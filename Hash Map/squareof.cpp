//c++ to find sqaure of each key in the map and print it out. We create a map that maps integers to their frequencies in an array. We then iterate through the array and update the frequency of each integer in the map. Finally, we print out each key and its corresponding frequency.

#include <bits/stdc++.h>
using namespace std;
int main (){
    int a[5] ={1,3,7,9,10};
    map <int,int> m;
    for(int i:a){
        m[i] =i*i;
    }
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}


