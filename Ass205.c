//Accept Division of student as A B C D and display the timings of the exam.

#include<stdio.h>


void DisplayShedule(char ch)
{
	if((ch=='A')||(ch=='a'))
	{
		printf("Exam is at 7 AM");
	}
	else if((ch=='B')||(ch=='b'))
	{
		printf("Exam is at 8:30 AM");
	}
	else if((ch=='C')||(ch=='c'))
	{
		printf("Exam is at 9:20 AM");
	}
	else if((ch=='D')||(ch=='d'))
	{
		printf("Exam is at 10:30 AM");
	}
}

int main()
{
	char cValue ='\0';
	
	printf("Enter The Division\n");
	scanf("%c",&cValue);
	
	DisplayShedule(cValue);
	
	return 0;
}





