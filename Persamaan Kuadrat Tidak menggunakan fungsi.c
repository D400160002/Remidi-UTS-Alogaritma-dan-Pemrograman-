// Program Akar - Akar Persamaan Kuadrat
// NOMOR 1
//NAMA  : Syaefudhin
//NIM   : D400160002
//KELAS : A

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x,x1,x2;

printf(" ###  Akar - Akar Persamaan Kuadrat  ### \n\n");
printf(" Nilai a =  ");
scanf("%f",&a);
     if (a==0)
        printf("\n  X1,2 Bukan persamaan Kuadrat \n\n");
        else{
            printf(" Nilai b =  ");
            scanf("%f",&b);
            printf(" Nilai c =  ");
            scanf("%f",&c);
         }
     D = (b*b) - (4*a*c);
     if (D<0)
        printf("\n X 1,2 Bilangan  Imajiner \n\n");
     else if (D==0){
        x = -b/2*a;
        printf(" \n Memiliki Satu Penyelesaian X1,2  = %.2f \n\n",x);
     } else  {
     x1= (-b+sqrt(D)/2*a)/2*a;
     x1= (-b-sqrt(D)/2*a)/2*a;
       printf(" X1 = %.2f \n\n",x1);
       printf(" X2 = %.2f \n\n",x2);
     }
}
