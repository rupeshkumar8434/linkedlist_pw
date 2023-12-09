#include <iostream>
//traversal in linked list
//insert at head
using namespace std;
class node{
  public:
  int data;
  node*next;

  node(int data){
    this->data=data;
    this->next=NULL;
  }
};
void insertathead(node*&head,int val){
    node*new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
      cout<<temp->data<<"->"; 
      temp=temp->next; 
    }cout<<"NULL"<<endl;
}
int main()
{   //sabse pahle head pinter ko null rkhe
    node*head=NULL;
    insertathead(head,2);
    insertathead(head,6);
    insertathead(head,8);
    display(head);

    return 0;
}