#include <stdio.h>
#include <curses.h>
#include <string.h>

#define MAX 200

void hoadon(char []);

void main()
{
	char chuoi[MAX]={"tranminhanh va nguyen truc ha se tottotot nghiep vao thang bay\nse co rat nhieuuu nguoi tot nghiep vao thangggg bay\ncongratulate ok la\n"};
	printf("Nhap chuoi van ban: \n");
	printf("%s",chuoi);
	//gets(chuoi);
	hoadon(chuoi);
}

void hoadon(char a[])
{
	int dem,bt,tu8,begin,i,n=MAX;
	tu8 = 0;
	bt = 0;
	begin = 0;
	for(i=0;i<n;i++)
	{
		if(a[i] == ' ' || a[i] == '\0' || a[i] == '\n')
		{
			if(i-begin<=8)
				bt += 1;
			else
				tu8 += 1;
			begin = i;
		}
		if (a[i] == '\0')
			break;
	}
	dem = bt + tu8;
	printf("So tu                             : %d\n",dem);
	printf("So tu co kich thuoc binh thuong   : %dx100 = %5d\n",bt,bt*100);
	printf("So tu co kich thuoc > 8 ky tu     : %dx150 = %5d\n",tu8,tu8*150);
	printf("Tong cong                         :          %5d\n",((bt*100)+(tu8*100)));
}