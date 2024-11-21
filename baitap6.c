# include <stdio.h>
int main ()
{
	float canh, chieuCao, dienTich;
	printf("do dai canh la: ");
	scanf("%f",&canh);
	printf("do dai chieu cao la: ");
	scanf("%f",&chieuCao);
	
	dienTich= (canh*chieuCao)/2;
	
	printf("dien tich hinh tam giac la: %.2f",dienTich);
	return 0;
	}
