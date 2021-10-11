// 10 can (dem tu 0): Canh, Tan, Nham, Quy, Giap, At , Binh, Dinh, Mau, Ky.
// 12 chi (dem tu 0): than, dau, tuat, hoi, ti, suu, dan, mao, thin, ti, ngo, mui.


#include <stdio.h>
#include <curses.h>

#define MAX 20

void amlich(int,char[][MAX],char[][MAX]);

void main()
{
	char a[10][MAX] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
	char b[12][MAX] = {"than", "dau", "tuat", "hoi", "ty", "suu", "dan", "mao", "thin", "ti", "ngo", "mui"};
	int n;
	printf("Nhap nam lich duong: ");
	scanf("%d",&n);
	amlich(n,a,b);
}

void amlich(int year, char a[][MAX], char b[][MAX])
{
	printf("Nam %d la nam: \n",year);
	int i,j,ky1i,ky1j,ky2i,ky2j,hop1i,hop1j,hop2i,hop2j;
	i = year%10;
	j = year%12;
	printf("%s ",a[i]);
	printf("%s",b[j]);
	printf("\n");
	ky1i = (year-3)%10;
	ky1j = (year-3)%12;
	ky2i = (year+3)%10;
	ky2j = (year+3)%12;
	printf("Nam ky nhau %s %s va %s %s \n",a[ky1i],b[ky1j],a[ky2i],b[ky2j]);
	hop1i = (year-4)%10;
	hop1j = (year-4)%12;
	hop2i = (year+4)%10;
	hop2j = (year+4)%12;
	printf("Nam ky nhau %s %s va %s %s \n",a[hop1i],b[hop1j],a[hop2i],b[hop2j]);
}
