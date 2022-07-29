#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void menu()
{
	printf("***************************************\n");
	printf("***** 1. add            2. del    *****\n");
	printf("***** 3. search         4. modify *****\n");
	printf("***** 5. show           0. exit   *****\n");
	printf("***************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con; //con就是通讯录，里面包含：1000的元素的数和size
	
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContacat(&con);
			break;
		case SEARCH:
			SearchContacat(&con);
			break;
		case MODIFY:
			ModifyContacat(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}