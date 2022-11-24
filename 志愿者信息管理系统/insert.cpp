#include"public.h"

//����ѧ����Ϣ
int insert_person(Person* head,const char* fromfile,int count) {
    // �������
    if (head == NULL)
    {
        return -1; // ��ö���ͳһ��error code
    }
    if (fromfile == NULL)
    {
        return -2; // ��ö���ͳһ��error code
    }
    //�����ֽ���
    ifstream ifile;
    //���ļ�
    ifile.open(fromfile, ios::in);
    //�ж��ļ��Ƿ�򿪳ɹ�
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