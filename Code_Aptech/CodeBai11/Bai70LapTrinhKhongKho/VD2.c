#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	char name[50];
	FILE *fptr;

	if ((fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program.txt","r"))==NULL)
	{
		printf("ERROR! opening file");
		exit(1);
	}

	fscanf(fptr,"%[^\n]",name);
	//fgets(fptr,name);
	printf("In ra: %s\n",name);
	fclose(fptr);

	return 0;
}