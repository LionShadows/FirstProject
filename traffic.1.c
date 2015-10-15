#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	printf("\n\t\t||====================================||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||----------Welcome-------------------||");
	printf("\n\t\t||---------use bus traffic------------||");
	printf("\n\t\t||------------Card--------------------||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||====================================||");
	getch();

	system("cls");
	printf("\n");
	printf("\n\t\t||------------------------------------|");
	printf("\n\t\t||--------please inpute (0-8)---------|");
	printf("\n\t\t||            1.创建文件              |");
	printf("\n\t\t||            2.显示信息              |");
	printf("\n\t\t||            3.注销旧卡              |");
	printf("\n\t\t||            4.添加新卡              |");
	printf("\n\t\t||            5.坐车刷卡              |");
	printf("\n\t\t||            6.卡内续钱              |");
	printf("\n\t\t||            7.最大用户              |");
	printf("\n\t\t||            8.统计数据              |");
	printf("\n\t\t||            0.退出系统              |");
	printf("\n\t\t||------------------------------------|");
	printf("\t\t\n");
	getch();

	system("cls");
	printf("\n|  卡号  | 用户名 | 卡内余额  |  学生信息 |");
	printf("\n|--------|--------|-----------|-----------|");
	printf("\n|  %5d  |  %8s  |  %7.2lf  |  %3d  |",1,"test",100.0,1);
	printf("\n|--------|--------|-----------|---------|\n");
}
// the first part of the traffic system
