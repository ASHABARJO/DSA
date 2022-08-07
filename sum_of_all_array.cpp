// Given an array a[] of size n input Output sum of each subarray of the given array
// Insertion Sort- Insert an element from unsorted array to its correct position in sorted array
//Repetedly swap two adjacent elemnt if they are in wrong order (L>R-Wrong Order)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
       int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
int sum=0;
for (int i = 0;i< n; i++)
{ sum=0;
for(int j=i;j<n;j++)
{
sum+=arr[j];
cout<<sum<<endl;
}
}
    return 0;
}