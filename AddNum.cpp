#include<bits/stdc++.h>
using namespace std;
int Add(int x,int y);
int main(){
	int a,b,c;
	cin>>a>>b;
	c=Add(a,b);
	cout<<c<<endl;
	return 0;
}
int Add(int x,int y){
	if(y==0)
		return x;
	else
		return Add(x^y,(x&y)<<1);
}
