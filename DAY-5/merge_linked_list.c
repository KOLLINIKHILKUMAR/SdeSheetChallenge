 // Definition for singly-linked list.
#include<stdio.h>
#include<stdlib.h>
/*struct ListNode 
{
      int val;
      struct ListNode *next;
};*/
struct ListNode *temp=NULL,*newnode,*head=NULL;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    int arr[100],i,j,tp,n=0;
    temp=list1;//edge case condition
    if(list1==NULL&&list2!=NULL)
    {
        return list2;
    }
    else if(list2==NULL&&list1!=NULL)
    {
        return list1;
    }
    else if(list1==NULL&&list2==NULL)
    {
        return list1;
    }
    
    else 
    {
     while(temp->next!=NULL)
     {
      temp=temp->next;
     }
     temp->next=list2;
    
     temp=list1;
     i=0;
     while(temp!=NULL)
     {
        arr[i]=temp->val;
        temp=temp->next;
        n=i+1;
        i++;            
     }
    
     for(i = 0; i < n; i++)    
     {    
      for(j = i+1; j < n; j++)    
        {    
            if(arr[j] < arr[i])    
            {    
                tp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = tp;     
            }     
        }     
     }  
    for(i=0;i<n;i++)
    {
        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(head==NULL)
        {
            head=newnode;
            newnode->val=arr[i];
            newnode->next=NULL;            
        }

        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->val=arr[i];
            newnode->next=NULL;
          
        }    
        
     }
        temp=head;
        head=NULL;
        return temp;
    }
    

}

