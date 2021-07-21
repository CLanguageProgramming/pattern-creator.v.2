#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number of rows >>");
    scanf("%d", &a);
    getchar();
    printf("In Capitals >>\n");
    for (int i=1;i<=a;i++)
    {
       for(int j=1;j<=a;j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
    printf("\n");
    printf("In small >>\n");
    for (int i=1;i<=a;i++)
    {
       for(int j=1;j<=a;j++)
        {
            printf("%c ", j+96);
        }
        printf("\n");
    }
    getchar();
   // getchar();
}
