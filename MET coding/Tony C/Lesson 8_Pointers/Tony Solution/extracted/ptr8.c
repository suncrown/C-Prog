#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define NUM 3
#define LEN 50
           
int main(void)
      {
       static char name[NUM][LEN];
       char *ptr[NUM];
       char *temp;
       int i,j,count = 0;
               
        while(count < NUM)
             {
               printf("NAME %d: ", count+1);
               gets(name[count]);
               if(strlen(name[count])==0) exit(1);
                      ptr[count] = name[count];
               count++;
             }
                                          
        for(j=0;j < count;j++)
            for(i=j+1;j< count;i++)
               if(strcmp(ptr[j],ptr[i]) > 0)
                 {
                   temp = ptr[i];
                   ptr[i] = ptr[j];
                   ptr[j] = temp;
                 }
                    
          printf("\n SORTED LIST:\n");
          for(j=0;j < count;j++)
              printf(" NAME %d: %s\n",j+1,ptr[j]);
          return(0);
       } 
