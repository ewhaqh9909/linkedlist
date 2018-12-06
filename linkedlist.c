#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{
	int data;
	void *next;
	//struct linknode *next;
}linknd_t;



static linknd_t *list; //linked list ½ÇÃ¼ 
 
 
 linknd_t* create_node(int value){
 	linknd_t* ndPtr;
 	ndPtr=(linknd_t*)malloc(sizeof(linknd_t));
 	if(ndPtr==NULL)
 	{
 		printf("ERROR\n");
 		return NULL;
	 }
 	ndPtr->data=value;
 	ndPtr->next-NULL;
	 
	 return ndPtr; 
 }
