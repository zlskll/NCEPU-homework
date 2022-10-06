#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int FibonacciNumber(int n) {//先生成斐波那契数
//	if (n == 1 || n==2) {
//		return 1;
//	}
//	else
//		return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
//}
//int main() {
//	int n = 0;
//	int sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		sum += FibonacciNumber(i);//然后再加和
//	}
//	cout << sum;
//	return 0;
//}
//int main() {
//	int arr[100]={ 0 };
//	int i = 0;
//	double sum = 0;//求平均数先求和
//	for (i = 0;; i++) {
//		cin >> arr[i];
//		if (arr[i] > 0) {
//			sum += arr[i];
//		}
//		else if (arr[i] <= 0) {
//			break;
//		}
//	}
//	int ret = i;
//	double avg = sum/i;
//	cout << avg<<endl;
//	for (i = 0; i < ret; i++) {
//		if (arr[i] < avg) {
//			cout << arr[i]<<' ';
//		}
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10][10] = {0};
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i < m; i++) {
//		int every_line_max = arr[i][0];
//		for (j = 0; j < n; j++) {
//			every_line_max = every_line_max < arr[i][j] ? arr[i][j] : every_line_max;
//		}
//		cout << every_line_max << ' ';
//	}//找出了每行的最大值
//	cout << endl;
//	for (j = 0; j< n; j++) {
//		int every_row_min = arr[0][j];//注意从第0列开始
//		for (i = 0; i < m; i++) {
//			every_row_min = every_row_min > arr[i][j] ? arr[i][j] : every_row_min;
//		}
//		cout << every_row_min << ' ';
//	}//找出每列的最小值
//	return 0;
//}
//bool IsPrime(int n){
//	int i = 0;
//	if (n == 1) {
//		return false;
//	}
//	if (n == 2) {
//		return true;
//	}
//	int flag = 0;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			flag = 1;
//			return false;
//		}
//	}
//	if (flag == 0) {
//		return true;
//	}
//
//}
//void Line(int* p, int sl) {//冒泡排序
//	for (int i = 0; i < sl; i++) {
//		int j = 0;
//		while (j < sl-1-i) {
//			if (*(p+j) < *(p +j + 1)) {
//				int tmp = *(p+j);
//				*(p+j) = *(p + j + 1);
//				*(p + j + 1) = tmp;//交换
//			}
//			//p++  p的起点不能变！！
//			j++;
//		}
//	}
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	int arr[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];//输入那一串数
//	}
//	int j = 0;
//	for (i = 0; i < n; i++) {//对输入的每一个数挨个进行筛选
//		int ret = 0;
//		if (IsPrime(arr[i])) {//是素数
//			sum += arr[i];
//			ret = arr[i];
//		}
//		 if(ret) {
//			arr2[j] = ret;
//			j++;
//		}
//	}
//	cout << sum<<endl;
//	/*int k = 0;*/
//	//然后对arr2[]进行排序就ok了
//	/*for (k = 0; k < j; k++) {
//		max = arr2[k];
//		int ret = k;
//		while (k < j) {
//			k++;
//			max = max <= arr[k] ? arr[k] : max;
//		}		
//		k = ret;
//		arr2[k] = max;
//	}*/
//	Line(arr2,j);
//	for (int i = 0; i < j; i++) {
//		cout << arr2[i]<<' ';
//	}
//	return 0;
//}
int main() {
	int m = 0;//行
	int n = 0;//列
	int arr[100][100] = {0};
	cin >> m >> n;
	int i = 0;
	int j = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	int allsum = 0;
	for (i = 0; i < m; i++) {
		int rowsum = 0;//这一行要放在这，是要清除上一行留下来的数据，防止叠加
		for (j = 0; j < n; j++) {
			rowsum += arr[i][j];
		}
		cout << rowsum << ' ';
		allsum += rowsum;
	}
	cout << endl;
	for (j = 0; j < n; j++) {
		int colsum = 0;
		for (i = 0; i < m; i++) {
			colsum += arr[i][j];
		}
		cout << colsum << ' ';
	}
	cout << endl;
	cout << allsum;

	return 0;
}
