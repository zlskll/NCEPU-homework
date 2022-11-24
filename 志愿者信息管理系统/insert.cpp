#include"public.h"

//插入学生信息
int insert_person(Person* head,const char* fromfile,int count) {
    // 参数检查
    if (head == NULL)
    {
        return -1; // 最好定义统一的error code
    }
    if (fromfile == NULL)
    {
        return -2; // 最好定义统一的error code
    }
    //建立字节流
    ifstream ifile;
    //打开文件
    ifile.open(fromfile, ios::in);
    //判断文件是否打开成功
    if (!ifile.is_open()) {
        return -3;
    }

    int read_count = 0;

    Person* s = new Person;
    
    ifile >>s->number >> s->name >> s->age >> s->Sex >> s->nation >> s->score;


    Person* p = head;
    while (1)
    {
        read_count++;
        p = p->next;
        if (read_count == count) {
            p->next = s;
            s->next = NULL;
            break;
        }
    }
    ifile.close();
    return true;
}