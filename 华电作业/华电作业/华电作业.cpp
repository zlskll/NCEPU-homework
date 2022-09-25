#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1.人民币兑换
//int main() {
//    int a = 0;
//    cin >> a;
//    int i = a / 10;
//    cout << "" << i ;
//    int b = a % 10;
//    cout << " " << b / 5;
//    int c = b % 5;
//    cout << " " << c / 2;
//    cout << " " << c % 2;
//    return 0;
//}

//2.前驱、后继字符
//int main() {
//	char ch = '0';//自身
//	cin >> ch;
//	int front = ch - 1;//前驱
//	int behind = ch + 1;//后继
//	printf("%c %c %c\n", front,ch,behind);
//
//	printf("%d %d %d\n", front,ch,behind);
//}

//3.求三角形面积
//int main() {
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	cin >> a >> b >> c;
//	double s = (a + b + c) / 2;
//	double S = sqrt(s * (s - a) * (s - b) * (s - c));
//	cout << S;
//	return 0;
//}

//4.华氏温度转摄氏温度
//int main() {
//	double F = 0.0;
//	cin >> F;
//	double C = 5.0 / 9 * (F - 32);
//	cout << C;
//	return 0;
//}

//5.有关圆的计算
//const double PI = 3.14;
//int main() {
//	double r = 0.0;
//	double h = 0.0;
//	cin >> r >> h;
//	double C = 2.0 * PI * r;//周长
//	double S = PI * r * r;//圆面积
//	double Ball = 4.0 * PI * r * r;//球的面积
//	double V = PI * r * r * h;//圆柱的体积
//	cout << C<<" " << S <<" " << Ball << " " << V;
//	return 0;
//}
#include<stdio.h>
int main() {
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int max = 0;
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 > n2) {
		max = n1;
	}
	else
		max = n2;
	if (max < n3) {
		max = n3;
	}
	printf("max=%d", max);
	return 0;
}
