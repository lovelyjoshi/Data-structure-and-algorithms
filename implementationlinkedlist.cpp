//implementation of linked list
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class Linkedlist{
    public:
    node *head ;
    Linkedlist()
    {
        head=NULL;
    }
    void insert(int value)
    {
        node *newnode = new node;
        newnode ->data = value;
        newnode ->next = NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            node *temp = head;
            while(temp->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next=newnode;
        }
    }
    

//display linked list
void display()
{
    node *temp =head;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
};
int main(){
    Linkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    return 0;
}