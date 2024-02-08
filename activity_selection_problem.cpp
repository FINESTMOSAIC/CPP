#include <iostream>
#include <algorithm>
using namespace std;


class Activity{
public:
	//data members 

	int st,et;


};

//global activity array 
Activity a[100001];


bool compare(Activity a1,Activity a2){
	if (a1.et<a2.et){
		return true;
	}
	//== sei farak nahi padh raha 
	else{
		return false;
	}
}


void Solve(int n){

	sort(a+0,a+n,compare);

	/*for( int i=0;i<n;i++){
		cout<<a[i].st<<" "<<a[i].et<<endl;
	}
*/

int ans=1;
int Previous_ending_time= a[0].et;
for (int i=0;i<n;i++){
	if (a[i].st>=Previous_ending_time){
		ans++;
		Previous_ending_time=a[i].et;
	}


}
cout<<ans<<endl;

}




int main(){
	ios::sync_with_studio(0);
	cin.tie(0);
	cout.tie(0)

	int t,n;
	cin>>t;
	for (int j =0;j<t;j++){
		cin>>n;
		for (int i =0;i<n;i++){

			cin>>a[i].st>>a[i].et;
		
		}
		Solve(n);

	/*	cout<<endl<<endl<<endl;     */

	}
	

	return 0;
}