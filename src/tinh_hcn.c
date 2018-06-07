#include<stdio.h>
#include<math.h>
int Tinhhcn()
{
	float x[4], y[4];
	float AB, BC, CD, DA;
	float a, b, c;
	printf ("\nNhap vao toa do diem A (x1, y1)= ");  scanf ("%f%f", &x[0], &y[0]);
	printf ("Nhap vao toa do diem B (x2, y2)= ");  scanf ("%f%f", &x[1], &y[1]);
	printf ("Nhap vao toa do diem C (x3, y3)= ");  scanf ("%f%f", &x[2], &y[2]);
	printf ("Nhap vao toa do diem D (x4, y4)= ");  scanf ("%f%f", &x[3], &y[3]);
	// Tinh cac canh cua hcn
	AB = sqrt ((x[1]-x[0]) * (x[1]-x[0]) + (y[1]-y[0]) * (y[1]-y[0]));
	BC = sqrt ((x[2]-x[1]) * (x[2]-x[1]) + (y[2]-y[1]) * (y[2]-y[1]));
	CD = sqrt ((x[3]-x[2]) * (x[3]-x[2]) + (y[3]-y[2]) * (y[3]-y[2]));
	DA = sqrt ((x[3]-x[0]) * (x[3]-x[0]) + (y[3]-y[0]) * (y[3]-y[0]));
	// tinh do dai tich vo huong cua 2 vecto
	a = (x[3] - x[0]) * (x[2] - x[3]) + (y[3] - y[0]) * (y[2] - y[3]); // tinh tich vo huong cua 2 vec to AD va DC => vuong tai D
	b = (x[2] - x[1]) * (x[3] - x[2]) + (y[2] - y[1]) * (y[3] - y[2]); // tinh tich vo huong cua 2 vec to BC va CD => vuong tai C
	c = (x[1] - x[0]) * (x[2] - x[1]) + (y[1] - y[0]) * (y[2] - y[1]); // tinh tich vo huong cua 2 vec to AB va BC => vuong tai B
	//kiem tra dieu kien tu giac co 3 goc vuong la hinh chu nhat
	if (a == 0 && b == 0 && c == 0)
	{
		printf ("\nChu vi hinh chu nhat la %f ", (AB + DA) * 2);
		printf ("\nDien tich hinh chu nhat la %f ", (AB * DA));
	}
	else printf ("\nKhong phai la hinh chu nhat");
}