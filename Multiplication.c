#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void Multiplication (int fm, int p, int sn, int i, int j, int k, int *A[i], int *B[k])
{
    int C[i][j];
    for(i = 0; i < fm; i++)
    {
        for(j = 0; j < sn; j++)
        {
        C[i][j]=0;
        for(k = 0; k < p; k++)
            {
            C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(i = 0; i < fm; i++)
    {
        for(j = 0; j < sn; j++)
        {
            printf ("%d\t", C[i][j]);
        }
        printf ("\n");
    }
}

int main ()
{
    srand(time(NULL));
    int fm,fn,sm,sn;
    int i, j;
    int k;
    printf ("The first one\n");
    printf ("Enter line=");
    scanf ("%d", &fm);
    printf ("Enter column=");
    scanf ("%d", &fn);
    printf ("\nThe second one\n");
    printf ("Enter line=");
    scanf ("%d", &sm);
    printf ("Enter column=");
    scanf ("%d", &sn);
        if (fn != sm)
        {
            printf ("Impossibly to multiply. Try another numbers");
            return 1;
        }
    int p;
    p=fn;
    int A[fm][fn], B[sm][sn];
    system ("cls");

for (i = 0; i < fm; i++)
    for (j = 0; j < fn; j++)
    {
        A[i][j] = rand() % 10+1;
    }

for (i = 0; i < sm; i++)
    for (j = 0; j < sn; j++)
    {
        B[i][j] = rand() % 10+1;
    }

printf("matrix A\n");
for (i = 0; i < fm; i++)
{
    for (j = 0; j < fn; j++)
        {printf("%d\t", A[i][j]);}
    printf("\n");
}

printf("\nmatrix B\n");
for (i = 0; i < sm; i++)
{
    for (j = 0; j < sn; j++)
        printf("%d\t", B[i][j]);
    printf("\n");
}

int *A1[fm], *B1[sm];
    for(int i = 0; i<fm; i++)
        {A1[i] = A[i];}
    for(int i = 0; i<fm; i++)
        {B1[i] = B[i];}

    printf("\n");
    Multiplication(fm, p, sn, i, j, k, A1, B1);
}
