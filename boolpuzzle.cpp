#include<bits/stdc++.h>
using namespace std;
int main(){
	bool arr[2];
	for(int i=0;i<2;i++){
	cin>>arr[i];
	}
	arr[arr[1]]=arr[!arr[1]];
	for(int i=0;i<2;i++)
		cout<<arr[i]<<" ";
	return 0;
}
