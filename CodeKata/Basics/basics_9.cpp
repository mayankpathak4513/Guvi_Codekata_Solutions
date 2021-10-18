#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    
    int k=n+m;
    if(k%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    
    return 0;
}
