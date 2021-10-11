#include <stdio.h>

void main()
{
	int ia,ib,ic,id;
	printf("Nhap vao 4 so a, b, c, d: ");
	scanf("%d%d%d%d",&ia,&ib,&ic,&id);
	if (ia>ib)
	{
		if (ic>id)
		{
			if (ia>ic)
				printf("max = a = %d\n",ia);
			else
				printf("max = c = %d\n",ic);
		}
		else
		{
			if (ia>id)
				printf("max = a = %d\n",ia);
			else
				printf("max = d = %d\n",id);
		}
	}
	else
	{
		if (ic>id)
		{
			if (ib>ic)
				printf("max = b = %d\n",ib);
			else
				printf("max = c = %d\n",ic);
		}
		else
		{
			if (ib>id)
				printf("max = b = %d\n",ib);
			else
				printf("max = d = %d\n",id);
		}
	}
}