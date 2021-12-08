#include <stdio.h>

void printStar(int n )  ///定義函式(沒有回傳值)
{
    for(int i=0 ; i<n ; i++) printf("*");
}
int main()
{
    printStar(7); ///呼叫函式
}
