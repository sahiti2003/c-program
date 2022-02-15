#include<stdio.h>
#include<string.h>
struct traveller 
{
	char name[60];
	int age;
	int train_no;
	int seat_no;
	char coach_no;
	char class;
}
main()
{
	struct student x;
	struct student y;
	struct student z;
	scanf("%s%d%d%d%s%s",&x.name,&x.age,&x.train_no,&x.seat_no,&x.coach_no,&x.class);
	scanf("%s%d%d%d%s%s",&y.name,&y.age,&y.train_no,&y.seat_no,&y.coach_no,&y.class);
	scanf("%s%d%d%d%s%s",&z.name,&z.age,&z.train_no,&z.seat_no,&z.coach_no,&z.class);
	printf("travellers details are \n");
	printf("name is %s\n",x.name);
	printf("age is %d\n",x.age);
	printf("train_no is %d\n",x.train_no);
	printf("seat_no is %d\n",x.seat_no);
	printf("coach_no is %s\n",x.coach_no);
	printf("class is %s\n",x.class);
}
	

