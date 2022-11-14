#include<iostream>
using namespace std;
#include<cmath>
//1.
//double	Prime_reciprocal(int k) {
//		if (k >= 2) {
//			return 1.0 / k;
//		}
//		else
//			return 0;
//}
//bool Is_Prime(int n) {
//	int i = 0;
//	if (n == 1) {
//		return false;
//	}
//	if (n == 2) {
//		return true;
//	}
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n = 0;
//	int i = 0;
//	cin >> n;
//	double sum = 0.0;
//	for (i = 2; i <= n; i++) {
//		if (Is_Prime(i)) {
//			sum += Prime_reciprocal(i);
//		}
//	}
//	cout << sum;
//	return 0;
//}

//2.
//int Ten_to_Eight(int n) {
//	int sum = 0;
//	int x = 1;
//	while(n != 0)
//	{
//		sum = sum + (n % 8) * x;
//		n /= 8;
//		x *= 10;
//	}
//	return sum;
//}
//int main() {
//	int Ten = 0;
//	cin >> Ten;
//	cout << Ten_to_Eight(Ten);
//}

//3.
//bool Is_Prime(int n) {
//	int i = 0;
//	if (n == 1) {
//		return false;
//	}
//	if (n == 2) {
//		return true;
//	}
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int n = 0;;
//	cin >> n;
//	int i = 0;
//	for (i = 1; i < n; i++) {
//		if (Is_Prime(i)) {
//			int j = 0;
//			for (j = i + 1; j < n; j++) {
//				if (Is_Prime(j) && i+j==n) {
//					cout << n << '=' << i << '+' << j;
//					return 0;
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//4.
//int digit(int num, int k) {
//	int count = 0;
//	while (num) {
//		count++;
//		if (count == k) {
//			return num % 10;
//		}
//		else
//			num = num / 10;
//	}
//	return 0;
//}
//int main() {
//	int num = 0;
//	int k = 0;
//	cin >> num >> k;
//	cout << digit(num, k);
//	return 0;
//}

//5.
//int	Max_Yue(int a,int b) {
//	int i = 0;
//	int min = a < b ? a : b;
//	for (i = min; i > 0; i--) {
//		if (a % i == 0 && b % i == 0) {
//			return i;
//		}
//	}
//	return 1;
//}
//
//int Min_Bei(int a, int b) {
//	int i = 0;
//	int max = a > b ? a : b;
//	for (i = max; ; i++) {
//		if (i % a == 0 && i % b == 0) {
//			return i;
//		}
//	}
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	cout << Max_Yue(a, b) << ' ' << Min_Bei(a, b);
//	return 0;
//}

//6.
//double	K_xiang(int k) {
//     	//是奇数项
//		if (k % 2 != 0) {
//			return 1.0 / (k * (k + 1));
//		}
//		else
//			return (-1) * (  1.0 / (k * (k + 1) )  );
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	double sum = 0.0;
//	for (int i = 1; i <= n; i++) {
//		sum += K_xiang(i);
//	}
//	cout << sum;
//
//	return 0;
//}

//7.
//int HeBing(int a, int b) {
//	int a_gewei = a % 10;
//	int a_shiwei = (a / 10) % 10;
//	return  1000 * a_shiwei + 10 * b + a_gewei;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	cout << HeBing(a, b);
//	return 0;
//}

//8.
//int count_1(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 10 == 1) {
//			count++;
//		}
//		n /= 10;
//	}
//	return count;
//}
//int count_2(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 10 == 2) {
//			count++;
//		}
//		n /= 10;
//	}
//	return count;
//}
//int count_3(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 10 == 3) {
//			count++;
//		}
//		n /= 10;
//	}
//	return count;
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	cout << count_1(n) << ' ' << count_2(n) << ' ' << count_3(n);
//	return 0;
//}

//9.
//bool Is_Prime(int n) {
//	int i = 0;
//	if (n == 1) {
//		return false;
//	}
//	if (n == 2) {
//		return true;
//	}
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void bubble_sort(int arr[],int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) {
//		//一趟冒泡排序
//		for (j = 0; j < n -1- i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}	
//	}
//}
//int main() {
//	int n = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int count = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr1[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (Is_Prime(arr1[i])) {
//			arr2[count] = arr1[i];
//			count++;
//		}
//	}
//	bubble_sort(arr2,n);
//	for (int i = 0; i < n; i++) {
//		if (arr2[i] != 0) {
//			cout << arr2[i]<<' ';
//		}
//	}
//	return 0;
//}

//10.
//double Fen_Duan(double x) {
//	if (x <= 0) {
//		return sin(x) + 1;
//	}
//	if (x > 0 && x < 10) {
//		return pow(x, 2) + (3.0 / x);
//	}
//	if (x >= 10) {
//		return sqrt(x + 4);
//	}
//	return 0;
//}
//
//int main() {
//	double x = 0.0;
//	double y = 0.0;
//	cin >> x;
//	y = Fen_Duan(x);
//	cout << y;
//	return 0;
//}