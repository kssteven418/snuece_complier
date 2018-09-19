/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"
#include <stdio.h>
#include <stdlib.h>

#define  HASH_TABLE_SIZE   101

typedef struct nlist {
	struct nlist *next;
	id *data;
} nlist;

/*
typedef struct id {
	int tokenType;
	char *name;
	int count;
} id;
*/

int strCompare(char* x, int length, char* y){
	for (int i=0; i<length; i++){
		if (y[i]=='\0') 
			return 0; // y is shorter than x
		if (x[i] != y[i])
			return 0;
	}
	if (y[length] != '\0') return 0; // y is longer than x
	return 1;
	
}

static nlist *hashTable[HASH_TABLE_SIZE]; // initially NULL

id *enter(int tokenType, char *name, int length) {
	/* implementation is given here */
	
	/* First, get the index number */
	/* By adjusting some  hash function */

	int hash_index = 0;
	for (int i=0; i<length; i++){
		hash_index += (int)name[i];
	}
	hash_index /= HASH_TABLE_SIZE;

	/* Then go to the hash table entry of the given index */
	
	// 1) if hashTable entry is empty
	if(hashTable[hash_index]==NULL){
		
		//then, make a new nlist entry
		nlist* n_nlist = (nlist*)malloc(sizeof(nlist));
		
		n_nlist->next = NULL;
		
		n_nlist->data = (id*)malloc(sizeof(id));
		n_nlist->data->tokenType = tokenType;
		n_nlist->data->name = (char*)malloc(sizeof(char)*(length+1));
		for (int i=0; i<length+1; i++){ // copy string
			if (i==length) n_nlist->data->name[i] = '\0';
			else n_nlist->data->name[i] = name[i];
		}
		
		if (tokenType==0){ // if keyword, then only initiated at first time
			n_nlist->data->count = 0; // so, the count must be 0
		}
		else{ // if ID< initiated at runtime, when the token is first used
			n_nlist->data->count = 1; // so, the count must be 1
		}
		hashTable[hash_index] = n_nlist;
		return n_nlist->data;
	}

	// 2) if hashTable is not empty
	// then search if there already exists a entry with the same name value
	
	nlist* iter = hashTable[hash_index];
	while(1){

		// 2-1) if there exists a matching name in the list,
		if(strCompare(name, length, iter->data->name)){ 
			//simply increment the count value
			iter->data->count ++;
			return iter->data;
		}

		//at the end of the list
		if(iter->next == NULL)
			break;
		//otherwise, progress
		else
			iter = iter->next;
	}

	// 2-2) there does not exist a matching name,
	// then make a new entry and insert into the list
	
	nlist* n_nlist = (nlist*)malloc(sizeof(nlist));
		
	n_nlist->next = NULL;
		
	n_nlist->data = (id*)malloc(sizeof(id));
	n_nlist->data->tokenType = tokenType;
	n_nlist->data->name = (char*)malloc(sizeof(char)*(length+1));
	for (int i=0; i<length+1; i++){ // copy string
		if (i==length) n_nlist->data->name[i] = '\0';
		else n_nlist->data->name[i] = name[i];
	}

	if (tokenType==0){ // if keyword, then only initiated at first time
		n_nlist->data->count = 0; // so, the count must be 0
	}
	else{ // if ID< initiated at runtime, when the token is first used
		n_nlist->data->count = 1; // so, the count must be 1
	}
		
	iter->next = n_nlist;

	return n_nlist->data;


}


/*
*********************** DEBUGGING **********************

int main(){

	//DEBUGGING enter

	char* text = "qwertyuiopasdfghjklzxcvbnmdsct";
	
	//er
	id* temp = enter(0, &text[2], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//er
	temp = enter(0, &text[2], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);

	//e
	temp = enter(0, &text[2], 1);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);

	//ert
	temp = enter(0, &text[2], 3);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);

	//er
	temp = enter(0, &text[2], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//ert
	temp = enter(0, &text[2], 18);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	printf("**********************\n");
	//ds
	temp = enter(0, &text[26], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//ds
	temp = enter(0, &text[26], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//ct
	temp = enter(0, &text[28], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//ds
	temp = enter(0, &text[26], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//rty
	temp = enter(0, &text[3], 3);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);
	
	//er
	temp = enter(0, &text[2], 2);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);

	//ert
	temp = enter(0, &text[2], 3);
	printf("ID NAME : %s, COUNT : %d \n", temp->name, temp->count);

	
	//DEBUGGING strCompare

	int len = 6;
	char* t1 = "qwer";
	char* t2 = "qwert";
	char* t3 = "qwerty";
	char* t4 = "qwertyu";
	char* t5 = "qwertyi";
	char* t6 = "wertyu";
	
	printf("%d\n", strCompare(&text[0], len, t1)?1:0);
	printf("%d\n", strCompare(&text[0], len, t2)?1:0);
	printf("%d\n", strCompare(&text[0], len, t3)?1:0);
	printf("%d\n", strCompare(&text[0], len, t4)?1:0);
	printf("%d\n", strCompare(&text[0], len, t5)?1:0);
	printf("%d\n", strCompare(&text[0], len, t6)?1:0);
}
*/
