#include <stdio.h>

void main()
{
	int i,s,n,imax;
	imax = 0;
	printf("Nhap vao n so nguyen: ");
	scanf("%d",&n);
	i=1;
	/*do
	{
		printf("Nhap vao so nguyen thu %d: ",i);
		scanf("%d",&s);
		if(imax<s)
			imax = s;
		else
			continue;
	} while(i++<n);*/ //kho su dung.
	while(i<=n)
	{
		printf("Nhap vao so nguyen thu %d: ",i);
		scanf("%d",&s);
		i++; //chung ta nen dat dong nay o day
		if(imax<s)
			imax = s;
		else
			continue;
		//i++; //sau khi coutinue i se ko nhay len 1
	}
	printf("So lon nhat trong cac so vua nhap la: %d.\n",imax);
}