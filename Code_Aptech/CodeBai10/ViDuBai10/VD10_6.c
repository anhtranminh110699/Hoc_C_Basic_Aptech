#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

//Khai bao structure toan cuc
struct nhanvien
{
	int manv;
	char hoten[30];
};

//Khai bao prototype
void input(struct nhanvien [],int);
void output(struct nhanvien [],int);

void main()
{
	struct nhanvien snv[MAX];
	int n;
	char tam[10];
	printf("Nhap vao so nhan vien: ");
	gets(tam);
	n = atoi(tam);
	input(snv,n);
	printf("MSNV|     Ho va ten     \n\n");
	output(snv,n);	
}

void input(struct nhanvien snv[],int n)
{
	int i;
	char tam[10];
	for (i=0;i<n;i++)
	{
		printf("Nhap nhan vien thu %d: ",i+1);
		gets(tam);
		snv[i].manv=atoi(tam);
		printf("Nhap ho va ten: ");
		gets(snv[i].hoten);
	}
}

void output(struct nhanvien snv[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%4d|%19s\n",snv[i].manv,snv[i].hoten);
	}
}