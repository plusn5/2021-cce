##week17-1
```c
#include <stdio.h>
int main()
{
    int  n=20030101; //拆解
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n/=10;
    printf("%d => %d %d\n",n,n/10,n%10);

}

```
##week17-2
```c
#include <stdio.h>
int main()
{
    int n=20030101;
    while(n>0){
        printf("%d => %d %d\n",n,n/10,n%10);
        n/=10;

    }
}

```
##week17-3
```c
#include <stdio.h>
int main()
{
    int n=1234567892;

    int sum=0;
    while(n>0){
         sum+=n%10;
         n=n/10;
    }
    printf("%d\n",sum);
}

```
##week17-4
```c
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

```
