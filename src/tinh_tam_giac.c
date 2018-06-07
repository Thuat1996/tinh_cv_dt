#include<stdio.h>
#include<math.h>
int Tinhtamgiac()
{
	float x[3], y[3];
	float a, b, c, p, s;
	printf ("\nNhap vao toa do diem A (x1, y1)= ");  scanf ("%f%f", &x[0], &y[0]);
	printf ("Nhap vao toa do diem B (x2, y2)= ");  scanf ("%f%f", &x[1], &y[1]);
	printf ("Nhap vao toa do diem C (x3, y3)= ");  scanf ("%f%f", &x[2], &y[2]);
	c = sqrt ((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));   // tinh do dai canh AB
	b = sqrt ((x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]));   // tinh do dai canh AC
	a = sqrt ((x[2] - x[1]) * (x[2] - x[1]) + (y[2] - y[1]) * (y[2] - y[1]));   // tinh do dai canh BC
	if ( a + b > c && a + c > b && b + c > a ) // kiem tra xem 3 dinh co tao thanh 1 tam giac khong 
	{
		printf ("\nChu vi cua tam giac la %f", a + b + c);
		// Tinh nua chu vi cua tam giac
		p = (a + b + c) / 2;
		// dien tich tam giac theo cong thuc he- rong 
		s = sqrt (p * (p - a) * (p - b) * (p - c));
		printf ("\nDien tich cua tam giac la %f", s);
	}
	else printf ("\nKhong phai la tam giac");
}