#include <stdio.h>
#include <stdlib.h>

int main()
{
int A;
int B;
int SOMMA;
int S_ASSOLUTA;
int m;
printf("inserisci due numeri:");
scanf("%d",&A);
scanf("%d",&B);
SOMMA=A+B;
if (A%2==0)
{
printf("il numero %d e' pari,",A);
}
else
{
printf("il numero %d e' dispari,",A);
}
if (A>B)
{
 if (B>=0)
{
 printf(" %d e' positivo,",B);
 S_ASSOLUTA=SOMMA;
}
 else
{
printf(" %d e' negativo,",B);  ///� SBAGLIATO
}
if (A>=0)
{
m=B*(-1);
S_ASSOLUTA=A+m;
}
else
{
S_ASSOLUTA=S_ASSOLUTA*(-1);
}
}
else
{
 if (A>=0)
{
 printf(" %d e' positivo,",B);
 S_ASSOLUTA=SOMMA;
}
 else
{

}
if (B>=0)
{
 printf(" %d e' positivo,",B);
m=A*(-1);
S_ASSOLUTA=m+B;
}
else
{
printf(" %d e' negativo,",B);
S_ASSOLUTA=S_ASSOLUTA*(-1);
}
}
printf(" mentre la somma e' %d e il valore assoluto maggiore e' %d",SOMMA,S_ASSOLUTA);
return 0;

}
//maow


