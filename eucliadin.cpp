#include<iostream>
using namespace std;
int gcd(int *a){
	int j=1;
	int n=8;
	int gcd=a[0];
	while(j < n){
		if(a[j] % gcd == 0)
			j++;
		else
			gcd=a[j]%gcd;
	}
	return gcd;
}

int main(){
	int a[]={3,9,27,9,3,3,3,3},i;
     cout<<"gcd no of a[7]"<<gcd(a);
	

}