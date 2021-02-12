#include<stdio.h>
int main()

// the code is wrong i know but i didnot know how to make it exactly as it have to be
{  
      int i=0;
      int j=1;
      for(i=0; i<6;)

       {  

         printf("%d", i);

        for(j=i+1; j<6; )

         {
               printf("%d", j);

               j = j + 1;

     }
           printf("\n");

            i = i + 1;
       }

      return 0;

}
