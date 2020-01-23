#include<bits/stdc++.h>
using namespace std;

MatrixChainOrder(int arr[],int i,int j)
{
	if(i==j)
	return 0;
	int min=100000;
	int k,count;
	for(k=i;k<j;k++)
	{
		count=MatrixChainOrder(arr,i,k)+MatrixChainOrder(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		if(count<min)
		min=count;
	}
	return min;
}

int main() 
{ 
    int arr[] = {1, 2, 3, 4, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1); 
} 
