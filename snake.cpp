#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=5,n=25;
	int k=1;
	for(int i=1;i<=a;i++){
		if(i%2==1){
		for(int i=0;i<a;i++){
			cout<<"  "<<k++;
		}
		cout<<endl;
	}
else{
	k=k+4;
	for(int i=0;i<a;i++){
		
		cout<<"  "<<k--;
	}
	cout<<endl;
	k=k+6;
    }
   }
}
