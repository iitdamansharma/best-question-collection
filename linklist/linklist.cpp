#include<iostream> 
using namespace std;
//we are creating linklest becouse we know  
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
// Inserting next element in the teil of the linklist. 
// note that (node* &head is for like we are denoted 
void insertAtTail(node* &head, int val ){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
//This function is simpely print all the value you know.  
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
//Now for Inserting the number in frunt you konw for onserting the number so 
// for that I am writing inserting function. 
 
 //note that pass by value is very important becouse it access the value thich is present at that adress. this the conclution. 
void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next= head;
    head=n;
    return ;
}

// Now I Have to make the function which actully that
//search the value which user is provided and 
bool search(node* head, int key ){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
} 
// In this code we all know That we are going to n-1 node
//but problem is arresed when we are going to deleted the value of node which is present in the first place that going to created the mess the. 

// For the eadg cases we have to make the another function 
void deleteAtHead(node* &head){
    node* todelete=head;
    head = head->next;
    delete todelete;
    
}

void delection(node* head, int val ){
    //Know corner case when no value is present in the node so we can. 
    if(head==NULL){
        return ;
    }

    node* temp =head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
  node* head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,8);
  insertAthead(head,0);
  display(head);
  delection(head,1);
  display(head);
    return 0;
}

