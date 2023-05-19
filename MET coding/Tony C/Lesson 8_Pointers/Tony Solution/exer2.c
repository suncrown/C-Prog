    #include <stdio.h>
     
    void midpoint(int*, int*,float *);
     
    int main()
    {
       int x, y;
       float z;
       printf("Enter 2 values min:max\n");
       scanf("%d:%d",&x,&y);
       midpoint(&x, &y, &z); 
       printf("The midpoint [%d,%d] is %f  \n", x, y, z);  
       return(0);
    }
     
    void midpoint(int *a, int *b, float *c)
    {
       *c =    (*b + *a)/2.0 ; 
    }
     
