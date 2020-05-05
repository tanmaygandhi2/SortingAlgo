#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
	int val;
	int i,j;
	for(int i=1;i<n;i++)
	{
		val=arr[i];
		j=i;
		while(j>0&& arr[j-1]>val)
		{
			arr[j]=arr[j-1];
			j-=1;
		}
		arr[j]=val;
	}
}

void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    insertionsort(arr, n);  
    cout << "Sorted array: \n";  
    print(arr, n);  
    return 0;
}
