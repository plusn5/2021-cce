///week07-5 了解for(迴圈)
#include <stdio.h>
int main()
{
    int i;  ///1973年的c 發明者的寫法,1989年ANSI C規範
    for( i=0; i<=3 ; i++){
        printf("有幾次呢?\n");
    }  ///課本寫法，不好!

    ///1998/1999 新版的c++/c寫法
    for(int i=0 ; i<3 ; i++){
        printf("老師推薦的寫法，有幾次?\n");
    }///會跑3次
}
