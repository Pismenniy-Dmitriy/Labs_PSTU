#include <iostream>
using namespace std;

 int main()
{
    cout << "Type the numbers (press ctrl+z to stop typing)"<< endl;
    struct node
    {
        double val;        // значение
        node *next;     // указатель на следующий узел
    };

    node * head = 0; // хранит адрес головного узла
    node * curr = head;    // хранит адрес текущего узла
    node * r;
    double x;
    while(cin >> x)
    {
        if(!head)   // если головного узла нет
        {
            head = new node;               // создание головного узла
            head->val = x;                 // значение
            head->next = NULL;            // нет следующего узла

            curr = head;                   // текущий узел
        }

        // если головной элемент есть
        else
        {
            curr->next = new node;         // создание узла
            curr = curr->next;            // переход на этот узел
            curr->val = x;                 // значение
            curr->next = NULL;             // конец списка
        }
    }



    // печать с начала до конца с помощью цикла
    curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;            // переход к следующему узлу
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
