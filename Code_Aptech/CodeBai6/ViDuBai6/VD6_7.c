#include <stdio.h>

#define DAU_CHAM '.'

void main()
{
	char c;
	int idem;
	idem = 0;
	for(;;)
	{
		c = getchar();
		if (c!=DAU_CHAM)
			putchar(c);
		else
			break;
		idem++;
	}
	printf("So ky tu dem duoc la: %d\n",idem);
}

/*o vi du 5 6 7,
khi ma nhap ki tu ko co dau cham,
enter se ko thoat chuong trinh.

khi nhap chuoi ki tu co dau cham,
enter se thoat chuong trinh.

o day dem so ki tu se dem tong so ki tu 2 lan nhap,
va enter lan dau cung duoc coi la 1 ky tu*/