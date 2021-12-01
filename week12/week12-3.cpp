///selection sort
///原則:選出最小的
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d",a[i]);
    printf("\n");

    for(int i=0 ; i<10 ;i++){

        for(int j=i+1 ; j<10 ;j++){  ///從i的右邊開始比較(只比較右邊)

            if(a[i]>a[j]){

                int temp =a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<10; i++) printf("%d",a[i]);
    printf("\n");
}

