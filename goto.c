#include <stdio.h>
 int main()
 {  
    int s;

    for (int i = 0; i < 4; i++)
    {
        printf("no.%d",i);
        for (int j = 0; j < 4; i++)
        {
            printf("if you want to exit type 0");
            scanf("%d",&s);
            if(s==0)
            {
                goto khatam;
            }
        }
        
    }
    khatam:
     return 0;
    
 }