#include<bits/stdc++.h>
#define SIZE sizeof(int)
using namespace std;
int main(){
        int n,x;
        cin >>n;
        int sum=0;
        for(int i=0;i<=SIZE;i++){
                x=1<<i;
                for(int i=1;i<=n;i++){
                        if(x&i)
                        sum++;
                }
        }
	cout<<sum<<endl;
        return 0;
}
