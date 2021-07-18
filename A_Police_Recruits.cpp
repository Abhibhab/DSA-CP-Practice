
#include<iostream> 
using namespace std; 
  

int main() 
{ 
int t ,x,sum=0,c=0; cin>>t;
while(t--) 
{
  cin>>x; 
  sum+=x; 
  if(sum<0 )
    {c++;sum=0;}
}

cout<<c; 
}