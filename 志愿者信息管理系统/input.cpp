#include"public.h"

int read_txt(Person* head, const char* fromFile) {
	// �������
		if (head == NULL)
		{
			return -1; // ��ö���ͳһ��error code
		}
		if (fromFile == NULL)
		{
			return -2; // ��ö���ͳһ��error code
		}
		//�����ֽ���
		ifstream ifile;
		//���ļ�
		ifile.open(fromFile, ios::in);
		//�ж��ļ��Ƿ�򿪳ɹ�
		if (!ifile.is_open()) {
			return -3;
		}

		Person* p = head;
		string str;
		int read_count = 0;
		//&& getline(ifile, str)
		while (p->next != NULL) {
			ifile >> p->next->number >> p->next->name >> p->next->age >> p->next->Sex>> p->next->nation >> p->next->score;
			p = p->next;
			read_count++;

			if (!getline(ifile, str)) {
				break;
			}
		}
		
		return read_count;
		/*ofstream ofile;
		ofile.open("ifile_testout.txt", ios::out);
		while (i < MAX_COUNT) {
			ofile << person[i].number << ' ' << person[i].name << ' ' << person[i].age << ' ' << person[i].level << ' ' << person[i].nation << ' ' << person[i].score << endl;
			i++;
		}*/
}