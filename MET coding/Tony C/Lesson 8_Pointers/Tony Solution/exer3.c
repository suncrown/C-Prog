    #include <stdio.h>
     
    int main()
    {
       char name[] = "Albert Einstein";
       char *ptr;
       int position; 
       position = 4;
       ptr = name;
    
       printf("Character %c  is at position %d  \n", *(name+position), position+1);  
       return(0);
    }
     
