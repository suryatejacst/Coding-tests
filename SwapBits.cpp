#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,p1,p2,n;
	cin>>x>>p1>>p2>>n;
	int q1,q2;
	q1 =  (x >> p1) & ((1U << n) - 1); //gives 3 bits that to be swapped
	q2 =  (x >> p2) & ((1U << n) - 1);
	int z;
	z=q1^q2;
	x=x^(z<<p1|z<<p2);
	cout<<x<<endl; 
	return 0;
}
