#include<bits/stdc++.h>
using namespace std;
int setcount(int a);
int main(){
	int n,q,p;
	cin>>n;
	int m;
	q=n+1;
	while(q!=1&&setcount(q)!=setcount(n)){
	q++;
	}
	if(q!=1)
	cout<<q;
	else
	cout<<0;
	return 0;
	}
int setcount(int a){
	int x;
	int count=0;
	for(int i=0;i<sizeof(int);i++){
		x=1<<i;
		if(a&x)
			count++;
	}
	return count;
}
