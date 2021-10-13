/* This is method 2 to print the list of elements as an array */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[100],i=0;
	while(cin>>arr[i])
	i++;
	for(int j=0;j<i-1;j++)
	cout<<arr[j]<<" ";
for(int j=i-1;j<i;j++)
	cout<<arr[j];
	return 0;
}
