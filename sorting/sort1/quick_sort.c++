#include<bits/stdc++.h>

using namespace std;

int fun(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }

        while(arr[j] > pivot && j >= low+1){
            j--;
        }

        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high){
    if(low < high){
        int partIndex = fun(arr, low, high);
        quickSort(arr, low, partIndex-1);
        quickSort(arr, partIndex+1, high);
    }    
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n;i++)
        cin>>v[i];
    cout<<"ans = "<<endl;
    quickSort(v, 0, n-1);
    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}