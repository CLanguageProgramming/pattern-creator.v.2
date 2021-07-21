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
    }
    getchar();
   // getchar();
}
