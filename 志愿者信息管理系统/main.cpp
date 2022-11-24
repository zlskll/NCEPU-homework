
#include"public.h"
int main() {
	//ifstream ifile;
	//创建链表
	Person* head=Create();
	//读入文档
	int count = read_txt(head, ".//input.txt");
	
	//打印
	/*Person* p_tool = head;
	int n = 0;
	while(n<count)
	{
		n++;
		cout << p_tool->next->number << '\t' << p_tool->next->name << '\t' <<p_tool->next->age<< '\t' <<p_tool->next->Sex<<'\t' <<p_tool->next->nation<< p_tool->next->score << endl;
		p_tool = p_tool->next;
	}*/

	//菜单
	//menu(".//out.txt");

	//读选项
	int switch_number = read_switch_number(".//menu.txt");

	//显示读了哪个选项
	//screen_switch_number(switch_number,".//out.txt");
	
	int search_number = 0;
	switch (switch_number)
	{
	case 1://查找
		search_number = read_search_number(".//find.txt"); 
		if (search_person(head , search_number,count) == 1 ) {
			out_search_person(head,search_number,".//out.txt");
		}
		else
		{
			search_number = 0;
			out_search_person(head, search_number,".//out.txt");
		}
		break;
	case 2://插入
		insert_person(head,".//insert.txt",count);
		count++;//插入以后人数多了，输出的时候也要跟上
		out_to_file(head, ".//out.txt",count);
		break;
	case 3://删除
		Delete_person(head,".//find.txt");
		count--;//删除了一个
		out_to_file(head, ".//out.txt",count);
		break;
	}
	return 0;
}