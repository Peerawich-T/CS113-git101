//6210400167 Peerawich Tantavachkij
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node *next;
};


void main()
{    
    int input =0 ;
    struct node *node, *head= NULL, *tmp,  *check, *prev;
   while (scanf("%d", &input) == 1) {
       if (input <= -1)
          {break;}
       node = (struct node*)malloc(sizeof(struct node));
       if(head==NULL)
       {
         tmp = head = node;
        

       }
       else
       { 
        if(input < (head -> data))
        {
            node -> next = head;
            head  =  node;
            
        }
        if(input < (tmp -> data))
        {
          for(prev  = head,check =head;check ;check =  check -> next )
          {  
           
            if((input <  (check -> data)) && (input>= (prev -> data)))
            {
                node -> next  = check;
                prev -> next  = node;
            }
            if(head != check && (prev-> next != NULL))
            {
                prev  = prev -> next;
            }
           
          }
          
        }
        if(input >= (tmp -> data ))
        {tmp -> next = node   ;
         tmp  = node;
         
        }
        
       }
       tmp -> next = NULL;
       node -> data = input;
      
       }
   
   
  for (tmp=head; tmp; tmp = tmp->next)
     printf("%d\n", tmp->data);

}