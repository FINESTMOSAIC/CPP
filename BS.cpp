#include <iostream>
using namespace std;

bool BS(int a[],int n , int t, int start =0){
	//define search space
	int test=a[(n-1)/2];

cout<<(n-1)/2<<t<<test<<endl;

	if (t==a[(n-1)/2]){
		cout<<"present";
		return true;


	}

	if (t<a[n-1/2]){
	BS(a, (n/2)+1,t);
	if (t>a[n-1/2]){
			BS(a, (n),t,(n-1)/2);
		}



	}
	else{

	return false;
	
	}

	


}

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		int e;
		cin>>e;
		a[i]=e;

	}	

	int s;
	cin>>s;
	cout<<BS( a,n,s);



	return 0;
}