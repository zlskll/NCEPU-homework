#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//9.
//int FibonacciNumber(int n) {//������쳲�������
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
//		sum += FibonacciNumber(i);//Ȼ���ټӺ�
//	}
//	cout << sum;
//	return 0;
//}
// 12.
//int main() {
//	int arr[100]={ 0 };
//	int i = 0;
//	double sum = 0;//��ƽ���������
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
//	int i = 0;//��
//	int j = 0;//��
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
//	}//�ҳ���ÿ�е����ֵ
//	cout << endl;
//	for (j = 0; j< n; j++) {
//		int every_row_min = arr[0][j];//ע��ӵ�0�п�ʼ
//		for (i = 0; i < m; i++) {
//			every_row_min = every_row_min > arr[i][j] ? arr[i][j] : every_row_min;
//		}
//		cout << every_row_min << ' ';
//	}//�ҳ�ÿ�е���Сֵ
//	return 0;
//}
// 2.
//bool IsPrime(unsigned int n){
//	unsigned int i = 0;
//	if (n == 1 || n==0) {
//		return false;//��������
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
//void Line(int* p, int sl) {//ð������
//	for (int i = 0; i < sl; i++) {
//		int j = 0;
//		while (j < sl-1-i) {
//			if (*(p+j) < *(p +j + 1)) {
//				int tmp = *(p+j);
//				*(p+j) = *(p + j + 1);
//				*(p + j + 1) = tmp;//����
//			}
//			p++  p����㲻�ܱ䣡��
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
//		cin >> arr[i];//������һ����
//	}
//	int j = 0;
//	for (i = 0; i < n; i++) {//�������ÿһ������������ɸѡ
//		int ret = 0;
//		if (IsPrime(arr[i])) {//������
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
//	Ȼ���arr2[]���������ok��
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
//	int m = 0;//��
//	int n = 0;//��
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
//		int rowsum = 0;//��һ��Ҫ�����⣬��Ҫ�����һ�������������ݣ���ֹ����
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
//	cin >> n;//�������ǰ���ָ���
//	int arr[100] = { 0 };//����ǰ������
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int k = 0;//���ҵ���
//	cin >> k;//������ҵ���
//	int ret = 0;//����λ�õ���ʱ����
//	int flag = 0;//�������Ϊ�����������
//	for (i = 0; i < n; i++) {
//		if (k <= arr[i]) {
//			ret = i;
//			flag = 1;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++) {
//		if (i == ret && flag==1) {//����ѭ��
//			cout << k<<' ';
//		}
//		cout << arr[i]<<' ';
//	}
//	if (flag == 0) {//û����ѭ��
//		cout << k;
//	}
//	return 0;
//}
// 8.
//int main() {
//	int n = 0;//��������
//	cin >> n;//������������
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		cin >> arr[i];//������
//	}
//	int max = arr[0];//���ֵ
//	int min = arr[0];//��Сֵ
//	for (i = 0; i < n; i++) {
//		max = max < arr[i] ? arr[i] : max;//�Ȱ����ֵ�ҳ���
//	}
//	//Ȼ�������Ǹ����ֵ��Ӧ���±�
//	int maxlocat = 0;
//	for (i = 0; i < n; i++) {
//		if (max == arr[i]) {
//			maxlocat = i;//�ҵ����ֵ���±�
//		}
//	}
//	for (i = 0; i < n; i++) {
//		min = min > arr[i] ? arr[i] : min;//�Ȱ���Сֵ�ҳ���
//	}
//	//Ȼ�������Ǹ���Сֵ��Ӧ���±�
//	int minlocat = 0;
//	for (i = 0; i < n; i++) {
//		if (min == arr[i]) {
//			minlocat = i;//�ҵ���Сֵ���±�
//		}
//	}
//	//���ֵ��Сֵλ�ý���
//	int tmp = arr[maxlocat];
//	arr[maxlocat] = arr[minlocat];
//	arr[minlocat] = tmp;
//	//��ӡ�������������
//	for (i = 0; i < n; i++) {
//		cout << arr[i]<<' ';
//	}
//	return 0;
//}
//11.
//int main() {
//	char arr[100] = { 0 };
//	cin >> arr;
//	int sl = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sl; i++) {
//		//�Դ�Сд��ĸ���з���
//		if (arr[i] <= 'Z' && arr[i] >= 'A') {//��д��ĸ
//			if (arr[i] + 4 > 'Z') {//�������
//				arr[i] = 'A' +(4-1-( 'Z' - arr[i]));
//			}
//			else//�����
//				arr[i] = arr[i] + 4;
//		}
//		if (arr[i] <= 'z' && arr[i] >= 'a') {//Сд��ĸ
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
//	int countletter = 0;//ͳ����ĸ��
//	int countnumber = 0;//ͳ�����ֵ�
//	int countother = 0;//ͳ�������ַ���
//	for (int i = 0; i < sl; i++) {
//		if ((int)arr[i] == 0) {
//			break;//��ȡ��0ֹͣ
//		}
//		if ((arr[i] <= 'Z' && arr[i] >= 'A') || (arr[i] <= 'z' && arr[i] >= 'a')) {//��ĸ
//			countletter++;
//		}
//		else if (arr[i] <= '9' && arr[i] >= '0') {//����
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
	//�Ȱ�ͼ����ʼ��
	int leftup = 0;//��ߵ���
	int leftdown = 0;//��ߵ���
	int rightup = 2 * n - 2;//�ұߵ���
	int rightdown = 2 * n - 2;//�ұߵ���
	int lyer = 1;//����
	while ((leftup<=rightdown)&&(leftdown<=rightup)) {
		for (i = leftdown; i <= rightup; i++) {//������һ��
			arr[leftup][i] = lyer;
		}
		for (i = leftup; i <= rightdown; i++) {//������һ��
			arr[i][leftdown] = lyer;
		}
		for (i = leftup; i <= rightdown; i++) {//������һ��
			arr[i][rightup] = lyer;
		}
		for (i = leftdown; i <= rightup; i++) {//������һ��
			arr[rightdown][i] = lyer;
		}
		leftup++; leftdown++;
		rightup--; rightdown--;
		lyer++;
	}
	
	//Ȼ���ٴ�ӡ
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n-1; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}