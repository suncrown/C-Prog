    #include <stdio.h>
    #include <math.h> 
    
    void solve_eq(int,int,int,double *,double *);
 
    int main()
    {
       int a,b,c;
       a=1.0;b=4.0;c=-21.0;
       double r1,r2;
       int position; 
       solve_eq(a,b,c,&r1,&r2);
       printf("r1=%f  r2=%f\n", r1, r2);  
       return(0);
    }


    void solve_eq(int a,int b, int c, double *ptr_r1, double *ptr_r2)
    {
      *ptr_r1 = (-b - sqrt(b*b - 4.0*a*c) ) / (2.0 *a);
      *ptr_r2 = (-b + sqrt(b*b - 4.0*a*c) ) / (2.0 *a);    
  
    } 
     
