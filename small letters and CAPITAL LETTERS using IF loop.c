#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number >>");
    scanf("%d", &a);
    getchar();
    int k;
    for (int i=1;i<=a;i++)
    {
       for(int j=1;j<=a;j++)
        {
            if(i%2 !=0)
            {
                k = i+96;
                printf("%c ", k);
            }
            else
            {
                k = i+64;
                printf("%c ", k);
            }
        }
        printf("\n");
    }
    getchar();
}
