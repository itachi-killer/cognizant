#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

 	for(int i=0;i<4;i++){
 		for(int j=0;j<4;j++){
 			cout<<a[i][j]<<"  ";
 		}
 		cout<<endl;
 	}

 	cout<<endl;

 	for(int i=0;i<4;i++){
 		for(int j=i;j<4;j++){
 			int k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
 		}
 	}

 	for(int i=0;i<4;i++){
 		for(int j=0;j<4;j++){
 			cout<<a[i][j]<<"  ";
 		}
 		cout<<endl;
 	}

 	for(int i=0;i<4;i++){
 		int j=a[i][0];
 		a[i][0]=a[i][3];
 		a[i][3]=j;
 	}

 	cout<<endl;
 	for(int i=0;i<4;i++){
 		for(int j=0;j<4;j++){
 			cout<<a[i][j]<<"  ";
 		}
 		cout<<endl;
 	}

 }