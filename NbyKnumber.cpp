#include<bits/stdc++.h>
using namespace std;
struct arrcount{
	int e;//element
	int c;//counter
};
int main(){
	int n,k,i,j,z,p;
	cin>>n>>k;
	vector<int > iarr(n,0);
	for(i=0;i<n;i++){
	cin>>iarr[i];
	}
	struct arrcount temp[k-1];
	for(i=0;i<k-1;i++){
		temp[i].c=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<k-1;j++){
			if(iarr[i]==temp[j].e){
			temp[j].c++;
			break;
			}
		
		}
		//if element is not present
		if(j==k-1){
			for(p=0;p<k-1;p++){
				if(temp[p].c==0){
					temp[p].e=iarr[i];
					temp[p].c=1;
					break;
				}
			}
			if(p==k-1){
				for(z=0;z<k-1;z++){
					temp[z].c--;
				}
			}
		}
	}
	for (i=0; i<k-1; i++)
    {
        // Calculate actual count of elements 
        int ac = 0;  // actual count
        for (j=0; j<n; j++)
            if (iarr[j] == temp[i].e)
                ac++;
 
        // If actual count is more than n/k, then print it
        if (ac > n/k)
           cout << "Number:" << temp[i].e
                << " Count:" << ac << endl;
    }
	return 0;
}
