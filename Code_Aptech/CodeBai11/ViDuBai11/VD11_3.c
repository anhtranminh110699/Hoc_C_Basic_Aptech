#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	FILE *f;
	struct sinhvien
	{
		int masv;
		char ten[50];
	};
	struct sinhvien sv[50], sv1[50];
	char tam[10];
	int i,n;
	printf("Nhap vao so sinh vien: ");
	gets(tam);
	n = atoi(tam);

	//Nhap danh sach sinh vien va ghi vao file
	if((f = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/VD3.dat","wb"))==NULL)
	{
		printf("Khong the mo file!\n");
		exit(0);
	}
	fwrite(&n,sizeof(int),1,f); //ghi so nhan vien

	for(i=0;i<n;i++)
	{
		printf("Nhap vao ma sinh vien thu %d: ",i+1);
		gets(tam);
		sv[i].masv=atoi(tam);
		printf("Nhap vao ten: ");
		gets(sv[i].ten);
		fwrite(&sv[i],sizeof(struct sinhvien),1,f); //ghi tung nhan vien
	}
	fclose(f);

	//doc danh sach nhan vien tu file va in ra
	f = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/VD3.dat", "rb");
	fread(&n, sizeof(int), 1, f); //doc so nhan vien

	for(i = 0; i < n; i++)
	{
		fread(&sv[i], sizeof(struct sinhvien), 1, f); //doc tung nhan vien in ra man hinh
		printf("%5d %s\n", sv[i].masv, sv[i].ten);
	}
}