#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define  INTCHECK (floor(nategpoly[n])-nategpoly[n]==0.00)?
#define ONECHECK if(nategpoly[n] == 1.00){printf("X^%d", n);}
#define NEWLINE printf("\n");
int deg1;
int deg2;
int deg;
int s=0;
int maxdeg;
void divider (float nategpoly[],float pollycoef1[], float pollycoef2[], float productpoly[],int deg1,int deg2)
{
    for (int i = 0; i <= deg1 - deg2; i++) {
    if (deg1-i>= deg2) {
    nategpoly[deg1-deg2-i] = pollycoef1[deg1-i] / pollycoef2[deg2];
    int j;
    for (j=0; j <= deg2; j++) {
      productpoly[deg1-j-i] = nategpoly[deg1-deg2-i] * pollycoef2[deg2-j]; /// productpoly lazm tkml l awl
      pollycoef1[deg1-j-i] = pollycoef1[deg1-j-i] - productpoly[deg1-j-i];
    }j = 0;
  }
 }
 printf("\n ======================= \n\a ANSWER IS: ");
    int n =deg1-deg2;
   Answer(n,nategpoly); // qoutiont
   int i=0;
   if( pollycoef1[0]!=0) {
    i=deg2-1;
    printf("+(");
    Answer(i,pollycoef1);
    printf(")/");
    printf("(");
    Answer(deg2,pollycoef2);
    printf(")");
    return 0;}
}

void Answer(int n, float nategpoly[]) {  /// FOR BETTER LOOKING RESULT
  while (n > 1) {
    if (nategpoly[n] == 0.00) {
      continue;
    } else if(nategpoly[n] == 1.00){printf("X^%d", n); if (nategpoly[n - 1] > 0) {printf("+");}} else
      {INTCHECK printf("%dX^%d", (int) nategpoly[n], n): printf("%0.3fX^%d", nategpoly[n], n);
      (nategpoly[n - 1] > 0) ? printf("+"): NULL;
    }n--;
    }
 if (nategpoly[1] != 0.00) {
        if(nategpoly[1] == 1.00){printf("X");} else
    INTCHECK printf("%dX", (int) nategpoly[1]): printf("%0.3fX", nategpoly[1]);};

  (nategpoly[0] > 0 && nategpoly[1] != 0.00) ? printf("+"): NULL;
  if (nategpoly[0] != 0.00) {
    INTCHECK printf("%d", (int) nategpoly[0]): printf("%0.3f", nategpoly[0]);
  }
}

int main()
{
    printf("WELCOME TO THE LONG DVIDER\n\n");
    printf("ENTERING ANY INVALID CHARECHTER WILL TERMINATE THE PROGRAM\n");
    printf ("============================================\n\a");
    printf("ENTER YOUR FIRST POLYNOMIAL DEGREE: \a");
    scanf("%d",&deg1);
    printf("============================================\n\aENTER YOUR SECOND POLYNOMIAL DEGREE: \a");
    scanf("%d",&deg2);
    printf ("============================================\n\a");
                                  /////////////////// taking coefciants ///////////////////////////
         float pollycoef1[deg1];
         float pollycoef2[deg1];
         int i=0;
            strt:
            if (s==0) deg = deg1;
            else  deg = deg2;
            for (int i=deg; i>0; i--){     // position maps to degree
            printf("ENTER THE COEFICIENT OF X^%d OF POLY NO %d: ",i,s+1);
            if(s==0) {scanf("%f",&pollycoef1[i]);}
            else  {scanf("%f",&pollycoef2[i]);}
        }  printf("ENTER THE CONSTANT OF POLY NO %d: ",s+1);
           (s==0)? scanf("%f",&pollycoef1[0]):scanf("%f",&pollycoef2[0]);
           s++;
            if (s==1) {printf ("============================================\n\a"); goto strt;}

          if (deg1>=deg2){                              /////////manpulation//////////
          float nategpoly  [deg1+1]; ///yup bl3rby division
          float productpoly[deg1+1]; ///product
        divider(nategpoly,pollycoef1,pollycoef2,productpoly,deg1,deg2);}



         else{ /// 3shan law  qrr y3kshom
            printf("(");
            Answer(deg1,pollycoef1);
            printf(") /");
            Answer(deg2,pollycoef2);
            return 0;}



    }

