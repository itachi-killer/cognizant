#include<bits/stdc++.h>
using namespace std;
int mulsum(int a){
	if(a==1){
		return 1;
	}else{
		return mulsum(a-1)*a;
	}

}
int main(){
	int a[5];
	int min,max;
	int part,k=0;
	cin>>min>>max>>part;

	for(int i=0;i<5;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<5;i++){
	
	if(a[i]>=min && a[i]<=max){
			k++;
		}
		
	}

    int m=mulsum(k);
    int n=mulsum(k-part);
    int r=mulsum(part);
	int sum=m/(n*r);

	cout<<" no of member can join in a team "<< k<<"    "<<m <<"  sum  "<<sum;

}
// 4
// 10
// 3
// 4
// 12
// 6
// 5
// 10