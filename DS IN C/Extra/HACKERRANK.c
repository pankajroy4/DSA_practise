
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* start, int data) {
    DoublyLinkedListNode* p,*temp;
    p=(DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    p->data=data;
    if(start==NULL){
        p->prev=NULL;
        start=p;
        p->next=NULL;
        return start;
    } 
    if(data<start->data){
        p->next=start;
        p->prev=NULL;
        start=p;
        return p;
    } 
    temp=start;
    if(data==temp->data){
        p->prev=temp->prev->next;
        p->next=temp;
        temp->prev=p;
        return start;
    }
    temp=start;
    while(temp->next!=NULL && temp->data<data){
            temp=temp->next;
        }
    if(temp->data>data){
        p->prev=temp->prev;
        temp->prev->next=p;
        p->next=temp;
        temp->prev=p;
        return start;
        
    }
    else{
        p->next=NULL;
        p->prev=temp;
        temp->next=p;
        return start;  
    }

}
// =====================================

