#include <stdio.h>

int main()
{
	int giay;
	printf("Nhap so giay dem duoc: ");
	scanf("%d",&giay);
	int h,m,s;
	/*h = giay/3600;
	m = (giay%3600)/60;
	s = (giay%3600)%60;*/
	//khai bao truoc vong lap while dan den nhan so giay nhap vao dau tien, dan den sai.
	while ((giay<0) || (giay > 86399))
	{
		printf("Nhap trong khoang 0 den 86399, moi nhap lai: ");
		scanf("%d",&giay);
	}
	h = giay/3600;
	m = (giay%3600)/60;
	s = (giay%3600)%60;
	printf("Thoi gian hien tai la: %02d:%02d:%02d.\n",h,m,s);
}