#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

struct monthi
{
	int toan;
	int ly;
	int hoa;
};

struct sinhnhat
{
	int ngay;
	int thang;
	int nam;
};

struct sinhvien
{
	char name[50];
	struct sinhnhat date;
	int sbd;
	struct monthi diem;
};

void input(struct sinhvien [],int);
void output(struct sinhvien [],int);

void main()
{
	int n;
	struct sinhvien sv[MAX];
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	gets();

	input(sv,n);
	output(sv,n);
}

// Ham nhap thi sinh.
void input(struct sinhvien sv[MAX], int n)
{
	int i;
	char tam[10];
	for (i=0;i<n;i++)
	{
		printf("Nhap ten sinh vien: ");
		gets(sv[i].name);
		
		printf("Nhap ngay sinh nhat: ");
		scanf("%d/%d/%d",&sv[i].date.ngay,&sv[i].date.thang,&sv[i].date.nam);
		gets();

		printf("Nhap sbd: ");
		gets(tam);
		sv[i].sbd = atoi(tam);
		
		printf("Nhap diem cac mon: \n");
		printf("Toan: ");
		scanf("%d",&sv[i].diem.toan);
		printf("Ly: ");
		scanf("%d",&sv[i].diem.ly);
		printf("Hoa: ");
		scanf("%d",&sv[i].diem.hoa);
		gets(); //tranh luu ki tu enter.
	}
}

// Ham in ra thi sinh co tong diem >=15.
void output(struct sinhvien sv[MAX], int n)
{
	int i;
	char tam[10];
	printf("Danh sach sinh vien co tong diem >=15:\n");
	printf("     Ho va ten     | Ngay sinh|  SBD  |Toan|Ly|Hoa|Tong diem\n\n");
	for (i=0;i<n;i++)
	{
		if((sv[i].diem.toan+sv[i].diem.ly+sv[i].diem.hoa)>=15)
		{
			printf("%19s|%02d/%02d/%4d|%7d|%4d|%2d|%3d|%4d\n",sv[i].name,sv[i].date.ngay,sv[i].date.thang,sv[i].date.nam,sv[i].sbd,sv[i].diem.toan,sv[i].diem.ly,sv[i].diem.hoa,sv[i].diem.toan+sv[i].diem.ly+sv[i].diem.hoa);
		}
	}
}