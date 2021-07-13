#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int binary_search(int a[],int x,int l,int h)
{
	int mid;
	
	while(l<=h)
	{
		mid=l + (h-l)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(x<a[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
		
	}
	return -1;
}
int main()
{
	int n,i,x,result;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to be searched"<<endl;
	cin>>x;
	
	result=binary_search(a,x,0,n-1);
	cout<<result;
	return 0;
	
}
