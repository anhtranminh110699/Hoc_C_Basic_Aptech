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

	if ((fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program1.bin","rb")) == NULL);
	{
		printf("ERROR!");
		exit(1);
	}
	//fptr = fopen("/home/anhtran/Documents/C/Aptech/Code_Aptech/CodeBai11/Bai70LapTrinhKhongKho/program1.bin","wb");

	for (n=1;n<5;++n)
	{
		fread(&num,sizeof(struct threeNum),1,fptr);
		printf("n1 = %d\tn2 = %d\tn3 = %d\n",num.n1,num.n2,num.n3);
	}
	fclose(fptr);
	return 0;
}

//???