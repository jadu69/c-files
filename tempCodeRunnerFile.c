#include <stdio.h> 

int main()
{int a = 0;
int b = 1,c=2,x=0 ;

   x=a++ || b++ || c++;

printf("%d ,%d ,%d ,%d",x,a,b,c);  

    return 0;
}