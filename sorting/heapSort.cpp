#include<bits/stdc++.h>

using namespace std;

void heapify(vector<int>& v, int ind, int size){
    int largest = ind;
    int left = 2*ind;
    int right = 2*ind+1;
    
    if(left <= size && v[largest] < v[left]){
        largest = left;
    }

    if(right <= size && v[largest] < v[right]){
        largest = right;
    }

    if(largest != ind){
        swap(v[ind], v[largest]);
        heapify(v, largest, size);
    }
}

void heapSort(vector<int>& v, int size, int largest){
    int t = size;
    while(t>1){
        swap(v[t], v[1]);
        t--;
        heapify(v, 1, t);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    v[0] = -1;
    for(int i = 1; i<=n; i++){
        cin>>v[i];
    }
    int size = n;
    for(int i = size/2; i>0; i--){
        heapify(v, i, size);
    } 

    heapSort(v, size, 1);
    for(int i = 1; i<n+1; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}