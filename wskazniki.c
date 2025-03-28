#include <stdio.h>
#include <stdlib.h>

int main()
{
//zad 3.2.1
//int a = 1;
//int b = 2;
//printf("Odpowiedz to: %d", zwrot(a,b));

//zad 3.2.2

int a = 1;
int b = 2;
printf("Odpowiedz to: %d", zwrot2(a,b));


return 0;
}

int zwrot2(int *a,int *b)
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
