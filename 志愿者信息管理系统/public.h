#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define MAX_COUNT (50)
struct	Person {
	int number;
	char name[20];
	int age;
	char Sex;
	char nation[20];
	int score;
	Person* next;
};

//创建链表
Person* Create();

//读取文件
int read_txt(Person* toData, const char* fromFile);

//菜单
void menu(const char* );

//读取选项
int read_switch_number(const char* filename);

//显示选项
//void screen_switch_number(int number, const char* outfile);

//查找——>搜索项
//void menu_search_person(const char* out_menu_file);

//删除信息
int Delete_person(Person* head, const char* fromfile);

//把链表信息输出到文件里
int out_to_file(Person* head, const char* outfile,int count);

//插入信息
int insert_person(Person* head, const char* fromfile, int count);

//查找信息
int search_person(Person* head, int number, int count);

//输出查找信息
int  out_search_person(Person* head, int number, const char* outfile);

//得到查找的数字
int read_search_number(const char* fromfile);