#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%c",'A'+abs(i-j));
		}
		printf("\n");
	}
	return 0;
} 
