#include<iostream>
using namespace std;
void sort(int arr[], int n);
int main()
{
	int arr[]= {1,3,34,56,90,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,n);
	return 0;
}
void sort(int arr[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
