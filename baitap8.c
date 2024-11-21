# include <stdio.h>
int main (){
	int number,a,b,c,d,reverse;
	printf("nhap 1 so co 4 chu so: ");
	scanf("%d",&number);
	if(999<number&&number<10000){
		a=number/1000;
	    b=(number/100)%10;
	    c=(number/10)%10;
		d=number%10;
		reverse=d*1000+c*100+b*10+a;
		printf("so dao nguoc la: %d",reverse);
		}
	else{
		printf("ko hop le");
	}
		return 0;
		}
