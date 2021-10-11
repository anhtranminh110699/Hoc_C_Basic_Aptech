#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

struct threeNum
{
	int n1,n2,n3;
};

int main()
{
	int n;
	struct threeNum num;
	FILE *fptr;

	/*if ((fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program1.bin","wb")) == NULL);
	{
		printf("ERROR!");
		exit(1);
	}*/
	fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program1.bin","wb");

	for (n=1;n<5;++n)
	{
		num.n1=n;
		num.n2=5*n;
		num.n3=5*n+1;
		fwrite(&num,sizeof(struct threeNum),1,fptr);
	}
	fclose(fptr);
	return 0;
}

//???