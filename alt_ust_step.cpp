#include<stdio.h>
int main(){

	//alt ve �st deger arasi adim adim artirma

int alt;
int ust;
int step;
int i;
int sum=0;
printf("3 deger giriniz:\n");
scanf("%d %d %d", &alt, &ust, &step);
do{
	sum=sum+step+alt;
    printf("%d",sum);
	
}
while(sum!=ust);
   
	
	
}

