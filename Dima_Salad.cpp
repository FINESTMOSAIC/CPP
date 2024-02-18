	#include<iostream>
	#include<vector>
	#include<climits>
	using namespace std;
	int n,k;
	vector<int> t,c;


	int Solve(int i,int sum){
		if(i==n){
			if(sum==0){
				return 0;

			}
			else{
				return INT_MIN;
			}
		}
		int op1=t[i]+Solve(i+1,sum+(t[i]-k*c[i]) );
		int op2 = 0+Solve(i+1,sum);
		int ans=max(op1,op2);
		return ans;
	}


	int main(){

		cin>>n>>k;
		t.resize(n);
		c.resize(n);
		for (int i=0;i<n;i++){
			cin>>t[i];
		}
		for (int i=0;i<n;i++){
			cin>>c[i];
		}
		
		int ans=Solve(0,0);
		if (ans<=0){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
		}

		return 0;
	}