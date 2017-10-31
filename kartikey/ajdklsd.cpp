#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,count=0;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<n;j++){
		while(a[j]%2==0){
			a[j]=a[j]/2;
			count++;
          //cout<<a[j]<<endl;
		}	
		}
		if(count%2==0)
			cout<<"Alan"<<endl;
		else
			cout<<"Charlie"<<endl;
	}
}
