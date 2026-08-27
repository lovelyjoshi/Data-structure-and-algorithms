//count the total no of nodes present in linked list
int countNodes()
{
    int count = 0;
    node *temp = head;
//condition
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
