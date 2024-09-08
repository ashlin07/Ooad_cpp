#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Sort{
    public:
        virtual void sort(vector<int> &arr)=0;
};

class SelectionSort: public Sort{
    public :
        SelectionSort(){
            cout<<"selection sort used"<<endl;
        }
        void sort(vector<int> &arr){
            int n=arr.size();
            for(int i=0;i<n-1;i++){
                int min_ind=i;
                for(int j=i+1;j<n;j++){
                    if(arr[min_ind]>arr[j]){
                        min_ind=j;
                    }
                }
                swap(arr[i],arr[min_ind]);
            }
            return;
        }
};

class BubbleSort: public Sort{
    public: 
        BubbleSort(){
            cout<<"bubble sort used"<<endl;
        }
        void sort(vector<int>&arr){
            int n=arr.size();
            for(int i=n-1;i>0;i--){
                for(int j=0;j<i;j++){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j+1],arr[j]);
                    }
                }
            }
            return ;
        }
};




void printArr(const vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int>arr={1,4,6,3,2,7,8,5};
    printArr(arr);
    Sort *sort_obj;
    sort_obj=new BubbleSort();
    sort_obj->sort(arr);
    printArr(arr);
    return 0;
}