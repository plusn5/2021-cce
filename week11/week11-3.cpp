#include <stdio.h>

int a[10]={9,8,7,4,5,6,1,2,3,0};
int main(){

    for(int i=0; i<10 ; i++)printf("%d ",a[i]);
    printf("\n"); //把原本的陣列印出來

    for(int k=0; k<100;k++){

        for(int i=0 ;i<10-1 ; i++){

            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0 ; i<10 ; i++) printf("%d ", a[i]);
        printf("\n");
    }

}
