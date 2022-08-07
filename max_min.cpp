#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max_num=INT_MIN,min_num=INT_MAX;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    max_num=max(max_num,arr[i]);
    min_num=min(min_num,arr[i]);
    }
    cout<<"max"<<max_num<<endl;
    cout<<"min"<<min_num<<endl;
}