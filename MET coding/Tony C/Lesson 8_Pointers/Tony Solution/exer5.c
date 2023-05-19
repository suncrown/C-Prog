    #include <stdio.h>
    #include <math.h> 
    
    const char* solve_eq(int,int,int,double *,double *);
 
    int main()
    {
       int a,b,c;
       a=1.0;b=4.0;c=-21.0;
       double r1,r2;
       const char* response = solve_eq(a,b,c,&r1,&r2);
       printf("response =%s    r1=%f  r2=%f\n", response,  r1, r2);  
       return(0);
    }


    const char* solve_eq(int a,int b, int c, double *ptr_r1, double *ptr_r2)
    {
      *ptr_r1 = (-b - sqrt(b*b - 4.0*a*c) ) / (2.0 *a);
      *ptr_r2 = (-b + sqrt(b*b - 4.0*a*c) ) / (2.0 *a);    
       
      if( (b*b - 4.0*a*c ) < 0 )
        return("complex solutions");
      else if ( (b*b - 4.0*a*c) > 0 )
        return("2 real solutions");
      else return("return a single solution");
    } 
     
