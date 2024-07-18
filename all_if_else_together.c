#include<stdio.h>
 int main()
 {
    char f;
    printf("enter the variable=");
    scanf("%c",&f);
    
    if ((f<='z' && f>='a') || (f<='Z' && f>='A'))
    {
        printf("%c is alphabate , ",f);
     }

     else if ((f=='a' || f=='e' || f=='i' || f=='o' || f=='u') || (f=='A' || f=='E' || f=='I' || f=='O' || f=='U'))
     {printf("vowel and ");}
     
     
    
    
else
{printf("special char");}

    return 0;
 }