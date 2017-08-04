#include <stdio.h>
#include <ctype.h>
char atual=0,anterior=0,anterior2=0;
int contador=1;
int alfanumerico=0;
int main ()
{
    for(;;)
    {
        anterior2=anterior;
        anterior=atual;
        scanf("%c",&atual);
        if (isalnum(atual))
        {
            alfanumerico=1;
        }
        if((isalnum(atual))&&((ispunct(anterior))||isspace(anterior))) // atual=letra ou numero e (and) anterior=espaço ou pontução
        {
            contador++;
            if(ispunct(anterior)&&isdigit(anterior2)&&isdigit(atual))
                contador--;
        }
        if(atual=='\n')
            goto fim;
    }
fim:
    if(!alfanumerico)
    {
        contador=0;
    }
    printf("%d\n",contador);
    return 0;
}
