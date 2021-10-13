#include <iostream>
using namespace std;
int main() {
    
    /* Declaring required variables */
    int n,s=0,x;
    
    /* taking input value */
    cin>>n;
    
    /* modulo, sum and then divide the number until it becomes 0 */
    while(n!=0)
    {
        x=n%10;
        s+=x;
        n=n/10;
    }
    
    /* if sum is divisible by 3 then pure number else not */
    if(s%3==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
