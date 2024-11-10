#include <stdio.h>

int main(){
    /* X & Y are just variables
    A=final amount including
    P=principal amount
    R=interest rate
    N=number of compounding years
    T=total number of years
    
    A=P(1+ r/n)^n*t
    */
    int z;
    float A,P,R,N,T,X,Y;
    
    printf("Enter principal amount\n enter interest rate\n enter number of compounding years\n enter number of years\n");
    scanf("%f%f%f%f",&P,&R,&N,&T);
    
    printf("principal amount=%f\n interest rate=%f\n number of corresponding years=%f\n total number of years=%f\n",P,R,N,T);
    X=N*T;
    
    Y=(1+R/N)*P;
    A=(Y,X);
    
    printf("final amount is:%1.2f",A);
    

    


    return 0;
}
