#include"public.h"
int Delete_person(Person* head,const char* fromfile) {

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
	int delete_number = 0;
	ifile >> delete_number;

    Person* pre = NULL;
    Person* p = head;
    while (p->next != NULL) {
        pre = p;
        p = p->next;
        if (p->number == delete_number) {
            pre->next = p->next;
            p = NULL;
            //delete[] (p);
            break;
        }
    }
	ifile.close();
	return true;
}