#include"public.h"

int read_search_number(const char* fromfile) {
	//�������
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

	int number = 0;
	ifile >> number;

	return number;
}