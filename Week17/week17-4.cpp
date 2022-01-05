#include <stdio.h>
int f(int n)
{
	int sum=0;
	while(n>0){    //迴圈 剝皮
		sum+=n%10; //加上個位數
		n/=10;     //將n變小
	}
	return sum;
}

int main()
{
	int n;
	while(scanf("%d",&n)==1){
		if(n==0)break;
		int ans =f(f(f(n)));
		printf("%d\n",ans);
	}
}
