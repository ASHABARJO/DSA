//Longest arthimetic Subarray
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
int ans=2;
int pd=arr[0]-arr[1];
int i=2;
int count=2;
while (i<n)
{
if(pd==arr[i]-arr[i-1])
{count++;}
else
{
    pd=arr[i]-arr[i-1];
     count=2;
}
ans=max(ans,count);
i++;
}
 cout<<ans;
    return 0;
}