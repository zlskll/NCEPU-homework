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

//��������
Person* Create();

//��ȡ�ļ�
int read_txt(Person* toData, const char* fromFile);

//�˵�
void menu(const char* );

//��ȡѡ��
int read_switch_number(const char* filename);

//��ʾѡ��
//void screen_switch_number(int number, const char* outfile);

//���ҡ���>������
//void menu_search_person(const char* out_menu_file);

//ɾ����Ϣ
int Delete_person(Person* head, const char* fromfile);

//��������Ϣ������ļ���
int out_to_file(Person* head, const char* outfile,int count);

//������Ϣ
int insert_person(Person* head, const char* fromfile, int count);

//������Ϣ
int search_person(Person* head, int number, int count);

//���������Ϣ
int  out_search_person(Person* head, int number, const char* outfile);

//�õ����ҵ�����
int read_search_number(const char* fromfile);