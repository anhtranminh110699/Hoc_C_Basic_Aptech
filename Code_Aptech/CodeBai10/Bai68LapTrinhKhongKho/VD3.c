#include <stdio.h>
#include <string.h>
#include <math.h>

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a*b!=0)
    {
        if (a>b)
            a%=b;
        else
            b%=a;
    }
    return a+b;
}

int BSCNN(int a, int b)
{
    return a*b/UCLN(a,b);
}

typedef struct PhanSo
{
    int tuso, mauso;
} PS;

PS rutGon(PS a)
{
    PS c;
    c.tuso = a.tuso / UCLN(a.tuso,a.mauso);
    c.mauso = a.mauso / UCLN(a.tuso,a.mauso);
    return c;
}

PS cong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}

PS tru(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}

PS nhan(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}

PS chia(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso*b.mauso;
    c.mauso = a.mauso*b.tuso;
    c = rutGon(c);
    return c;
}

void print(PS a)
{
    printf("%d/%d",a.tuso,a.mauso);
}

int main()
{
    PS a,b,c;

    printf("Nhap phan so a: \n");
    scanf("%d/%d",&a.tuso,&a.mauso);
    printf("Nhap phan so b: \n");
    scanf("%d/%d",&b.tuso,&b.mauso);
    printf("\nPhan so toi gian cua a la: ");
    a = rutGon(a);
    print(a);
    printf("\nPhan so toi gian cua b la: ");
    b = rutGon(b);
    print(b);
    
    printf("\nTong cua 2 phan so = ");
    c = cong(a,b);
    print(c);
    //printf("Hieu cua 2 phan so = %d \n",tru(a,b)); //ko hien duoc dang phan so
    printf("\nHieu cua 2 phan so = ");
    c = tru(a,b);
    print(c);
    printf("\nTich cua 2 phan so = ");
    c = nhan(a,b);
    print(c);
    //printf("Thuong cua 2 phan so = %d \n",chia(a,b)); //ko hien duoc dang phan so
    printf("\nThuong cua 2 phan so = ");
    c = chia(a,b);
    print(c);
    printf("\n");
}