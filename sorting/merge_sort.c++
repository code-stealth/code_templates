#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &v, int left, int mid, int right){
    int one = left;
    int two = mid+1;
    vector<int> arr;

    while(one <= mid && two <= right){
        if(v[one] <= v[two]){
            arr.push_back(v[one]);
            one++;
        }
            
        else{
            arr.push_back(v[two]);
            two++;
        } 
    }

    while(one<=mid){
        arr.push_back(v[one]);
        one++;
    }

    while(two<=right){
        arr.push_back(v[two]);
        two++;
    }

    for(int i = left; i<=right; i++){
        v[i] = arr[i-left];
    }
}

void mergeSort(vector<int> &v, int left, int right){
    if(left == right)
        return ;
    int mid = (left+right)/2;
    mergeSort(v, left, mid);
    mergeSort(v, mid+1, right);
    merge(v, left, mid, right);
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];
    
    mergeSort(v, 0, n-1);
    for(int i =0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}