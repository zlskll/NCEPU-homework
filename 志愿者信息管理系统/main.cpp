
#include"public.h"
int main() {
	//ifstream ifile;
	//��������
	Person* head=Create();
	//�����ĵ�
	int count = read_txt(head, ".//input.txt");
	
	//��ӡ
	/*Person* p_tool = head;
	int n = 0;
	while(n<count)
	{
		n++;
		cout << p_tool->next->number << '\t' << p_tool->next->name << '\t' <<p_tool->next->age<< '\t' <<p_tool->next->Sex<<'\t' <<p_tool->next->nation<< p_tool->next->score << endl;
		p_tool = p_tool->next;
	}*/

	//�˵�
	//menu(".//out.txt");

	//��ѡ��
	int switch_number = read_switch_number(".//menu.txt");

	//��ʾ�����ĸ�ѡ��
	//screen_switch_number(switch_number,".//out.txt");
	
	int search_number = 0;
	switch (switch_number)
	{
	case 1://����
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
	case 2://����
		insert_person(head,".//insert.txt",count);
		count++;//�����Ժ��������ˣ������ʱ��ҲҪ����
		out_to_file(head, ".//out.txt",count);
		break;
	case 3://ɾ��
		Delete_person(head,".//find.txt");
		count--;//ɾ����һ��
		out_to_file(head, ".//out.txt",count);
		break;
	}
	return 0;
}