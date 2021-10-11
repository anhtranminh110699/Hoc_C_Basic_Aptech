#include <stdio.h>

struct person
{
	int age;
	char chucai;
	float weight;
};

int main()
{
	struct person *personPtr, person1;
	personPtr = &person1;
	printf("Enter age: ");
	scanf("%d",&person1.age);
	printf("Enter chucai: ");
	scanf(" %c",&person1.chucai);
	printf("Enter weight: ");
	scanf("%f",&person1.weight);
	printf("Dia chi age: %x\n",&person1.age);
	printf("Dia chi chucai: %x\n",&person1.chucai);
	printf("Dia chi weight: %x\n",&person1.weight);

	printf("\n\nDisplaying: \n");
	printf("Age: %d\n",personPtr->age);
	printf("Weight: %f\n",personPtr->weight);
	printf("Dia chi age: %x\n",&personPtr->age);
	printf("Dia chi weight: %x\n",&personPtr->weight);
	printf("\n");
	printf("Age: %d\n",(*personPtr).age);
	printf("Weight: %f\n",(*personPtr).weight);
	printf("Dia chi age: %x\n",personPtr); //viet la personPtr.age hay .weight deu sai
	printf("Dia chi weight: %x\n",personPtr); //suy ra ko the dung cu phap cua con tro thong thuong cho tung bien age,weight.

	printf("\n\nDia chi bien con tro la: %x\n",&personPtr);
}