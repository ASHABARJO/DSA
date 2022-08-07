#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

const int N=1e6+2;
int idx[N];
int minidx=INT_FAST16_MAX;
for(int i=0;i<n;i++) 
{
idx[arr[i]]=-1;
}
for (int i = 0; i < n; i++)
{if (idx[arr[i]==-1])
{
    minidx=min(minidx,idx[arr[i]]);
}
else{
    idx[arr[i]]=i; 
}

}

if(minidx==INT_FAST16_MAX) 
{
    cout<<"-1"<<endl;
}
else{
    cout<<minidx+1<<endl;

}
}

