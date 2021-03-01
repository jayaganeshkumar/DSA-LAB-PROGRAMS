#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,a,num[20],count=0;
   printf("enter elements in the array");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter elements");
       scanf("%d",&num[i]);

   }

        printf(" \n enter number to be searched for");
            scanf("%d",&a);
    for(i=0;i<n;i++)
   {if (num[i]==a)
   {    count++;
       printf("\nfound at %d",i+1);

   }
   }
   if(i==n&&count==0)

       printf("\nnumber not found");

   printf("\ncount=%d",count);

    return 0;
}
