#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct Stu {
    int number;
    char name[20];
    int age;
    Stu* next;
};

Stu* Create(int stu_amount) //动态链表的创建
{
    Stu* head = new Stu; //生成头结点
    head->next = NULL;
    Stu* p1, * p2;
    int n = 0;
    p1 = new Stu; //开辟新单元，p1,p2指针指向它
    p2 = p1;
    if (p1 != NULL && p2 != NULL) {
        cin >> p1->number >> p1->name >> p1->age; //首元结点
    }
    //其他结点：
    while (n < stu_amount)
    {  
        n++;
        if (n == 1) //是头结点
        {
            head->next = p1; //设置头指针
            if (stu_amount == 1) {
                break;
            }
        }
        //是表结点
        else
        {
            p2->next = p1; //把当前的表结点给接到上一个循环开出来的p2的尾巴上，实现结点连接
        }
        
        p2 = p1;      //把当前的结点存档，就是连上以后准备搞下一个结点
        if (n < stu_amount) {
            p1 = new Stu;//搞下一个结点
            cin >> p1->number >> p1->name >> p1->age;
        }
    }
    p2->next = NULL; //及时置空
    
    return (head);   //返回整个链表的头指针
}

bool IsNameBig(Stu* p2,Stu* p1) {
    int i = 0;
    size_t len_p2 = strlen(p2->name);
    size_t len_p1 = strlen(p1->name);
    int max_len = len_p2 > len_p1 ? len_p2 : len_p1;
    for (i = 0 ; i < max_len ; i++) {
        if (p2->name[i] > p1->name[i]) {
            return true;//大了
        }
        else if (p2->name[i] < p1->name[i]) {
            return false;
        }
    }
    return false;//小
}


void NameSort(Stu* head,int stu_amount) {
    Stu* p1 = head->next;
    Stu* p2 = head;
    int i = 0;
    for(i=stu_amount;i >= 0;i--){
        //一趟冒泡排序
        int count = 0;
        while ((p1->next != NULL) && (count<=i)) {
            count++;
            Stu* tool = p2;//用于换位置的工具
            p2 = p1;//p2跟上
            if (p1->next == NULL) {
                break;
            }
            else {
                p1 = p1->next;//指向下一个
            }
            //冒泡排序
            if (IsNameBig(p2,p1)) 
            {
                //把p1和之前的连起来
                tool->next = p1;
               //用tool_2存储p1原来后面的成员
                Stu* tool_2 = p1;
                tool_2 = p1->next;
                
                //交换的双方连接
                p1->next=p2;
                //交换后的在后面的成员要连上原先占据这个位置的成员连的那个人
                p2->next = tool_2;
                //这时候p1在后面，要让p1 p2同步
            }
            if (p2->next == NULL) {
                p1 = p2;
            }
            
        }
        p1 = head->next;
        p2 = head;
    }
}
void PrintStu(Stu* head) {
    Stu* p = head;
    while (p->next != NULL) {
        cout <<std::right<<setw(3)<< p->next->number << std::right << setw(6) << p->next->name << std::right << setw(3) << p->next->age << endl;
        p = p->next;
    }
}

void AgeSort(Stu* head, int stu_amount) {
    Stu* p1 = head->next;
    Stu* p2 = head;
    int i = 0;
    
    for (i = stu_amount; i >= 0; i--) {
        //一趟冒泡排序
        int count = 0;
        while ((p1->next != NULL) && (count <= i)) {
            count++;
            Stu* tool = p2;//用于换位置的工具
            p2 = p1;//p2跟上
            if (p1->next == NULL) {
                break;
            }
            else {
                p1 = p1->next;//指向下一个
            }
            //冒泡排序
            if (p2->age > p1->age)
            {
                //把p1和之前的连起来
                tool->next = p1;
                //用tool_2存储p1原来后面的成员
                Stu* tool_2 = p1;
                
               tool_2 = p1->next;
                
                //交换的双方连接
                p1->next = p2;
                //交换后的在后面的成员要连上原先占据这个位置的成员连的那个人
                p2->next = tool_2;
                //这时候p1在后面，要让p1 p2同步
                
            }
            if (p2->next == NULL) {
                p1 = p2;
            }
        }
        p1 = head->next;
        p2 = head;
        
    }
}
int main() {
    int stu_amount = 0;
    cin >> stu_amount;
    //创建链表
    Stu* head=Create(stu_amount);
    //姓名排序
    NameSort(head, stu_amount);
    //打印
    PrintStu(head);
    cout << endl;
    //年龄排序
    AgeSort(head, stu_amount);
    PrintStu(head);
    return 0;
}