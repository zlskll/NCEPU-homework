#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//2.
//int Flower(int n) {
//    if (n / 10 >= 1) {
//        return pow(n % 10, 3) + Flower(n / 10);
//    }
//    return pow(n, 3);
//}
//int main() {
//    int N = 0;
//    cin >> N;
//    int i = 0;
//    for (i = 100; i <= N; i++) {
//        if (i == Flower(i)) {
//            cout << i<<' ';
//        }
//    }
//
//}
// 3.
int main() {
	int  N = 0;
	double  sum = 0;
	int  i = 0;
	int  j = 0;
	cin >> N;
	for (i = 1; i <= N; i++) {
		long long jiec = 1;//注意这里要有个jiec初始化，因为阶乘都是从1开始的
		for (j = 1; j <= i; j++) {
			jiec *= j;
		}
		sum += jiec;
	}
	cout << sum;
	return 0;
}
// //4.
//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	//最大公约数
//	int i = 0;
//	int min = a < b ? a : b;
//	int max = 0;
//	for (i = min; i >=1; i--) {
//		if (a % i == 0 && b % i == 0) {
//			max = i;
//			break;
//		}
//	}
//	cout << max << ' ';
//	int max2 = a > b ? a : b;
//	int minb = 0;
//	for (i = max2;; i++) {
//		if (i % a == 0 && i % b == 0) {
//			minb = i;
//			break;
//		}
//	}
//	cout << minb;
//
//}

//5.
//int main() {
//	int under = 1;//分母
//	double on = 2.0;//分子
//	int n = 0;
//	double sum = 0.0;
//	cin >> n;
//	for (int i = 0; i < n;i++) {
//		sum += on / under;
//		int tmp = under;
//		under = on;
//		on = tmp + under;
//	}
//	cout << sum;
//
//
//}
//6.

//int main() {
//	int n = 0;
//	cin >> n;
//	int max = 0;
//	max = n % 10;
//	while (1) {
//	 int z = n / 10; 
//	 if (z < 1) {
//		 break;
//	 }
//	 if (z % 10 > max) {
//		 max = z % 10;
//	 }
//	 n = n / 10;
//	}
//	cout << max;
//	return 0;
//}
// 7.
//int main() {
//	double n = 0;//n米的高空
//	int m = 0;//第m次落地
//	cin >> n >> m;
//	
//	double sum = 0.0;//总经过的路程
//	double height = 0.0;//第m次落地后反弹的高度
//	int i = 1;
//	height = pow((1.0 / 4), m) * n;
//	while (i <= m) {
//		sum += 2 * n * pow((1.0 / 4), i - 1);
//		i++;
//	}
//	cout <<fixed<<setprecision(2)<<sum-n<<endl<<height;
//	return 0;
//}
//9.
//int FactorSum(int n) {
//	int sum = 0;
//	for (int i = 1; i < n; i++) {
//		if (n % i == 0) {
//			sum += i;
//		}
//	}
//	return sum;
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		if (i == FactorSum(i)) {
//			cout << i<<' ';
//		}
//	}
//	return 0;
//}
//10.
//int main() {
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	double avg = 0.0;
//	cin >> m >> n;
//	int count = 0;
//	for (i = m; i <= n; i++) {
//		int flag = 0;
//		if (i == 1) {//1不是素数
//			continue;
//		}
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {//不是素数
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0 || i==2) {//是素数
//			count++;
//			sum += i;
//		}
//	}
//	if (count == 0) {
//		cout << "no";
//	}
//	else {
//		cout << count<<' ';
//		avg = (double)sum / count;
//		cout << avg;
//		return 0;
//	}
//
//
//}
//int main() {
//	int input = 0;
//	int n = 0;
//	cin >> input;
//	int flag = 0;
//	for (n = input; n >= 2; n--) {
//		int x = 1;
//		while ((n * x + ((n - 1) * n) / 2)<=input ) {
//			if (n * x + ((n - 1) * n) / 2 == input) {
//				flag = 1;
//				for (int i = 0; i < n; i++) {
//					cout << x + i<<' ';
//				}
//				cout << endl;
//				break;
//			}
//			x++;
//		}
//	}
//	if (flag == 0) {//没有符合要求的
//		cout << "none";
//	}
//	return 0;
//}