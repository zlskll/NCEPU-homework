#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1.����Ҷһ�
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

//2.ǰ��������ַ�
//int main() {
//	char ch = '0';//����
//	cin >> ch;
//	int front = ch - 1;//ǰ��
//	int behind = ch + 1;//���
//	printf("%c %c %c\n", front,ch,behind);
//
//	printf("%d %d %d\n", front,ch,behind);
//}

//3.�����������
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

//4.�����¶�ת�����¶�
//int main() {
//	double F = 0.0;
//	cin >> F;
//	double C = 5.0 / 9 * (F - 32);
//	cout << C;
//	return 0;
//}

//5.�й�Բ�ļ���
//const double PI = 3.14;
//int main() {
//	double r = 0.0;
//	double h = 0.0;
//	cin >> r >> h;
//	double C = 2.0 * PI * r;//�ܳ�
//	double S = PI * r * r;//Բ���
//	double Ball = 4.0 * PI * r * r;//������
//	double V = PI * r * r * h;//Բ�������
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
