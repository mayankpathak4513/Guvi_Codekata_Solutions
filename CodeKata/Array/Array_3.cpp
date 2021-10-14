#include <iostream>
using namespace std;
int main() {
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0 && s%3==0 && s%5==0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
    return 0;
}
