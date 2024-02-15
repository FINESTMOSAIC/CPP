#include<iostream>
using namespace std;

int main(){

	int n,t;
	cin>>n>>t;
	int a[n];
	for (int i=0;i<n;i++){

		cin>>a[i];


	}
	int ttc=0,ttp=0,br=0,j=0;
	//j is used for shrinking the window and starting the point

	for(int i=0;i<n;i++){
		ttc+=a[i];
		br++;
		if (ttc>t){
			//you have exceeded the parameter for the window ,hence start shrinking 
			ttc-=a[j];
			br--;
			j++;
		}
	}

	cout<<br<<endl;

	return 0;
}