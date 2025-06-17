#include <stdio.h>

int main()
{

    int nfi, fi, fidosfi = 0;

    scanf("%d", &nfi);

    if (nfi > 0 && nfi <= 1000)
    {
        for (int i = 0; i < nfi; i++)
        {
            scanf("%d", &fi);
            if (fi >= 0 && fi <= 1000)
            {
                fidosfi += fi;
            }
        }
    }

    printf("%d\n", fidosfi);

    return 0;
}