#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& nums, int n){
    for(int i = 0; i<n-1; i++){
        int j = i;
        int mine = INT_MAX;
        int mini = i;
        while(j<n){
            if(nums[j] < mine){
                mine = nums[j];
                mini = j;
            }
            j++;
        }
        swap(nums[i], nums[mini]);
        for(int i = 0; i<n; i++)
            cout<<nums[i]<<" ";
        cout<<endl;
    }
}
int main(){
    cout<<"Please enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    selection_sort(v, n);
    cout<<"finally"<<endl;
    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
