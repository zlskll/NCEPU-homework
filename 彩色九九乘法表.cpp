#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void PrintCol(int n) {
	printf("\033[41;4m| %2d |\033[0m", n);
}
int main() {
	int i = 0;
	int j = 0;

	//打印行头
	printf("\033[41;4m|    \033[0m");
	for (i = 1; i <= 19; i++) {
		printf("\033[41;4m| %3d \033[0m", i);
	}

	//换个行
	printf("\n");
	
	//紫：printf("\033[45;4m %3d |\033[0m", i*j);
	//蓝：printf("\033[44;4m %3d |\033[0m", i*j);
	//深绿：printf("\033[46;4m %3d |\033[0m", i*j);
	// 中间绿：printf("\033[42;4m %3d |\033[0m", i*j);
	
	//打印主体

	for (i = 1; i <= 19; i++) {//y
		PrintCol(i);
		for (j = 1; j <= 19; j++) {//x
			//紫：
			if (( j <= 9 && i <= 9 && i <= j) || (j >= 11 && i >= 11 && i <= j)) {
				printf("\033[45;4m %3d |\033[0m", i * j);
			}
			//绿:
			else if (i == 10 || j == 10) {
				printf("\033[42;4m %3d |\033[0m", i * j);
			}
			//深绿:
			else if ((i <= 9 && j >= 11) || (i >= 11 && j <= 9)) {
				printf("\033[46;4m %3d |\033[0m", i * j);
			}
			//蓝:
			else {
				printf("\033[44;4m %3d |\033[0m", i * j);
			}
		}
		printf("\n");
	}
	return 0;
}
