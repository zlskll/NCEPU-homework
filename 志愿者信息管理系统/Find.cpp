#include"public.h"
int Delete_person(Person* head,const char* fromfile) {

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