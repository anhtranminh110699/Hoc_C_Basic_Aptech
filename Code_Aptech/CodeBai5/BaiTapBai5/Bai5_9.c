#include <stdio.h>

void main()
{
	char n1,n2;
	// Keo: K, Bua: B, Giay: G.
	printf("Nguoi choi 1 ra: ");
	scanf("%c",&n1);
	printf("Nguoi choi 2 ra: ");
	/*Cau scanf tiep theo ban dau gap loi (Vi nhap vao dang %c nen sau khi nhap lan 1 thi enter sau do cung duoc coi la ky tu)
	ko nhap duoc va day la mot so cach sau:
	scanf("%c",&n2); //dung nhung chua don gian.
	fflush(stdin); //ko hoan toan dung.*/
	scanf(" %c",&n2); //loi giai thich trong note.
	printf("Ket qua la: \n");
	switch (n1)
	{
		case 'K': switch (n2)
				{
					case 'K': printf("N1 ra %c hoa N2 ra %c.\n",n1,n2);
							break;
					case 'G': printf("N1 ra %c thang N2 ra %c.\n",n1,n2);
							break;
					case 'B': printf("N1 ra %c thua N2 ra %c.\n",n1,n2);
							break;
				}
				break;
		case 'B': switch (n2)
				{
					case 'K': printf("N1 ra %c thang N2 ra %c.\n",n1,n2);
							break;
					case 'G': printf("N1 ra %c thua N2 ra %c.\n",n1,n2);
							break;
					case 'B': printf("N1 ra %c hoa N2 ra %c.\n",n1,n2);
							break;
				}
				break;
		case 'G': switch (n2)
				{
					case 'K': printf("N1 ra %c thua N2 ra %c.\n",n1,n2);
							break;
					case 'G': printf("N1 ra %c hoa N2 ra %c.\n",n1,n2);
							break;
					case 'B': printf("N1 ra %c thang N2 ra %c.\n",n1,n2);
							break;
				}
				break;
	}
}