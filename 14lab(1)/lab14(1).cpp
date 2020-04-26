#include <iostream>
using namespace std;

 int main()
{
    cout << "Type the numbers (press ctrl+z to stop typing)"<< endl;
    struct node
    {
        double val;        // ��������
        node *next;     // ��������� �� ��������� ����
    };

    node * head = 0; // ������ ����� ��������� ����
    node * curr = head;    // ������ ����� �������� ����
    node * r;
    double x;
    while(cin >> x)
    {
        if(!head)   // ���� ��������� ���� ���
        {
            head = new node;               // �������� ��������� ����
            head->val = x;                 // ��������
            head->next = NULL;            // ��� ���������� ����

            curr = head;                   // ������� ����
        }

        // ���� �������� ������� ����
        else
        {
            curr->next = new node;         // �������� ����
            curr = curr->next;            // ������� �� ���� ����
            curr->val = x;                 // ��������
            curr->next = NULL;             // ����� ������
        }
    }



    // ������ � ������ �� ����� � ������� �����
    curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;            // ������� � ���������� ����
    }
    cout << endl << endl;
    curr = head;
    int i=1;
    while (curr != NULL)
    {
        if (i%2==0)
        {
         node* r=curr;
         curr = curr->next;
         delete r;
         i++;
        }
        else
        {
        cout << curr->val << " ";
        curr = curr->next;
        i++;
        }
    }


    return 0;
}
