#include <bits/stdc++.h>
using namespace std;
void PrintElements(vector <int> arr, int i){
    if(i<arr.size()){
        cout<<arr[i];
        PrintElements(arr,i+1);
    }
}
//Reverse Print
void PrintELementsReverse(vector <int> arr, int i){
    if(i<arr.size()){
        PrintElementsReverse(arr,i+1);
        cout<<arr[i];
    }
}
//Metho 2 of reverse print 
void PrintELementsReverse2(vector <int> arr, int i){
    int n= arr.size();
    if(i<arr.size()){
        cout<<arr[n-i-1];
        PrintElementsReverse2(arr,i-1);
    }
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    PrintElements(arr,0);
    PrintELementsReverse(arr,0);
    PrintELementsReverse2(arr,0);
    return 0;
}