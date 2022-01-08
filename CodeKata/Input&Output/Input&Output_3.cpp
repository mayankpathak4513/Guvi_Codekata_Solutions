#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int x[20];
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    cout<<a<<" "<<b;
    cout<<"\n";
    for(int i=0;i<a-1;i++)
    {
        cout<<x[i]<<" ";
    }
    for(int i=a-1;i<a;i++)
    {
        cout<<x[i];
    }
    return 0;
}
