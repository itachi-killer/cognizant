// 

#include<bits/stdc++.h>
using namespace std;
vector<int> spi(vector<vector<int>> &m){
	vector<int> ans;
	if(m.size()==0)
	return ans;
	int R=m.size(),C=m[0].size();
	bool seen[R][C];
	int dr[]={0,1,0,-1};
	int dc[]={1,0,-1,0};
	int r=0,c=0,di=0;
	for(int i=0;i<R*C;i++){
	ans.push_back(m[r]);
	seen[r]=true;
	int cr=r+dr[di];
	int cc=c+dc[di];
	if(0 <cr && cr <R && 0<=cc && cc <= C && !seen[cr][cc]){
	r=cr;
	c=cc;
	}
	else{
	di=(di+1)%4;
	r +=dr[di];
	c +=dc[di];
	}
	}
	return ans;
}
int main(){
	vector<vector<int>> a{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(int x:spi(a)){
	cout<< x << " ";
	}
	return 0;
}