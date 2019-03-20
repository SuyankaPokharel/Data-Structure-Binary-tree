#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"
#include "boolean.h"
/*
Name: Suyanka Pokharel
Course: Computer Programming II
*/
int menu(void); 

int main(void){
    binarytree root;
    int choice,new_num;
    init(&root);
    int data;
    choice = menu();


    while(choice !=4){
      
       switch(choice){
          case 1: if(!is_full(root)){
                    printf("Enter a data to add to the tree:\n");
                    scanf("%d",&new_num);
                    add(&root,new_num);
                  }
                  else{
                    printf("Error! Binary Tree is full\n");
                  }
                  break;
   
          case 2: if(!is_empty(root)){
                    printf("Enter the number that has to be deleted\n");
                    scanf("%d",&new_num);
                    delete(&root,new_num);
                  }
                  else{
                    printf("Error!Binary Tree is empty\n");
                  }
                  break;
      
          case 3: if(!is_empty(root)){
                    LNR(root);
                  }
                  else{
                    printf("Error!Binary Tree is empty\n");
                  
                  }
                  break;

          case 4: if(!is_empty(root)){
                    RNL(root);
                  }
                  else{
                    printf("Error!Binary Tree is empty\n");
                  }
                  break;          
 
          default:
                    printf("%d is not a valid selection\n",choice);
      
       }
    choice= menu();
    }
}
int menu(void){
   int selection;
   printf("1:Add\n");
   printf("2:Delete\n");
   printf("3:LNR\n");
   printf("4:RNL\n");
   printf("5:Quit\n");
   printf("Enter a selection\n");
   scanf("%d",&selection);
   return (selection);
}



