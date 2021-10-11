#include <stdio.h>

struct toaDo
{
	int x;
	int y;
} td;

struct tamGiac //neu co typedef thi tg1 la ten thay the cho tamGiac.
{
	struct toaDo a;
	struct toaDo b;
	struct toaDo c;
} tg1;  //khai bao bien tg1.

void main()
{
	//struct tamGiac tg1, tg2;
	printf("Nhap so lieu diem A: \n");
	printf("xA = ");
	scanf("%d",&tg1.a.x);
	printf("yA = ");
	scanf("%d",&tg1.a.y);

	printf("Nhap so lieu diem B: \n");
	printf("xB = ");
	scanf("%d",&tg1.b.x);
	printf("yB = ");
	scanf("%d",&tg1.b.y);

	printf("Nhap so lieu diem C: \n");
	printf("xC = ");
	scanf("%d",&tg1.c.x);
	printf("yC = ");
	scanf("%d",&tg1.c.y);
}