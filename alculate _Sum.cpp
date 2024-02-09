#include<iostream>
using namespace std;
int main() {
	int n,q,x,m,s,temp;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	m=1e9+7;
	cin>>q;
	
	for (int i=0;i<q;i++){
		cin>>x;
		s=0;
		temp= a[(n-1+x)%n];

		for (int j=0;j<n-1;j++){
			a[j%n]=a[j%n]+a[(j+x)%n];
			s=s+(a[j%n]);
		}
		a[n-1]=temp+a[n-1];
		
		s+=a[n-1];
		
		

	}
	

	s=s%m;
	cout<<s;
	


	return 0;
}