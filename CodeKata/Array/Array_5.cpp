#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int n,m,temp;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int k=0;k<m;k++)
    {
        cin>>b[k];
    }
  for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) { 
                if (a[i] > a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    for (int i = 0; i < m; i++) 
        {
            for (int j = i + 1; j < m; j++) { 
                if (b[i] < b[j]) 
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int k=0;k<m-1;k++)
    {
        cout<<b[k]<<" ";
    }
    for(int k=m-1;k<m;k++)
    {
        cout<<b[k];
    }
	return 0;
}
