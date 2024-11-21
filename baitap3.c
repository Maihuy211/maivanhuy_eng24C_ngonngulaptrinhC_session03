#include <stdio.h>
int main ()
{
	float r,chuVi,dienTich;
	const float pi = 3.14;
	printf("nhap ban kinh r: ");
	scanf("%f",&r);
	chuVi= 2*pi*r;
	dienTich= pi*r*r;
	printf("chu vi hinh tron la: %.2f\n",chuVi);
	printf("dien tich hinh tron la: %.2f\n",dienTich);
	return 0;
	}
