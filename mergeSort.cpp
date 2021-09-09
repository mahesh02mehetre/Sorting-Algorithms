#include<bits/stdc++.h>

using namespace std;

//Iterative merge sort
void merge(vector<int> &vec, int low, int mid, int high){

    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
 
    vector<int> L(n1), R(n2); //vector for left and right
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = vec[low + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        vec[k++] = L[i++];
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        vec[k++] = R[j++];
    }
}

void mergeSort(vector<int> &vec, int low, int high)
{
    if (low < high) {
        int mid = low + (high - low) / 2;
 
        // Sort first and second halves
        mergeSort(vec, low, mid);
        mergeSort(vec, mid + 1, high);
 
        merge(vec, low, mid, high);
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
    for(int i=0; i<s;i++){
        cin>>num;
        vec.push_back(num);
    }
    cout<<endl;

    cout<<"Sorted array elements:"<<endl;   
    mergeSort(vec, 0, s-1);
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}