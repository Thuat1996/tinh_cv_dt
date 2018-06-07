#include<stdio.h>
int Chon()
{
	int n;
	printf ("BAN MUON TINH GI\nNHAP 0 DE TINH HINH CHU NHAT\nNHAP 1 DE TINH TAM GIAC\nNHAP 2 DE THOAT CHUONG TRINH ");
	while (1)
	{
		printf ("\nNhap vao n = ");  scanf("%d", &n);
	if (n == 0) 
	{
		printf ("Tinh chu vi dien tich hinh chu nhat");
		Tinhhcn();
	}
	else if (n == 1)
	{
		printf ("Tinh chu vi dien tich hinh tam giac");
		Tinhtamgiac();
	}
	else 
	{
		printf ("\nPROGRAM WILL EXIT");
		break;
		}
	}
}