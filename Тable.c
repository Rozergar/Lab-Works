
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float function1(float x)
    {
        float y=-sqrt(9-(x+6)*(x+6));
        return y;
    } // нижн€€ часть окружности

    float function2(float x)
    {
        float y=(x+3);
        return y;
    } // нижн€€ пр€ма€

    float function3(float x)
    {
        float y=-sqrt(9-(x+3)*(x+3));
        return y;
    } // верхн€€ часть окружности

    float function4(float x)
    {
        float y=(x-3);
        return y;
    } // 3-€ пр€ма€

    float function5(float x)
    {
        float y=(0.5*x+3);
        return y;
    } // 4-€ пр€ма€

    int main ()
    {
        float x, d;
        printf ("Enter x=");
        scanf ("%f",&x);
        printf ("Enter step=");
        scanf ("%f",&d);
        system ("cls");
         FILE*fp;
       fp=fopen("Result.txt","w+");
        fprintf (fp,"|     X     |     Y     |\n");
       for (float i=-9; i <=9; i+=d)
       {
         if (i <= -6)
         {
             fprintf(fp,"[%4.3f] | [%4.3f]\n",i,function1(i));
         }
         else
         {
            if (i <= -3)
         {
             fprintf(fp,"[%4.3f] | [%4.3f]\n",i,function2(i));
         }
            else
            {
             if (i <= 0)
         {
             fprintf(fp,"[%4.3f]  | [%4.3f]\n",i,function3(i));
         }
                else
                {
           if (i <= 3)
         {
             fprintf(fp,"[%4.3f]  | [%4.3f]\n",i,function4(i));
         }
                    else
                    {
             if (i <= 9)
         {
             fprintf(fp,"[%4.3f]  | [%4.3f]\n",i,function5(i));
         }
                    }
                }
            }
         }
       }
       fclose(fp);
    }
