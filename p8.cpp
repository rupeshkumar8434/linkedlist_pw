#include <iostream>
//delete at kth position
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
void deletepos(node*&head,int pos){
   if(pos==0){
    deletathead(head);
    return;
   }
    int curr_pos=0;
    //prev is ponting to node at pos-1
    node*prev=head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    node*temp=prev->next;//node jo ki delete karna hai
    prev->next=prev->next->next;
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
{
    node*n1=new node(5);
    node*head=n1;
    node*n2=new node(6);
    node*n3=new node(3);
    n1->next=n2;
    n2->next=n3;
    display(head);
    deletepos(head,1);
    display(head);
    return 0;
}