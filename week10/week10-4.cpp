#include <stdio.h>
int a[10000000]={};//�S�g���A�|��0,0=�w��,1��
int main()
{
    int ans=0;
    for(int i=2; i<10000000 ; i++){
        if(a[i]==0){   //����i�ӼƨS���Q����
            ans++;     //���@�Ӥ��li�S��
                       //�����i�F�A��L�S�̱���
            for(int k=i+i; k<10000000; k=k+i){

                a[k]=1;  //����
            }
        }

    }
    printf("Ans: %d ",ans);
}
