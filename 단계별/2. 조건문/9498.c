#include <stdio.h>

int main()
{
    int x;
    
    scanf("%d", &x);
    if(90 <= x)
        printf("A\n");
    else if(80 <= x)
        printf("B\n");
    else if(70 <= x)
        printf("C\n");
    else if(60 <= x)
        printf("D\n");
    else
        printf("F");
    return 0;
}