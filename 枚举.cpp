#include<stdio.h>
int main()
{
	enum weekday{sun,mon,tue,wed,thu,fri,sat};      //����ö������ 
	int k,day;                                      //k���������ڼ���day�����ж� 
	printf("Input a number(0-6)");                  //��ʾ���� 
	scanf("%d",&k);                                 //����k 
	day=(enum weekday)k;                            //����ǿ������ת�����ܸ�day��ֵ 
	switch(day)                                     //switch���� 
	{
		case sun:printf("Sunday");break;	
		case mon:printf("Monday");break;	
		case tue:printf("Tuesday");break;	
		case wed:printf("Wednesday");break;	
		case thu:printf("Thursday");break;	
		case fri:printf("Friday");break;	
		case sat:printf("Saturday");break;
		default: printf("input error");break;		
	} 
} 
