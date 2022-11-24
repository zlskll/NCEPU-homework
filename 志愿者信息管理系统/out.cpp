#include"public.h"


int out_to_file(Person* head,const char* outfile,int count) {
	// �������
	if (head == NULL)
	{
		return -1; // ��ö���ͳһ��error code
	}
	if (outfile == NULL)
	{
		return -2; // ��ö���ͳһ��error code
	}
	//�����ֽ���
	ofstream ofile;
	//���ļ�
	ofile.open(outfile, ios::out);
	//�ж��ļ��Ƿ�򿪳ɹ�
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
	
	// �������
	if (head == NULL)
	{
		return -1; // ��ö���ͳһ��error code
	}
	if (outfile == NULL)
	{
		return -2; // ��ö���ͳһ��error code
	}
	
	//�����ֽ���
	ofstream ofile;
	//���ļ�
	ofile.open(outfile, ios::out);
	if (number == 0) {
		ofile << "�޷����ҵ���־Ը����Ϣ"<<endl;
		return -3;
	}
	//�ж��ļ��Ƿ�򿪳ɹ�
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