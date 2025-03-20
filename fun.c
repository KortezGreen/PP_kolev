#include <stdio.h>
#include <stdlib.h>

int bez(int n)
{
    if (n < 0)
	{
        return -n;
    }
return n;
}

int silnia(int n)
{
int wynik2 = 1;
	if (n<0)
	{
		return "Liczba jest mniejszqa od zera!";
	}
	else
	{
		while (n>0)
		{
			wynik2*=n;
			n--;
		}

	}
	return wynik2;
}



int main()
{

//zad 1
//int n;
//printf("Podaj n: ");
//scanf("%d", &n);
//printf("%d\n",bez(n));

//zad 2
//int n;
//printf("Podaj n: ");
//scanf("%d", &n);
//printf("%d\n",silnia(n));

//zad 3




return 0;
}
