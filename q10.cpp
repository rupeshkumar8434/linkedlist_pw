#include <iostream>
//delete duplicate from sorted linked list
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
void deleduplicate(node*head){
    node*curr_node=head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL&&curr_node->data==curr_node->next->data){
           //delete curr->next 
           node*temp=curr_node->next;
           curr_node->next=curr_node->next->next;
           free(temp);
        }
        //this loop will end when current node and nxt nodenka value different
        //or linked list ends 
        curr_node=curr_node->next;
    }
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
    node*n3=new node(6);
    node*n4=new node(6);
    node*n5=new node(3);
    node*n6=new node(4);
    node*n7=new node(3);
    
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    display(head);
    deleduplicate(head);
     display(head);

    return 0;
}