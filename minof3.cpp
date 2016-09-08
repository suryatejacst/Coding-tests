#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z,sm;
	cin>>x>>y>>z ;
	//y + ((x - y) & ((x - y) >>(sizeof(int) * CHAR_BIT - 1))) gives min
	//y + ((x - y) & (!(x - y) >>(sizeof(int) * CHAR_BIT - 1))) gives max

	if(!(y/x)){
		sm= (!(y/z))?y:z;
	}
	else
		sm= (!(x/z))?x:z;
	cout<<sm;
	return 0;
}
