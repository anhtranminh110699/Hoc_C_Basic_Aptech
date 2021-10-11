#include <stdio.h>

#define MSG "Vi du su dung vong lap while.\n"

void main()
{
	int i;
	i=0;
	/*while(i++<3)
		printf("%s",MSG);*/
	while(printf("%s\n", MSG),++i<3);
}