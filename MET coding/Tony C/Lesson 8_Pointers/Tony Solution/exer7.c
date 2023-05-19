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
       char choice[1];

       printf(" Do you wish to answer Cities: 1 or Countries 2 ?");
       gets(choice);

       if( choice ==1 )
        {
          for(i=0;i<size;i++)
             { 
             printf("What is the Capital of %s\n",countries[i]);  
             gets(guess);
             if( strncmp(cities[i],guess,sizeof(cities[i])) == 0)
               {
               score++;
               } 
             }
        }
       else
        {
          for(i=0;i<size;i++)
             {
             printf("What Country has Capital city %s\n",cities[i]);
             gets(guess);
             if( strcmp(countries[i],guess,sizeof(countries)) == 0)
               {
               score++;
               } 
             }
         }

       printf("Score=%f\n", (float) (score/size)*100 );   
    }
