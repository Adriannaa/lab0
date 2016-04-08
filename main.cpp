#include <stdio.h>
#include <stdlib.h>

void fibonacci (int n);
void geometryczny (int n);

int main (int argc, char *argv[])
{
	int n = atoi(argv[1]);
 if (*argv[2]=='f')
 	void fibonacci(int n);

 if (*argv[2]=='g')
 	void geometryczny(int n);
}

void fibonacci (int n)
{
int *fib = new int [n];
fib [0]=1;
fib [1]=1;
printf ("Pierwsze %i wyrazow ciagu Fibonacciego to: \n %c \n %c\n", n, fib[0], fib[1]);
	for (int i=2; i<n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		printf ("%c /n", fib[i]);
	}
	
	delete [] fib;
}

void geometryczny (int n)
{
int *geom = new int [n];
int q=6;
geom [0]=1 ;
printf ("Pierwsze %i wyrazow ciagu geometrycznego to: \n %c \n", n, geom[0]);
	for (int i=1; i<n; i++)
	{
		geom[i]=geom[i-1]*q;
		printf ("%c /n", geom[i]);
	}

	delete [] geom;
}