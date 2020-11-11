 #include<iostream>
#include<cstdio>
#include<algorithm>//max������ͷ�ļ� 
int value[30],weight[30];
int c[30][30002]={{0}};//c���ڶ�̬�滮��� ,����Ҫд��main����֮ǰ 
using namespace std;
int main()
{
	
	int m,n;
	cin>>m>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>weight[i]>>value[i];
		value[i]*=weight[i]; 
	}
	for (int i=1;i<=n;i++)//ö��1��n����Ʒ
	  for (int j=0;j<=m;j++)//ö�ٱ�������0�����m����� 
	  {
	  	if (weight[i]<=j) 
		  c[i][j]=max(c[i-1][j],c[i-1][j-weight[i]]+value[i]);
		  //װ���£������ǲ�װ��ֵ�󣬻���װ��Ʒ��ֵ�� 
		else c[i][j]=c[i-1][j];//װ���£��ͺ�װ����һ����Ʒ�ļ�ֵ��ͬ 
	   } 
     cout<<c[n][m] ;
     return 0;
}

