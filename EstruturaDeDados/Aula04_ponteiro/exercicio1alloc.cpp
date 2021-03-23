#include<stdio.h>
#include<stdlib.h>
int main()
{   
double A,B,C,maior, menor, meio;   
scanf("%lf %lf %lf",&A, &B, &C);       
if(A>=B && A>=C){   
maior=A;               

}         
 else if(B>=C && B>=A){  
 maior=B;    
 }  else{                     
maior=C;                   
 }   
if(A<=B && A<=C){           
menor=A;          
 }
else if(B<=C && B<=A){                 
menor=B;               
 }     
else{         
menor=C;       
  }             
 if((A>=B && A<=C) ||(A<=B && A>=C))
{            meio=A;                                   
 }
else if((B>=C && B<=A) || (B<=C && B>=A))   {               
  meio=B;                                                     
 }
else{                    
 meio=C;                       
 }      
A=maior;                       
B=meio;                       
C=menor;                                                                                               
 if(A >= B+C){                            
printf("NAO FORMA TRIANGULO\n");                                    }                           
  else if( A*A==B*B+C*C ){                                                                    printf("TRIANGULO RETANGULO\n");                                                                                                      }                                 
else if(A*A > B*B+C*C){                                                                                  printf("TRIANGULO OBTUSANGULO\n");}                                       
  else if(A*A < B*B + C*C){                                               
printf("TRIANGULO ACUTANGULO\n");                                                }                                             
  if(A==B && B==C && A==C){                                                       
 printf("TRIANGULO EQUILATERO\n");}                                                                         else if(A==B ||A==C || B==C){                                                                                                                                                     
printf("TRIANGULO ISOSCELES\n") ;     }         
system("pause");   
return 0;    
}

