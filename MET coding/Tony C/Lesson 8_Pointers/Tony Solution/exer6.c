    #include <stdio.h>
    #include <math.h> 
    #define size 6 
 
    int main()
    {
       char* countries[] = {"Scotland","England","Ireland","Spain","Wales","France"}; 
       char* cities[]    = {"Glasgow","London","Dublin","Madrid","Cardiff","Paris"}; 
       char  guess[20];
       float score       = 0;
       int i=0;


       for(i=0;i<size;i++)
       { 
        printf("What is the Capital of %s\n",countries[i]);  
        gets(guess);
        if( strncmp(cities[i],guess,sizeof(cities[i])) == 0)
          {
          score++;
          } 
       }
     
       printf("Score=%f\n", (float) (score/size)*100 );   
    }
