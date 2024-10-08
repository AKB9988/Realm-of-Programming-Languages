//Converting Decimal to Binary using bitwise operator
#include <stdio.h>
#include <math.h>
int main()
{
    int a, c=0;
    printf("Enter an integer ");
    scanf("%d",&a);
   int l=sizeof(a);
   
     long i=pow(2,(l*8));
    
    while(i>0)
    {
        for(long j=0;j<l*8;j++)
        {
            
            if((a&i)==(int)pow(2,j))
            {
                c++;
                break;
            }
        }
        if(c>0)
        printf("1");
        else
        printf("0");
        i=i>>1;
        c=0;
    }
    return 0;
}