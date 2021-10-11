#include <stdio.h>
#include <curses.h>

#define MAX 20

void demnguyenam(char []);

void main()
{
	char chuoi[MAX];
	printf("Nhap chuoi: ");
	gets(chuoi);
	demnguyenam(chuoi);
}

void demnguyenam(char a[])
{
	int i,n=MAX;
	int dem = 0;
	for (i=0;i<n;i++)
	{
		switch(a[i])
		{
			case 'a': case 'A':
			case 'e': case 'E':
			case 'i': case 'I':
			case 'o': case 'O':
			case 'u': case 'U': dem += 1;
								break;
		}
	}
	printf("Chuoi tren co %d nguyen am.\n",dem);
}