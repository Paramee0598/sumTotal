#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i=0, s=0, x ;
    printf("Enter nuber : ");
    scanf("%d", &x);
    
    while (x==0)
    {
        printf("%d", x);

    }
    while (x > 0) {

        for (;x>0;) 
        {
            s += x % 10;
            x = x / 10;
          
        }
        for (i=0;s>0;) 
          {
            i += s % 10;
            s = s / 10;

          }
        
    }
    printf("%d", i);
    return 0;
}