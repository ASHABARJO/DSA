// Insertion Sort- Insert an element from unsorted array to its correct position in sorted array
//Repetedly swap two adjacent elemnt if they are in wrong order (L>R-Wrong Order)
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
        for (int i = 0; i<n; i++)
        {
            int cur=arr[i];
            int j=i-1;
        while(arr[j]>cur && arr[j]>=0){
        arr[j+1]=arr[j];
        j--;    
        }
arr[j+1]=cur;
        
    }
  
}

int main(){
    int n;
    cin>>n;
       int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
insertion_sort(arr,n);
for (int i = 0;i< n; i++)
{
cout<<arr[i];
}

    return 0;
}