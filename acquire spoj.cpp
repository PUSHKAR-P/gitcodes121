#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int q,r,s;
	scanf("%d",&q);
	for(int j=0;j<q;j++){
		int sum=0;
		scanf("%d %d",&r,&s);
		for(int k=r;k<=s;k++)
		sum+=a[k];
		printf("%d\n",sum);
	}
}
