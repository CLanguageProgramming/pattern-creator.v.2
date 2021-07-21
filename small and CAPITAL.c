  
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number >>");
    scanf("%d", &a);
    getchar();
    for (int i=1;i<=a;i++)
    {
       for(int j=1;j<=a;j++)
        {
            int k = i + 96;
            printf("%c ", k);
        }
        printf("\n");
      //  printf("i=%d\n", i);
        if(i == a)
        {
            break;
        }
        for(int k=1;k<=a;k++)
        {
            int l = i+65;
            printf("%c ", l);
        }
        printf("\n");
        i++;
        //printf("i=%d", i);
    }
    //getchar();
    getchar();
}
