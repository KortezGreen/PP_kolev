#include <stdio.h>
#include <stdlib.h>

int main()
{
//zad 3.2.1
//int a = 1, b = 2;
//printf("Odpowiedz to: %d", zwrot(a,b));

//zad 3.2.2
//int a = 1, b = 2;
//printf("Odpowiedz to: %d", zwrot2(&a,&b));

//zad 3.2.3
//int a = 1, b = 2;
//printf("Przed zamiana: x = %d, y = %d\n", a, b);
//zwrot3(&a, &b);
//printf("Po zamianie: x = %d, y = %d\n", a, b);


return 0;
}

int zwrot3(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int zwrot2(int *a,int *b)
{
if(*a < *b)
{
return *a;
}
else
{
return *b;
}
}

int zwrot(int *a,int *b)
{
if(a < b)
{
return a;
}
else
{
return b;
}
}
