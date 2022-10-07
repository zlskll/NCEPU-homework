#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//9.
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
// 12.
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
// 1.
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
// 2.
//bool IsPrime(unsigned int n){
//	unsigned int i = 0;
//	if (n == 1 || n==0) {
//		return false;//不是素数
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
//			p++  p的起点不能变！！
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
//	然后对arr2[]进行排序就ok了
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
 
// 3.
//int main() {
//	int m = 0;//行
//	int n = 0;//列
//	int arr[100][100] = {0};
//	cin >> m >> n;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	
//	int allsum = 0;
//	for (i = 0; i < m; i++) {
//		int rowsum = 0;//这一行要放在这，是要清除上一行留下来的数据，防止叠加
//		for (j = 0; j < n; j++) {
//			rowsum += arr[i][j];
//		}
//		cout << rowsum << ' ';
//		allsum += rowsum;
//	}
//	cout << endl;
//	for (j = 0; j < n; j++) {
//		int colsum = 0;
//		for (i = 0; i < m; i++) {
//			colsum += arr[i][j];
//		}
//		cout << colsum << ' ';
//	}
//	cout << endl;
//	cout << allsum;
//
//	return 0;
//}
// 5.
//int main() {
//	char arr[100] = { 0 };
//	cin >> arr;
//	char search;
//	cin >> search;
//	int sl = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (int i = 0;i<sl; i++) {
//		if (arr[i] == search) {
//			cout << i;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag==0) {
//		cout << "no";
//	}
//	return 0;
//}
// 6.
//int main() {
//	int n = 0;
//	cin >> n;//输入插入前数字个数
//	int arr[100] = { 0 };//插入前的数组
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int k = 0;//查找的数
//	cin >> k;//输入查找的数
//	int ret = 0;//插入位置的临时拷贝
//	int flag = 0;//插入的数为最大的特殊情况
//	for (i = 0; i < n; i++) {
//		if (k <= arr[i]) {
//			ret = i;
//			flag = 1;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++) {
//		if (i == ret && flag==1) {//进过循环
//			cout << k<<' ';
//		}
//		cout << arr[i]<<' ';
//	}
//	if (flag == 0) {//没进过循环
//		cout << k;
//	}
//	return 0;
//}
// 8.
//int main() {
//	int n = 0;//数的数量
//	cin >> n;//输入数的数量
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];//输入数
//	}
//	int max = arr[0];//最大值
//	int min = arr[0];//最小值
//	for (i = 0; i < n; i++) {
//		max = max < arr[i] ? arr[i] : max;//先把最大值找出来
//	}
//	//然后再找那个最大值对应的下标
//	int maxlocat = 0;
//	for (i = 0; i < n; i++) {
//		if (max == arr[i]) {
//			maxlocat = i;//找到最大值的下标
//		}
//	}
//	for (i = 0; i < n; i++) {
//		min = min > arr[i] ? arr[i] : min;//先把最小值找出来
//	}
//	//然后再找那个最小值对应的下标
//	int minlocat = 0;
//	for (i = 0; i < n; i++) {
//		if (min == arr[i]) {
//			minlocat = i;//找到最小值的下标
//		}
//	}
//	//最大值最小值位置交换
//	int tmp = arr[maxlocat];
//	arr[maxlocat] = arr[minlocat];
//	arr[minlocat] = tmp;
//	//打印出交换后的数组
//	for (i = 0; i < n; i++) {
//		cout << arr[i]<<' ';
//	}
//	return 0;
//}
//11.
//int main() {
//	char arr[100] = { 0 };
//	cin >> arr;
//	int sl = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int i = 0;
//	for (i = 0; i < sl; i++) {
//		//对大小写字母进行分类
//		if (arr[i] <= 'Z' && arr[i] >= 'A') {//大写字母
//			if (arr[i] + 4 > 'Z') {//如果不够
//				arr[i] = 'A' +(4-1-( 'Z' - arr[i]));
//			}
//			else//如果够
//				arr[i] = arr[i] + 4;
//		}
//		if (arr[i] <= 'z' && arr[i] >= 'a') {//小写字母
//			if (arr[i] + 4 > 'z') {
//				arr[i] = 'a' + (4 - 1 - ('z' - arr[i]));
//			}
//			else
//				arr[i] = arr[i] + 4;
//
//		}
//	}
//	cout << arr;
//	return 0;
//}
//10.
//int main() {
//	char arr[100]={0};
//	cin >> arr;
//	int sl = sizeof(arr) / sizeof(arr[0]);
//	int countletter = 0;//统计字母的
//	int countnumber = 0;//统计数字的
//	int countother = 0;//统计其他字符的
//	for (int i = 0; i < sl; i++) {
//		if ((int)arr[i] == 0) {
//			break;//读取到0停止
//		}
//		if ((arr[i] <= 'Z' && arr[i] >= 'A') || (arr[i] <= 'z' && arr[i] >= 'a')) {//字母
//			countletter++;
//		}
//		else if (arr[i] <= '9' && arr[i] >= '0') {//数字
//			countnumber++;
//		}
//		else
//			countother++;
//	}
//	cout << countletter << ' ' << countnumber << ' ' << countother;
//	return 0;
//}
//7.
int main() {
	int n = 0;
	cin >> n;
	int i = 0;
	int arr[100][100] = { 0 };
	//先把图案初始化
	int leftup = 0;//左边的行
	int leftdown = 0;//左边的列
	int rightup = 2 * n - 2;//右边的行
	int rightdown = 2 * n - 2;//右边的列
	int lyer = 1;//层数
	while ((leftup<=rightdown)&&(leftdown<=rightup)) {
		for (i = leftdown; i <= rightup; i++) {//最上面一行
			arr[leftup][i] = lyer;
		}
		for (i = leftup; i <= rightdown; i++) {//最左面一列
			arr[i][leftdown] = lyer;
		}
		for (i = leftup; i <= rightdown; i++) {//最右面一列
			arr[i][rightup] = lyer;
		}
		for (i = leftdown; i <= rightup; i++) {//最下面一行
			arr[rightdown][i] = lyer;
		}
		leftup++; leftdown++;
		rightup--; rightdown--;
		lyer++;
	}
	
	//然后再打印
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n-1; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}