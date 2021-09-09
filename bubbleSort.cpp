#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}

void bubbleSort(vector<int> &v){
    int a;
    int s = v.size();
    int sorted=0, count = 0;;
    for(int i=0; i<s && !sorted; i++){
        //swapping adjacent element if they are not in correct order
        sorted = 1;
        for(int j=1; j<s-i; j++){
            // count++;
            if(v[j-1] > v[j]){
                swap(v[j-1], v[j]);
                sorted = 0;
            }
        }
    } 
    // cout<<count<<endl; to check how many times loop runs
}

int main()
{
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
    bubbleSort(vec);
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}