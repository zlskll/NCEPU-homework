#include"public.h"



int search_person(Person* head, int number,int count) {
    //���
    if (head == NULL)
    {
        return -1; // ��ö���ͳһ��error code
    }
 


    Person* p = head;
    int read_count = 0;
    bool flag = 0;//�ж��ҵ�û
    while (read_count<count)
    { //��֤pָ��Ĳ���NULL
        read_count++;
        p = p->next;
        if (p->number == number)
        {
            flag = 1;//�ҵ���
            break;
        }
    }
    return flag;
}