#include <stdio.h>
#include <stdlib.h>

int nod1(int a, int b)
{
    int c=a%b;
    while (c != 0)
        {
    a=b;
    b=c;
    c=a%b;
    }
    return b;
} //NOD1
int nod2(int a,int b)
{
    int c,v,u,d;
    c=1;
        while (a%2==0 && b%2==0) // ? (2)
    {
        a=a/2;
        b=b/2;
        c=2*c;
    if (a%2!=0||b%2!=0){
        break;
    }
    }
        u=a; // ? (3)
        v=b;

    while (u!=0){ // ? (4)
        while (u%2==0){u=u/2;}
        while (v%2==0){v=v/2;}
        if (u>=v) {
        u=u-v;
        }
        else (v=v-u);
        }
    d=c*v; // ? (5)
    return d;
} //NOD2
 int nod3(int a, int b)
{
    int p=1, q=0, r=0, s=1, x, y, d, j=a, i=b;
            while (a && b) {
        if (a>=b) {
            a = a - b;
            p = p - r;
            q = q - s;
        } else
        {
            b = b - a;
            r = r - p;
            s = s - q;
        }
    }
    if (a) {
        x = p;
        y = q;
    }else
    {
        x = r;
        y = s;
    }

    d=j*x+i*y;
    return d;
} //NOD3

void print_menu()
{
    system("cls");  // очищаем экран
    printf("Which Euclidean algorithm do you want to use?\n");
    printf("1. The First one\n");
    printf("2. Binary\n");
    printf("3. Advanced\n");
    printf("4. Exit\n");
    printf(">");
} //menu

int get_variant(int count)
{
    int variant;
    char s[100]; // строка для считывания введённых данных
    scanf("%s", s); // считываем строку

    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count)
    {
        printf("Incorrect input. Try again: "); // выводим сообщение об ошибке
        scanf("%s", s); // считываем строку повторно
    }

    return variant;
} //variant. Correction

int main()
{
    int a,b,variant;
    printf("b>0,a>b\n");
     printf("Enter a=");
     scanf("%d",&a);
     printf("Enter b=");
     scanf("%d",&b);
    printf("Enter number of algorithm\n");
    do{
        print_menu();
        variant = get_variant(4);
        switch (variant)
    {
        case 1:printf("NOD(a,b)=[%d]\n",nod1(a,b));
        break;

        case 2:printf("NOD(a,b)=[%d]\n",nod2(a,b));
        break;

        case 3:printf("NOD(a,b)=[%d]\n",nod3(a,b));
        break;

        default:printf("Program complete");
    }
        if (variant != 4)
            system("pause");
    } while (variant != 4);
    return 0;
}
