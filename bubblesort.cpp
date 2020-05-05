#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int arr[], int n)
{
	for(int i=0;i<n-1;i++) // n-1 bcoz in inner loop it checks with +1 of j iterate.
	{
		for(int j=0;j<n-1-i;j++) // -i becoz after every itertation , we get the n-i highest no. in the right.
		{
			if(arr[j+1]<arr[j])
				swap(&arr[j+1],&arr[j]);
		}
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
    bubblesort(arr, n);  
    cout << "Sorted array: \n";  
    print(arr, n);  
    return 0;
}
