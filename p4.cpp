#include <iostream>
//insert at arbitrary position
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
void inseratpos(node*&head,int val,int pos){
  //if pos==0 mtlab starting me add karna hai
  if(pos==0){
    insertathead(head, val);
    return ;
  } 
  node*new_node=new node(val);
  node*temp=head;
  int curr_pos=0;
  while(curr_pos!=pos-1){
    temp=temp->next;
    curr_pos++;
  }
  //temp pahuch gya hai pos-1 tak
  new_node->next=temp->next;
  temp->next=new_node;
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
    n1->next=n2;
    inseratpos(head ,9,2);
    display(head);
    return 0;
}