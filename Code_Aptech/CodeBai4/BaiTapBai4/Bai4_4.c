#include <stdio.h>
#include <math.h>
//#define PI 3.14
const float PI = 3.14;

int main()
{
	float r;
	printf("Nhap vao ban kinh hinh cau can tinh toan: ");
	scanf("%f",&r);
	float S,V;
	//S = 4*PI*((r)^2); //erro: invalid operands to binary ^ (have ‘float’ and ‘int’)
	S = 4*PI*pow(r,2); //dung thu vien math.h.
	printf("Dien tich cua hinh cau co ban kinh %fm la: %fm^2.\n",r,S);
	//V = 4*PI*((r)^3)/3; //erro: invalid operands to binary ^ (have ‘float’ and ‘int’)
	V = 4*PI*pow(r,3)/3; //dung thu vien math.h;
	//Viet 4/3*PI*pow(r,3) se sai vi 4/3 se chi lay gia tri nguyen la 1.
	printf("The tich cua hinh cau co ban kinh %fm la: %fm^3.\n",r,V);	
}