#include <stdio.h>

void main()
{
	int h,m,s,them;
	printf("Thoi gian ban dau la: ");
	scanf("%02d:%02d:%02d",&h,&m,&s);
	printf("So giay them vao la: ");
	scanf("%d",&them);
/*	if (s+them < 60)
		s = s + them;
	else if ((s+them) > 60 && (s+them) < 3600)
	{
		if ((m+(them/60)) < 60)
		{
			m = m + ((s+them)/60);
			s = (s+them)%60;
		}
		else
		{
			h = h + (m+((s+them)/60))/60;
			m = (m+((s+them)/60))%60;
		}
	}
	else
	{
		h = h + ((s+them)/3600);
		m = m + (((s+them)%3600)/60);
		s = s + (((s+them)%3600)%60);
	} */
	if (s+them < 60)
		s = s + them;
	else
	{
		m = m + ((s+them)/60); //m truoc vi luc nay s chua thay doi gia tri.
		s = ((s + them)%60);
		if (m > 60);
		{
			h = h + m/60; //h truoc vi luc nay m chua thay doi gia tri.
			m = (m%60);
		}
	}
	printf("Thoi gian sau khi cong %d giay la: %02d:%02d:%02d.\n",them,h,m,s);
}