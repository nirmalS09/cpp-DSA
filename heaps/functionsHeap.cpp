#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size = 0;

        Heap(){
            arr[0]=-1;
            size=0;
        }

        void insert(int val){
            size = size+1;
            int index = size;
            arr[index]=val;

            while(index>1){
                int parent = index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else return;
            }
        }

        void print(){
            for(int i = 1; i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void deleteFromHeap(){
            if(size==0) return;
            arr[1]=arr[size];
            size--;

            //take root node to its correct pos
            int i =1;
            while(i<size){
                int lIndex = 2*i;
                int rIndex = 2*i+1;

                if(lIndex<size && arr[i]<arr[lIndex]){
                    swap(arr[i], arr[lIndex]);
                    i = lIndex;
                }
                else if(rIndex<size && arr[i]<arr[rIndex]){
                    swap(arr[i], arr[rIndex]);
                    i = rIndex;
                }
                else return;

            }
        }
};
int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(54);
    h.insert(52);
    h.insert(53);
    h.print();
    h.deleteFromHeap();
    h.print();
}