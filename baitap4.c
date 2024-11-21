# include <stdio.h>
int main ()
{
	float diem_toan, diem_anh, diem_van, tong_diem, diemTb;
    printf("nhap diem toan: ");
	    scanf("%f",&diem_toan);
	printf("nhap diem van: ");
	    scanf("%f",&diem_van);
    printf("nhap diem anh: ");
	    scanf("%f",&diem_anh);
	    
	tong_diem=diem_toan+diem_van+diem_anh;
	diemTb=tong_diem/3;
	
	printf("tong diem cua 3 mon la: %.2f\n",tong_diem);
	printf("diem trung binh cua 3 mon la: %.2f\n",diemTb);
	return 0;
	}
	
