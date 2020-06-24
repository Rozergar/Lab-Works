#include <stdio.h>
#include <stdlib.h>
#define N 101

int main(int argc, char* argv[])
{
    int massive [N] = {0};
        for (int i = 2; i*i <= N; ++i)
        {
            if (massive[i] == 0)
            {

                for (int k = i*i; k < N; k += i)
            {
                massive[k] = 1;
            }
        }
        }
        FILE*fp;
       fp=fopen("Result.txt","w+");
    for(int i = 0; i < N; ++i)
    {
        fprintf(fp,"%4d", i);
    }
    fprintf(fp,"\n");

    fprintf(fp,"Prime numbers:\n");
    for(int i = 0; i < N; ++i)
    {
        if (massive[i] == 0)
        {
            fprintf(fp,"%4d", i);
        }
    }
    fclose(fp);

    printf("See the Result.txt in the same catalog");
    printf("\n");
    return 0;
}
