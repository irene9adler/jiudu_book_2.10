//�Ŷ�2.10�Ű����������
#include <stdio.h>
#define M 1000

int main()
{//�����������char ֱ�Ӵ�ӡ*����
    int h;
    int l;
    scanf("%d",&h);
    l = h + 2*(h-1);
    int i,j;
    for(j=0;j<h;j++)
    {
      /*  for(i=l-h-2*j;i<l;i++)
            printf("*");*/
      for(i=0;i<l;i++)
        {
            if(i<l-h-2*j) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
