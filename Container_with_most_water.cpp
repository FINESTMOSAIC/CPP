#include <iostream>
using  namespace std;
int n;

int maxArea(int* height){
	// int n =height.size;
	int MaxArea=0;
	int j=n-1;
	for (int i =0;i<n;i++){
		int Distance =(j-i);
		int h = min(height[j],height[i]);


		int contribution= (h * Distance);

		if (MaxArea<contribution){
			MaxArea= contribution;
		}

	}
	return MaxArea;
}

int main(){
	int height[n];
	for (int i=0;i<n;i++){
		cin>>height[i];
	}
	cout<<maxArea(height)<<endl;
	
}