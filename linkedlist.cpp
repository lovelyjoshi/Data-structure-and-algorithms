//creation of node
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //create constructor
    Node(int val){
    data = val;
    next = NULL;
    }
};
int main()
{
    Node *HEAD;
    HEAD = new Node(4);
    return 0;
}