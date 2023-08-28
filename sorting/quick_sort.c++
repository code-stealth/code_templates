#include<bits/stdc++.h>

using namespace std;

int fn(vector<int>& v, int left, int right){
    int pivot = v[left];

    int i = left;
    int j = right;
    while(i<j){
        while(v[i] <= pivot && i <= right-1)
            i++;
        while(v[j] > pivot && j>=left+1) 
            j--;
        if(i<j) swap(v[i], v[j]);
    }

    swap(v[left], v[j]);
    return j;
}

void quickSort(vector<int>& v, int left, int right){
    if(left >= right)   return ;

    int partition = fn(v, left, right);
    quickSort(v, left, partition - 1);
    quickSort(v, partition + 1, right);

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];

    quickSort(v, 0, n-1);

    for(int i = 0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}