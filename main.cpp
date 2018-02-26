//九度2.10排版题输出梯形
#include <stdio.h>
#define M 1000

int main()
{//不用用数组存char 直接打印*即可
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
