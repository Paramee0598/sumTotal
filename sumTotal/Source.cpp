#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long int i=0, s=0, x ;
    printf("Enter number : ");
    scanf("%d", &x);
    
    while (x==0)
    {
        printf("%d", x);
        return 0;
    }
    while (x < 0)
    {
        printf("Error");
        return 0;
    }
    while (x > 0) {

        while (x > 0)
        {
            s += x % 10;
            x = x / 10;
          
        }
        while (s>0) 
          {
            i += s % 10;
            s = s / 10;

          }
        
    }
    printf("%d", i);
    return 0;
}
