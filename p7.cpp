#include <iostream>
//delete at tail
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
void deletail(node*&head){
   node*second_last=head;
   // last node ko delete karne ke liye mujhe 2nd last node pe pahuchna padega
   while(second_last->next->next!=NULL){
     second_last=second_last->next;
   } 
   node*last=second_last->next;
   second_last->next=NULL;
   free(last);
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
      cout<<temp->data<<"->"; 
      temp=temp->next; 
    }cout<<"NULL"<<endl;
}
int main()
{
    node*n1=new node(5);
    node*head=n1;
    node*n2=new node(6);
    node*n3=new node(3);
    n1->next=n2;
    n2->next=n3;
    display(head);
    deletail(head);
    display(head);
    return 0;
}