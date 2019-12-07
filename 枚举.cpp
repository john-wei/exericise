#include<stdio.h>
int main()
{
	enum weekday{sun,mon,tue,wed,thu,fri,sat};      //定义枚举类型 
	int k,day;                                      //k用来看星期几，day用来判断 
	printf("Input a number(0-6)");                  //提示输入 
	scanf("%d",&k);                                 //输入k 
	day=(enum weekday)k;                            //（）强制类型转换才能给day赋值 
	switch(day)                                     //switch函数 
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
