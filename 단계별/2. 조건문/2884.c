#include <stdio.h>

int main()
{
    int H, M;

    scanf("%d %d", &H, &M);
    if (M - 45 < 0){
        if (H == 0) 
            H = 23;
        else 
            H--;
        M += 15;
    }
    else
        M -= 45;
    printf("%d %d", H, M);
    return 0;
}