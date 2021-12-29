#include <stdio.h>
char line[100];

int main()
{
        printf("Please input a line: ");
        scanf("%s",line);               ///只讀到空格
        printf("你剛剛輸入:%s\n",line);

}
