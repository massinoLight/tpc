#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double SquareRoot(double X) {
  double A,B,M,XN;
  if(X==0.0) {
     return 0.0;
  } else {
     M=1.0;
     XN=X;
     while(XN>=2.0) {
        XN=0.25*XN;
        M=2.0*M;
     }
     while(XN<0.5) {
        XN=4.0*XN;
        M=0.5*M;
     }
     A=XN;
     B=1.0-XN;
     do {
        A=A*(1.0+0.5*B);
        B=0.25*(3.0+B)*B*B;
     } while(B>=1.0E-15);
     return A*M;
  }
} 

int main()
{
     int A=0,B=0,C=0;
float x1=0,x2=0;
int delta=0;
    printf("Donnez le A\n");
    scanf("%d",&A);
   printf("Donnez le B\n");
    scanf("%d",&B);

  printf("Donnez le C\n");
    scanf("%d",&C);

  delta=B*B-4*A*C;
//printf("Delta= %d  \n",delta);
         if(delta==0){
                printf("Delta null  une seule solution\n");
                
                 x1=B/2*A;
                printf("la solution est donc %f\n",x1);
           }
           else
                {
                  if(delta>0){
                      printf("delta positif deux  solution\n");
                        x1=(B-SquareRoot(delta))/2*A;
                        x2=(B+SquareRoot(delta))/2*A;
                       printf("les solution sont %f \n",x1 );
                       printf("les solution sont %f \n",x2 );
                    }else{
                       printf("pas de solution dans R\n");
                        }
                       }


}

