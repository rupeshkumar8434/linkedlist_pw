#include <iostream>
//delete at start
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
void deletathead(node*&head){
    node*temp =head;
    head=head->next;
    free(temp);
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
      cout<<temp->data<<"->"; 
      temp=temp->next; 
    }cout<<"NULL"<<endl;
}
int main()
{    node*n1=new node(5);
    node*head=n1;
    node*n2=new node(6);
    node*n3=new node(3);
    n1->next=n2;
    n2->next=n3;
    display(head);
    deletathead(head);
    display(head);
    return 0;
}