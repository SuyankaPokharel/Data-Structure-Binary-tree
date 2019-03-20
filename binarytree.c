#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"
#include "boolean.h"

void init(binarytree *t){
   (*t)=NULL;
}
boolean is_empty(binarytree t){
   if(t==NULL)
      return TRUE;
   else{
      return FALSE;
   }
}

boolean is_full(binarytree t){
   binarytree temp;
   temp=((binarytree)malloc(sizeof(struct treenode)));
   if(temp==NULL)
      return TRUE;
   else{
      free(temp);
      return FALSE;
   }
}

void add(binarytree *t,int x){
if((*t)==NULL){
   (*t)= ((binarytree)malloc(sizeof(struct treenode)));
   (*t)->data=x;
   (*t)->left= (NULL);
   (*t)->right = (NULL);
}
else{
   if(x<=((*t)->data))
      add(&((*t)->left),x);
   else
      add(&((*t)->right),x);
}
}

void delete(binarytree *t,int x){
   binarytree temp;
   if(*t !=NULL){
      if((*t)->data==x){
         if(((*t)->left==NULL) && ((*t)->right==NULL)){
            temp=(*t);
            (*t)=NULL;
            free(temp);
         }
         if(((*t)->left==NULL) && ((*t)->right!=NULL)){
            temp=(*t);
            (*t)=(*t)->left;
            free(temp);
         }
         if(((*t)->left=NULL) && ((*t)->right==NULL)){
            temp=(*t);
            (*t)=(*t)->right;
            free(temp);
         }
         if(((*t)->left!=NULL) && ((*t)->right!=NULL)){
            temp=(*t)->right;
            while(temp->left !=NULL){
               temp=temp->left;
               temp->left=(*t)->left;
               temp=(*t);
               (*t)=(*t)->right;
               free(temp);
            }
          }
      else{
          if(x<=(*t)->data)
             delete(&((*t)->left),x);
          else{
             delete(&((*t)->right),x);
          }
      }
      }
   else{
      printf("Error! the data you have entered is not valid to delete\n");
   }
   }
}
  
void LNR(binarytree t){
   if(t !=NULL){
      LNR(t->left);
      printf("%d\n",t->data);
      LNR(t->right);
   }
}

void RNL(binarytree t){
   if(t !=NULL){
      RNL(t->right);
      printf("%d\n",t->data);
      RNL(t->left);
   }
}










                                                                                                                     
   
