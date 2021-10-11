#include <stdio.h>

#define MSG "Vi du su dung vong lap for.\n"

void main()
{
	int i;
	/*for(i=1;i<=3;i++)   //hoac for(i=1;i>=3;i+=1)
	{
		printf("%s",MSG);
		// printf("Vi du su dung vong lap for.\n");
	}*/
	for(i=1;i<=3;i++,printf("%s",MSG));
}