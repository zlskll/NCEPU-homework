#include"public.h"
int read_switch_number(const char* fromfile) {
	//创建字节流
	ifstream ifile;
	ifile.open(fromfile,ios::in);
	int number = 0;
	ifile >> number;
	ifile.close();
	return number;
}