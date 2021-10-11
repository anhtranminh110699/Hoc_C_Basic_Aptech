#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

void main()
{
	struct nhanvien
	{
		int manv;
		char hoten[30];
	};
	struct nhanvien snv[MAX];
	char tam[10];
	int i, n;
	printf("Nhap so nhan vien: ");
	gets(tam);
	n = atoi(tam);

	//Nhap danh sach nhan vien
	for(i=0;i<n;i++)
	{
		printf("Nhap ma nhan vien thu %d: ",i+1);
		gets(tam);
		snv[i].manv=atoi(tam);
		printf("Nhap vao ho ten nhan vien: ");
		gets(snv[i].hoten);
	}

	//In ra danh sach nhan vien
	for(i=0;i<n;i++)
	{
		printf("%5d | %s\n",snv[i].manv,snv[i].hoten);
	}
}