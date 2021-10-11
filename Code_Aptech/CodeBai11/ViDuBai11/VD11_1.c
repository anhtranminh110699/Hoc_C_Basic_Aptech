/* Ghi n so nguyen vao file va doc ra tu file*/
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

void main(void)
{
	FILE *f;
	int in, i;
	printf("Nhap vao so n: ");
	scanf("%d", &in);

	//Ghi file
	if((f = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/VD1.dat", "wb")) == NULL)
	{
		printf("Khong the mo file!.\n");
		exit(0);
	}
	else
		for(i = 1; i <= in; i++)
			fwrite(&i, sizeof(int), 1, f);
	fclose(f);

	//Doc file
	f = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/VD1.dat", "rb");
	while(fread(&i, sizeof(int), 1, f) == 1)
		printf("%d ", i);
	fclose(f);
}