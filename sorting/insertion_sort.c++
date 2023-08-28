#include<bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int>& nums, int n){
    for(int i = 1; i<n; i++){
        if(nums[i] < nums[i-1]){
            int j = i;
            while(j>0){
                if(nums[j] < nums[j-1])
                    swap(nums[j], nums[j-1]);
                j--;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0 ; i<n; i++)
        cin>>v[i];

    insertion_sort(v, n);
    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}