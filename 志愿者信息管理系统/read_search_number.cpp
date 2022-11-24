#include"public.h"

int read_search_number(const char* fromfile) {
	//参数检查
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

	int number = 0;
	ifile >> number;

	return number;
}