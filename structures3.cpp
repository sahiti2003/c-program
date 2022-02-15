#include<stdio.h>
struct student
{
	int rno;
	struct name
	{
		char fn[5],mn[10],ln[10];
	}sname;
	float cgpa;
};
int main()
{
	struct student s={12,{"t","jyothi","m"},8.9};
	printf("\n%d",s.rno);
	printf("\n%s%s%s",s.sname.fn,s.sname.mn,s.sname.ln);
	printf("\n%f",s.cgpa);
	
}

