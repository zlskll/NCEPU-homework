#include"public.h"

Person* Create()
{
    Person* head = new Person; //����ͷ���
    Person* p1, * p2;
    int n = 0;
    p1 = p2 = new Person;    //�����µ�Ԫ��p1,p2ָ��ָ����

    ////�����ֽ���
    //ifstream ifile;
    //string str;
    ////���ļ�
    //ifile.open("file1.txt", ios::in);
    //getline(ifile, str);

   // cin >> p1->number >> p1->name >> p1->score; //��Ԫ���
    //������㣺
    
    while (n<MAX_COUNT)
    {
        n++;
        if (n == 1) //p1����Ԫ���
        {
            head->next = p1; //��ͷ������Ԫ���������
        }
        //�Ǳ���
        else
        {
            p2->next = p1;//�ѵ�ǰ�ı�����ӵ���һ��ѭ����������p2��β���ϣ�ʵ�ֽ������
        }
        p2 = p1;      //�ѵ�ǰ�Ľ��浵�����������Ժ�׼������һ�����
        p1 = new Person; //����һ�����
       // cin >> p1->number >> p1->name >> p1->score;
    }
    p2->next = NULL; //��ʱ�ÿ�
    return (head);   //�������������ͷָ��
}