# include <stdio.h>
int main (){
	int number,a,b,c,d,total;
	printf("nhap 1 so co 4 chu so: ");
	scanf("%d",&number);
	if(999<number&&number<10000){
		a=number/1000;
	    b=(number/100)%10;
	    c=(number/10)%10;
		d=number%10;
		total= a+b+c+d;
		printf("tong cac chu so la : %d",total);
		}
	else{
		printf("ko hop le");
	}
		return 0;
		}
