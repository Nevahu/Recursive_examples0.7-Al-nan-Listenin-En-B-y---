#include <stdio.h>
#include <stdlib.h>

int e;
int listem[100];

int fun(int a[], int n)
{
    int x;
    if( n==1)
        return a[0]; /*base-case*/
    else
        x = fun(a, n-1);
    if(x> a[n-1])
        return x;
    else
        return a[n-1];
}



int main()
{


    printf("Listen Kac Elemanli Olsun? \n-> ");
    scanf("%d", &e);

    for(int i=0; i<e; i++)
    {
        printf("listenin elemanlarini gir: ");
        scanf("%d", &listem[i]);
    }

    printf(" %d ", fun(listem, e));
    return 0;
}


