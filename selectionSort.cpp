#include<bits/stdc++.h>

using namespace std;
void swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}

void selectionSort(vector<int> &v){
    int minInd, min;
    int s = v.size();
    int sorted=0, count = 0;
    //sorted is to check if array is already sorted or not
    for(int i=0; i<s && !sorted; i++){
        min = v[i];
        minInd = i;
        sorted = 1;
        //selecting minimum element from j=i to s and placing it at v[i]
        for(int j=i; j<s; j++){
            // count++;
            if(min>v[j]){
                min = v[j];
                minInd = j;
                sorted = 0;
            }
        }
        swap(v[i], v[minInd]);
    }  
    // cout<<count<<endl; //to check how many times loop runs
}

int main(){
    int s;
    vector<int> vec;
    cout<<"Enter number of array elements"<<endl;
    cin>>s;
    int num;
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<s;i++){
        cin>>num;
        vec.push_back(num);
    }
    cout<<endl;

    cout<<"Sorted array elements:"<<endl;  
    selectionSort(vec);
    // swap(num, s);
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}