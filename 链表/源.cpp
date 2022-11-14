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

Stu* Create(int stu_amount) //��̬����Ĵ���
{
    Stu* head = new Stu; //����ͷ���
    head->next = NULL;
    Stu* p1, * p2;
    int n = 0;
    p1 = new Stu; //�����µ�Ԫ��p1,p2ָ��ָ����
    p2 = p1;
    if (p1 != NULL && p2 != NULL) {
        cin >> p1->number >> p1->name >> p1->age; //��Ԫ���
    }
    //������㣺
    while (n < stu_amount)
    {  
        n++;
        if (n == 1) //��ͷ���
        {
            head->next = p1; //����ͷָ��
            if (stu_amount == 1) {
                break;
            }
        }
        //�Ǳ���
        else
        {
            p2->next = p1; //�ѵ�ǰ�ı�����ӵ���һ��ѭ����������p2��β���ϣ�ʵ�ֽ������
        }
        
        p2 = p1;      //�ѵ�ǰ�Ľ��浵�����������Ժ�׼������һ�����
        if (n < stu_amount) {
            p1 = new Stu;//����һ�����
            cin >> p1->number >> p1->name >> p1->age;
        }
    }
    p2->next = NULL; //��ʱ�ÿ�
    
    return (head);   //�������������ͷָ��
}

bool IsNameBig(Stu* p2,Stu* p1) {
    int i = 0;
    size_t len_p2 = strlen(p2->name);
    size_t len_p1 = strlen(p1->name);
    int max_len = len_p2 > len_p1 ? len_p2 : len_p1;
    for (i = 0 ; i < max_len ; i++) {
        if (p2->name[i] > p1->name[i]) {
            return true;//����
        }
        else if (p2->name[i] < p1->name[i]) {
            return false;
        }
    }
    return false;//С
}


void NameSort(Stu* head,int stu_amount) {
    Stu* p1 = head->next;
    Stu* p2 = head;
    int i = 0;
    for(i=stu_amount;i >= 0;i--){
        //һ��ð������
        int count = 0;
        while ((p1->next != NULL) && (count<=i)) {
            count++;
            Stu* tool = p2;//���ڻ�λ�õĹ���
            p2 = p1;//p2����
            if (p1->next == NULL) {
                break;
            }
            else {
                p1 = p1->next;//ָ����һ��
            }
            //ð������
            if (IsNameBig(p2,p1)) 
            {
                //��p1��֮ǰ��������
                tool->next = p1;
               //��tool_2�洢p1ԭ������ĳ�Ա
                Stu* tool_2 = p1;
                tool_2 = p1->next;
                
                //������˫������
                p1->next=p2;
                //��������ں���ĳ�ԱҪ����ԭ��ռ�����λ�õĳ�Ա�����Ǹ���
                p2->next = tool_2;
                //��ʱ��p1�ں��棬Ҫ��p1 p2ͬ��
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
        //һ��ð������
        int count = 0;
        while ((p1->next != NULL) && (count <= i)) {
            count++;
            Stu* tool = p2;//���ڻ�λ�õĹ���
            p2 = p1;//p2����
            if (p1->next == NULL) {
                break;
            }
            else {
                p1 = p1->next;//ָ����һ��
            }
            //ð������
            if (p2->age > p1->age)
            {
                //��p1��֮ǰ��������
                tool->next = p1;
                //��tool_2�洢p1ԭ������ĳ�Ա
                Stu* tool_2 = p1;
                
               tool_2 = p1->next;
                
                //������˫������
                p1->next = p2;
                //��������ں���ĳ�ԱҪ����ԭ��ռ�����λ�õĳ�Ա�����Ǹ���
                p2->next = tool_2;
                //��ʱ��p1�ں��棬Ҫ��p1 p2ͬ��
                
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
    //��������
    Stu* head=Create(stu_amount);
    //��������
    NameSort(head, stu_amount);
    //��ӡ
    PrintStu(head);
    cout << endl;
    //��������
    AgeSort(head, stu_amount);
    PrintStu(head);
    return 0;
}