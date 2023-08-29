#include<bits/stdc++.h>

using namespace std;

class Heap{
    public:
        vector<int> v;
        int size;
        Heap(){
            v.push_back(-1);
            size = 0;
        }

        void insert(int value){
            if(size == 0){
                v.push_back(value);
                size++;
            }
            else{
                v.push_back(value);
                size++;
                int i = size;
                while(i>1){
                    int parent = i/2;
                    if(v[parent]<v[i]){
                        swap(v[parent], v[i]);
                        i = parent;
                    }
                    else return ;
                }
            }
        }

        void deleteValue(){
            v[1] = v[size];
            size--;
            int i = 1;
            while(i<size){
                int left, right;
                int larger;
                if(2*i <= size){
                    left = v[2*i];
                }
                else{
                    return ;
                }

                if(2*i +1 <= size){
                    right = v[2*i+1];
                    larger = left>right ? 2*i : 2*i+1;
                }
                else{
                    larger = 2*i;
                }
                if(v[i] < v[larger]){
                    swap(v[i], v[larger]);
                    i = larger;
                }
                else return ;
            }
        }

        void printHeap(){
            for(int i = 1; i<=size; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Heap h;
    h.insert(5);
    h.printHeap();
    h.insert(6);
    h.printHeap();
    h.insert(7);
    h.printHeap();
    h.insert(3);
    h.printHeap();
    h.insert(1);
    h.printHeap();
    h.insert(2);
    h.printHeap();
    h.deleteValue();
    h.printHeap();
    h.deleteValue();
    h.printHeap();
    h.deleteValue();
    h.printHeap();
}