#include<stdio.h>
 
 int main() {
 	int number,n,i=0;
    printf("Moi ban nhap so nguyen to : ");
    scanf("%d",&a);
     for(number=1;number >0;number++){
	   if((number%2!=0 && number%3!= 0 &&number %5 !=0 &&number%7 !=0) || number ==2)
	   printf("%d",number);
	   i +=1;
	   if(i==a){
	   	break;
	   	}
	 }
 }
