//Binary search is a searching algorithm which search element in sorted array
#include<bits/stdc++.h>
// #define N 10
int binary_search(int arr[],int n,int k){
int s=0;
int e=n;
while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==k)
     return mid;
 else if(arr[mid]>k){
       e=mid-1;
       }
else
s=mid+1;
}
return -1;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0,e=n,k;
int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
cin>>k;
cout<<binary_search(arr,n,k);
    return 0;

}
