#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}

//biparts given vector into sorted and unsorted part
//check every element of unsorted part compare it with elements
//in sorted part and set at correct position.
void insertionSort(vector<int> &v){
    int s = v.size();
    for(int i=0; i<s; i++){
        int element = v[i];
        int j = i-1;
        while(j>=0 && element < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = element;
    } 
}

int main()
{
    int s;
    vector<int> vec;
    cout<<"Enter number of array elements"<<endl;
    cin>>s;
    int num;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<s; i++){
        cin>>num;
        vec.push_back(num);
    }
    cout<<endl;

    cout<<"Sorted array elements:"<<endl;  
    insertionSort(vec);
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}