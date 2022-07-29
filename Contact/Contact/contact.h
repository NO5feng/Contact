#pragma once

#define MAX 1000

#define MAX_NAME 20
#define MAX_AGR 4
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age[MAX_AGR];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX]; //存放1000个信息
	int size;// 记录当前已经有的元素个数
};

//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps); 
void ShowContact(const struct Contact* ps);
void DelContacat(struct Contact* ps);
void SearchContacat(const struct Contact* ps);
void ModifyContacat(struct Contact* ps);