#include<iostream>
#include<stack>
using namespace std;
 bool areBracketBalance(string exp){
stack<char>temp;
for (int i = 0; i < exp.length(); i++)
{
if(temp.empty()){
temp.push(exp[i]);
}    
else if(temp.top()=='(' && exp[i]==')' || temp.top()=='[' && exp[i]==']' || temp.top()=='{' && exp[i]=='}'  )
{temp.pop();
}
else{
    temp.push(exp[i]);
}
}
if(temp.empty())
{return true;
}
return false;
}   
int main(){
    string exp="{[()]}";
    string str2="ttew";
  if(areBracketBalance(exp)){
    cout<<"This is a Balance Bracket";
  }
  else{
    cout<<"This is not a Balance Bracket";
  }
    return 0;
}