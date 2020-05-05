#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[], int start, int end)
{
	int pi=arr[end];
	int pindex=start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<=pi)
			{
				swap(&arr[i],&arr[pindex]);
				pindex+=1;
			}
	}
	swap(&arr[end],&arr[pindex]);
	return pindex;
}
void quicksort(int arr[], int start, int end)
{	if(start<end)
	{
	
	int pivot=partition(arr,start,end);
	quicksort(arr,start,pivot-1);
	quicksort(arr,pivot+1,end);
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
	int arr[] = {64, 25, 12, 22, 110};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    quicksort(arr, 0,n-1);  
    cout << "Sorted array: \n";  
    print(arr, n);  
    return 0;
}
