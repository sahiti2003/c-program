#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float cgpa;
};
main()
{
	struct student s;
	s.rno=12;
    strcpy(s.name,"hari");
	s.cgpa=5.78;
	printf("student details are \n");
	printf("rno is %d\n",s.rno);
	printf("name is %s\n",s.name);
	printf("cgpa is %f\n",s.cgpa);
}
