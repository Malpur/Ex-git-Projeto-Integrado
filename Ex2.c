#include <stdio.h>

int main()
{
    int y, ano;

    scanf("%d", &y);
    if (y >= 2010 && y <= 2020)
    {
        ano = 2025 - 2 * (2025 - y);
        printf("%d\n", ano);
    }
    return 0;
}
