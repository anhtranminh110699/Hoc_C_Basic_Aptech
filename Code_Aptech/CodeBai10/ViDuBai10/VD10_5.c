#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 50

void main()
{
	struct giacanh
	{
		char vo_chong[30];
		int con;
	};
	struct nhanvien
	{
		int manv;
		char hoten[30];
		struct giacanh canhan;
	};

	struct nhanvien snv[MAX];
	printf("Nhap so nhan vien: ");
	int i,n;
	char tam[10];
	gets(tam);
	n = atoi(tam);

	//Nhap thong tin nhan vien
	for(i=0;i<n;i++)
	{
		printf("Nhap ma nhan vien thu %d: ",i+1);
		gets(tam);
		snv[i].manv = atoi(tam);
		printf("Nhap ten nhan vien: ");
		gets(snv[i].hoten);
		printf("Cho biet ten vo/chong: ");
		gets(snv[i].canhan.vo_chong);
		printf("Cho biet so con: ");
		//gets(snv[i].canhan.con);
		gets(tam);
		snv[i].canhan.con=atoi(tam);
	}

	//In ra thong tin nhan vien
	printf("MSNV|        Ho ten        |     Vo/chong     |So con\n\n");
	for(i=0;i<n;i++)
	{
		printf("%4d|%22s|%18s|%6d\n",snv[i].manv,snv[i].hoten,snv[i].canhan.vo_chong,snv[i].canhan.con);
	}
}