#include <iostream>
using namespace std;
int main() {
    int n,min,max,lar,small;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=max=arr[0];
    lar=small=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            small=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            lar=i;
        }
    }
    cout<<lar-small;
    
    return 0;
}
