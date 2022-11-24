#include"public.h"

Person* Create()
{
    Person* head = new Person; //生成头结点
    Person* p1, * p2;
    int n = 0;
    p1 = p2 = new Person;    //开辟新单元，p1,p2指针指向它

    ////建立字节流
    //ifstream ifile;
    //string str;
    ////打开文件
    //ifile.open("file1.txt", ios::in);
    //getline(ifile, str);

   // cin >> p1->number >> p1->name >> p1->score; //首元结点
    //其他结点：
    
    while (n<MAX_COUNT)
    {
        n++;
        if (n == 1) //p1是首元结点
        {
            head->next = p1; //把头结点和首元结点连起来
        }
        //是表结点
        else
        {
            p2->next = p1;//把当前的表结点给接到上一个循环开出来的p2的尾巴上，实现结点连接
        }
        p2 = p1;      //把当前的结点存档，就是连上以后准备搞下一个结点
        p1 = new Person; //搞下一个结点
       // cin >> p1->number >> p1->name >> p1->score;
    }
    p2->next = NULL; //及时置空
    return (head);   //返回整个链表的头指针
}