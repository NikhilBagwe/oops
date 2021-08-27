//===========================================================================================================================================
// input = {10,2,8,4,9}  // 2 4 8 9 10
// you have to sort the array first an then swap every pair of 2 elements of it. eg. 2 4 -> 4 2
// output = {4,2,9,8,10}
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i < n-1; i++){
        
        for(int j = 0; j < n-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            
        }
    }
    
    cout<<"Sorted array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int p = 0;
    
    if(n%2 == 0){
        int times = n/2;
        int i=0;
        while(i< times){
            swap(arr[p], arr[p+1]);
            p=p+2;
            i++;
        }
    }
    else{
        int times = n/2;
        int i=0;
        while(i< times){
            swap(arr[p], arr[p+1]);
            p=p+2;
            i++;
        }
    }
    
    cout<<"Final array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


//===========================================================================================================================================
// input = {9,1,5,3}  , {5,6,2,8,7}
// merge 2 unsorted array 
// output = {1,2,3,5,5,6,7,8,9}

#include <bits/stdc++.h>

using namespace std;

void merge(int arr1[], int arr2[], int n, int m, int ans_arr[]){
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
        
        if(arr1[i] <= arr2[j]){
            ans_arr[k] = arr1[i];
            i++;
            k++;
        }
        
        else{
            ans_arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    
    while(i < n){
        ans_arr[k] = arr1[i];
        i++;
        k++;
    }
    
    while(j < m){
        ans_arr[k] = arr2[i];
        j++;
        k++;
    }
}

int main()
{
    int arr1[] = {1,5,9,3};    // 1 3 5 9
    int arr2[] = {6,2};  // 2 5 6 7 8
    
    int n, m;
    cout<<"Enter size of both arrays: "<<endl;
    cin>>n>>m;
    
    int arr1[n];
    int arr2[m];
    
    cout<<"Enter elements of array 1: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 2: "<<endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    
    // int n= sizeof(arr1)/ sizeof(arr1[0]);
    // int m= sizeof(arr2)/ sizeof(arr2[0]);
    
    int size = n+m;
    
    int ans_arr[size]; // final array 
    
    merge(arr1, arr2, n, m, ans_arr);
    
    cout<<"Merged array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<ans_arr[i]<<" ";
    }
    cout<<6/2;
    
    return 0;
}
