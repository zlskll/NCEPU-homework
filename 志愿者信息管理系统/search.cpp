#include"public.h"



int search_person(Person* head, int number,int count) {
    //检查
    if (head == NULL)
    {
        return -1; // 最好定义统一的error code
    }
 


    Person* p = head;
    int read_count = 0;
    bool flag = 0;//判断找到没
    while (read_count<count)
    { //保证p指向的不是NULL
        read_count++;
        p = p->next;
        if (p->number == number)
        {
            flag = 1;//找到了
            break;
        }
    }
    return flag;
}