#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*------------------------------*/

char getRoot(double a,double b,double c,double *pRoot)
{
    char isComplex = '\0';
    double d = b*b - 4.0*a*c;
    double root;
    
    if(d < 0.0)
    {
        isComplex = '1'; 
        root = sqrt(-d)/(2.0 * a);  
    }
    else
    {
        if(-b < 0.0)
        {
            root = (-b - sqrt(d))/(2.0 * a);            
        }
        else
        {
            root = (-b + sqrt(d))/(2.0 * a);
        }        
        
    }
    *pRoot = root;
    return isComplex;
}


/*------------------------------*/

void doWork(int argc,char *argv[])
{
    const double eps = 1.0e-6;
    double a,b,c;
    double r,s;
    
    char isComplex = '\0';
    
    a = atof(argv[1]);
    if(fabs(a) < eps)
    {
        printf("As a being small, equation is not quadratic.\n");
        return;
    }
    
    b = atof(argv[2]);
    c = atof(argv[3]);
     if(fabs(b) < eps && fabs(c) < eps)
    {
        printf("b and c are too small to process.\n");
        return;
    }
    
    isComplex = getRoot(a, b, c, &r);
    
    if('\0' == isComplex)
    {
        /*Handle real root*/
        
        s = -c/r;
        
        /*Print Factors*/
        
        printf("(x %c %.2lf)", (r < 0.0)?'+':'-', fabs(r));
        printf("(%.2lf x %c %.2lf)\n\n", a, (s > 0.0)?'+':'-', fabs(s));
    }
    else
    {
        /*Handle complex root*/
        double u,v;
        double y, z;
        
        u = -b / (2.0 * a);
        v = r;
        
        printf("(x - (%.2lf %c i%.2lf ))", u,(v < 0.0)?'-':'+', fabs(v));
        y = -c * u/(u*u + v*v);
        z = -c * v/(u*u + v*v);
        printf("(%.2lfx + (%.2lf %c i%.2lf ))\n\n", a,y,(z< 0.0)?'-':'+', fabs(z));
        
    }
    
    
}

/*------------------------------*/


int main(int argc,char *argv[])
{
    if(argc != 4)
    {
        printf("Please enter 3 coefficients of quadric equation ");
        return 0;
    }
    
    doWork(argc,argv);
    
    return 0;
}

