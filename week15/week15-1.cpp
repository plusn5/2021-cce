#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    for(int i=a;i>0;i--){

        if(a%i==0 && b%i==0){
            printf("%d",i);
            break;
        }
    }
    /*  //第二種寫法
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            ans=i;
            }
            printf("%d",ans);
        }
    }
    */
}
