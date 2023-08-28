#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& nums, int n){
    for(int i = n-1; i>0; i--){
        int j = 1;
        int sw = 0;
        while(j<=i){
            if(nums[j-1] > nums[j]){
                swap(nums[j-1], nums[j]);
                sw = 1;
            }
            j++;
        }
        if(sw == 0)
            break;
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
    bubble_sort(v, n);
    cout<<"finally"<<endl;
    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
