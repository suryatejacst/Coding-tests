#include<bits/stdc++.h>
using namespace std;
#define SIZE 1<<16
int main(){
	int n,q;
	cin>>n;
	q=(n/256)*256+256;
	vector<int > iarr(q,0);
	for(int i=0;i<n;i++){
		cin>>iarr[i];
	}
	int count=0,k;
	int p=n/256;
	while(p>=0){
		for(int i=0;i<32;i++){
			k=1<<i;
			for(int j=0;j<256;j++){
				if(iarr[j+p*256]&k)
					count++;
			}
		}
		p--;
	}
	cout<<count;
}
