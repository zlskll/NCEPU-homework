#include"public.h"


int out_to_file(Person* head,const char* outfile,int count) {
	// 参数检查
	if (head == NULL)
	{
		return -1; // 最好定义统一的error code
	}
	if (outfile == NULL)
	{
		return -2; // 最好定义统一的error code
	}
	//建立字节流
	ofstream ofile;
	//打开文件
	ofile.open(outfile, ios::out);
	//判断文件是否打开成功
	if (!ofile.is_open()) {
		return -3;
	}
	int read_count = 0;
    Person* p_tool = head;
    while (read_count < count)
    {
		read_count++;
		ofile << p_tool->next->number << ' ' << p_tool->next->name << ' ' << p_tool->next->age <<' '<<p_tool->next->Sex <<' ' << p_tool->next->nation <<' ' << p_tool->next->score<<endl;
        p_tool = p_tool->next;
    }
	ofile.close();
	return true;
}



int  out_search_person(Person* head, int number,const char* outfile) {
	
	// 参数检查
	if (head == NULL)
	{
		return -1; // 最好定义统一的error code
	}
	if (outfile == NULL)
	{
		return -2; // 最好定义统一的error code
	}
	
	//建立字节流
	ofstream ofile;
	//打开文件
	ofile.open(outfile, ios::out);
	if (number == 0) {
		ofile << "无法查找到该志愿者信息"<<endl;
		return -3;
	}
	//判断文件是否打开成功
	if (!ofile.is_open()) {
		return -3;
	}

	Person* p = head;
	while (1) {
		p = p->next;
		if (p->number == number) {
			ofile << p->number << ' ' << p->name << ' ' << p->age << ' ' << p->Sex << ' ' << p->nation << ' ' << p->score << endl;
			break;
		}
	}
	return true;
}