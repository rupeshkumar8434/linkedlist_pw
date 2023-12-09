#include <iostream>
//insert at end of linked list jab give head pointer
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

//jab temp->next==NULL matlab ham last node par pahuch gye hain


void insertattail(node*&head,int val){
    node*new_node=new node(val);
    node*temp=head;
    //jab tak temp ka next null nhi ho jata tab tak 
    //aage badhte rhe
    while(temp->next!=NULL){
      //aage kaise badhte hain(temp me temp ka next daal ke )
      temp=temp->next;

    }
    //temp has reached at last ab las me add kar do 
    temp->next=new_node;
    //aur chuki new_node ke next me already null hai mtlab wo last node hai
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
    insertattail(head,7);
    
    display(head);
    

    return 0;
}