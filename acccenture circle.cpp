#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=0;
	int c1[3]={0,0,2};
	int c2[3]={0,2,2};
    for(int i=c1[0]-c1[2];i<=c1[0]+c1[2];i++){
    	for(int j=c1[1]-c1[2];j<=c1[1]+c1[2];j++){


    		if (((i-c1[0])*(i-c1[0]))+((j-c1[1])*(j-c1[1])) <= (c1[2]*c1[2])  )
    		{
    		 if((((i-c2[0])*(i-c2[0]))+((j-c2[1])*(j-c2[1]))) <= (c2[2]*c2[2])){	
    		 	cout<<" "<<i<<" "<<j;                
               k++;
    		  }
    		  cout<<endl;
    	}
    }
  }
    if(k>0){
    	cout<<" no of point in between the no is "<<k;
    }else{
      cout<<" no no in between";
    }
}