#include<iostream>
using namespace std;
long int n,m,k,a[1005][1005],b[1005],c[1005][1005];
int main()
{
	cin>>n>>m>>k;
	for (int i=1;i<=n;i++){
	  for (int j=1;j<=m;j++){
	  	cin>>a[i][j];
	  }
    }
	for (int i=1;i<=n;i++){
	  for (int j=1;j<=m;j++)
	  {
	  	if (c[j][a[i][j]]==0) 
		  {
		  	c[j][a[i][j]]=1;
		  	b[a[i][j]]++; 
		  }
	  }
    }
	for (int i=1;i<=k;i++)
	{
		cout<<b[i]<<" ";
	}
}
