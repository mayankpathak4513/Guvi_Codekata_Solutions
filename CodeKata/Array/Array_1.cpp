#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])>k)
        {
            cout<<"1 ";
        }
        if(abs(a[i]-a[i+1])<=k)
        {
            cout<<"0 ";
        }
    }
      for(int i=n-1;i<n;i++)
    {
        if(abs(a[n-1]-a[0])>k)
        {
            cout<<"1";
        }
        if(abs(a[n-1]-a[0])<=k)
        {
            cout<<"0";
        }
    }
    return 0;
}
