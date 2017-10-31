#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,a[1000],i,j,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(x=k;x<n;x++)
	
	{  
	
		sort(a.begin(),a.end());
		printf("%d",a[0]);
	} 
	
	}
}

