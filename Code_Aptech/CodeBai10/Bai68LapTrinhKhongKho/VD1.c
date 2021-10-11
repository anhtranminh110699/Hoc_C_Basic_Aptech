#include <stdio.h>
#include <stdbool.h>
#include <curses.h>

struct SinhVien
{
	int maSV;
	char ho[20];
	char ten[20];
	bool gioiTinh;
	char queQuan[100];
};

void main()
{
	//Khai bao 2 bien sv1 va sv2 co kieu sinh vien
	//SinhVien sv1,sv2;

	//Ta nen them tu khao struct o dau
	//de phan biet duoc bien nay la bien cua kieu du lieu tu dinh nghia
	struct SinhVien sv3,sv4;
	printf("Nhap thong tin sinh vien: \n");
	printf("MSSV: ");
	scanf("%d",&sv3.maSV);
	printf("MSSV la: %d\n",sv3.maSV);
	printf("Ho: ");
	scanf(" %s",sv3.ho);
	gets();
	printf("Ten: ");
	gets(sv3.ten);
	printf("Ho va ten la: %s %s\n",sv3.ho,sv3.ten);

	//Khai bao mang
	//struct SinhVien sv[100];
}