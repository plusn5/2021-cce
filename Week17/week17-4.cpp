#include <stdio.h>
int f(int n)
{
	int sum=0;
	while(n>0){    //�j�� ���
		sum+=n%10; //�[�W�Ӧ��
		n/=10;     //�Nn�ܤp
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
