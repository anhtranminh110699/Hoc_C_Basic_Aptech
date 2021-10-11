#include <stdio.h>

void main(void)
{
	//vd 11
	int i;
	scanf("%d", &i);
	printf("So vua nhap la %d.\n",i);
	//vd 12
	int a,b;
	scanf("%d%d",&a,&b);
	printf("2 so vua nhap la %d, %d.\n",a,b);
	//vd 13
	int ngay,thang,nam;
	scanf("%d/%d/%d",&ngay,&thang,&nam);
	printf("Hom nay la ngay %d thang %d nam %d.\n",ngay,thang,nam);
	//vd 14
	scanf("%d%*c%d%*c%d%*c",&ngay,&thang,&nam);
	printf("Hom nay la ngay %d / %d / %d.\n",ngay,thang,nam);
	//vd 15
	scanf("%2d%2d%4d",&ngay,&thang,&nam);
	printf("Hom nay la ngay %2d / %2d / %4d .\n",ngay,thang,nam);
}