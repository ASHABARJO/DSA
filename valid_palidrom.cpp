#include<iostream>
using namespace std;
 bool palidrom(string str){
    int l=0,h=str.length()-1;
    for (int i = 0; i <= h; i++)
    {
        str[i]=tolower(str[i]);
    }
    
    while(l<=h){
        if(str>="a" && str<="z")
        l++;
    
    else if(str>="a" && str<="z")
        h--;

    else if(str[l]==str[h])
 {       l++;
        h--;
 }
  return true;
    }
    return false;
    }

int main(){
    string str="Too hot to hoot.";
  if(palidrom(str)){
    cout<<"This is a palidrom";
  }
  else{
    cout<<"This is not a palidrom";
  }
    return 0;
}