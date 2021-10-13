#include<iostream>
using namespace std;
int main()
{ int n,m=1,k=1;
  cin>>n;
  if(n==3)
  {
  cout<<m<<" "<<2*n;
  }
  else
  {
  for(int i=1;i<n;i++)
  {
    k=k*i;
  }
  cout<<m<<" "<<n<<" ";
  cout<<k;
  }
return 0;
  }
  
  
