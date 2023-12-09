#include <iostream>
//update at kth pos
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
void update(node*&head,int k,int val){
    node*temp=head;
    int curr_pos=0;
    //while ke andar wale line ka matlab hua ki jab currpos k ke equal na ho jaye tab tak aage badhte rhe
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    temp->data=val;
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
    display(head);
    update(head,1,4);
    display(head);

    return 0;
}