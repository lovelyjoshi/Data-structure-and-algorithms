void insertatfront(int value)
{
    node *newnode=new node;
    if(head==NULL)
    {
        temp=head=newnode;
    }
    else{
        newnode->data = value;
        newnode->next=head;
        head=newnode;
    }

}

