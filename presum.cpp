#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i =0; i<n; i++){
	cin>>a[i];
	}
	cout<<"Initial list"<<endl;
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";

	}
		cout<<endl;

	int s=0;
	int presum[n];

	cout<<"sum list"<<endl;

	for(int j =0; j<n;j++){
	s=s+a[j];
	presum[j]=s;
	


	}



	for (int i=0;i<n;i++){
		cout<<presum[i]<<" ";

	}



	return 0;
}