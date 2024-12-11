#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float b=-0.2,n=0.1,y1,y2,y3,y4,e1,e2,e3,e4,j,deltaW1,deltaW2,desiredvalue,w1=-1,w2=-1,x1=0,x2=1;
    int i=0;
   
       while(y4<1){
        y1= (w1*x1+w2*x1)+ b  ;
        if (y1<0){
            y1=0;}else{(y1=1);}
        e1= 0-y1;
        y2= (w1*x1+w2*x2)+ b  ;
        if (y2<0){
            y2=0;}else{(y2=1);}
        e2= 0-y2;
        y3= (w1*x2+w2*x1)+ b  ;
        if (y3<0){
            y3=0;}else{(y3=1);}
        e3= 0-y3;
        y4= (w1*x2+w2*x2)+ b  ;
        if (y4<0){
            y4=0;}else{(y4=1);}
        e4= 1-y4;        
        printf("y1=%f e1=%f  ", y1,e1);
        printf("y2=%f e2=%f  ", y2,e2);
        printf("y3=%f e3=%f  ", y3,e3);
        printf("y4=%f e4=%f  ", y4,e4);
        
        j = ((e1*e1)+(e2*e2)+(e3*e3)+(e4*e4))/4 ; 
        printf("Mean squared error= %f\n",j);
        deltaW1= n*(x2*1);
        deltaW2= n*(x2*1);
        printf("Need of adjustment = %f  %f \n",deltaW1,deltaW2);
        w1= w1+deltaW1;  w2= w2+deltaW2;
        printf("Updated weights = %f  %f \n",w1,w2);       
    }
    return 0;
}