#include<stdio.h>
int main(int argc, char *argv[])
{
 int sayi=0,onceki=0;
 int asal=0;
 int counter=0;
 printf("sayi gir:");
 scanf("%d",&sayi);
 for(int i=2;i<=sayi;){
     counter++;
     if(sayi%i==0){
         asal=i;
         sayi/=i;
         if(onceki!= i){
             onceki=i;
             printf("asal=%d\n",i);
         }
         i=asal;
         continue;
     }else{
         i++;
     }
 }
 printf("counter=%d",counter);
}
