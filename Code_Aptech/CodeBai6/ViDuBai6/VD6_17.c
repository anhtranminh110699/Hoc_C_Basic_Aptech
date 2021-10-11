#include <stdio.h>

#define CHUC "Chuc mung ban.\n"

void main(void)
{
	int yHT, ySN;
	unsigned char tt;
	do
	{
		printf("Nhap nam hien tai: ");
		scanf("%d",&yHT);
		printf("Nhap nam sinh: ");
		scanf("%d",&ySN);
		printf("Ban nam nay %d tuoi,%s",(yHT-ySN),CHUC);
		printf("Ban co muon tiep tuc Y/N\n");
		scanf(" %c",&tt);
		//tt = getchar(); //??
	} while(tt == 'Y'||tt == 'y');
}

/*#include <stdio.h>
# define CHUC "Chuc ban vui ve (: >\n"
void main(void)
{
	unsigned char choi;
	int inamhtai, inamsinh;
	do
	{
		printf("Nhap vao nam hien tai: ");
		scanf("%d", &inamhtai);
		printf("Nhap vao nam sinh: ");
		scanf("%d", &inamsinh);
		printf("Ban %d tuoi, %s", inamhtai-inamsinh, CHUC);
		printf("Ban co muon tiep tuc? (Y/N)\n");
		//choi = getch(); //??
	} while (choi == 'y' || choi == 'Y');
}
???? */