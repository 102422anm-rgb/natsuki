#include <stdio.h>

int main()
{
    int k,s;
    printf("How many pencils?");
    scanf("%d",&k);
    
    if (k>=100)
    {
        printf("There are too many pencils!");
    }
    
     
    else if(k>=80 && k<100)
    {
        printf("There are many pencils");
    }
      
    else
    {
        printf("There are few pencils!");
    }

    return 0;
}