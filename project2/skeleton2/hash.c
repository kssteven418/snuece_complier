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


int strCompare(char* x, int length, char* y){
	// x is a character stream with length 'length'
	// y is a string, ended by \0
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
	hash_index %= HASH_TABLE_SIZE;

	/* Then go to the hash table entry of the given index */
	
	// 1) if hashTable entry is empty
	if(hashTable[hash_index]==NULL){
		
		//then, make a new nlist entry
		nlist* n_nlist = (nlist*)malloc(sizeof(nlist));
		
		n_nlist->next = NULL;
		
		n_nlist->data = (id*)malloc(sizeof(id));
		n_nlist->data->lextype = tokenType;
		n_nlist->data->name = (char*)malloc(sizeof(char)*(length+1));

		for (int i=0; i<length+1; i++){ 
			// copy string from 0th char to (length-1)th char
			// and insert \0 at last
			if (i==length) n_nlist->data->name[i] = '\0';
			else n_nlist->data->name[i] = name[i];
		}
		
		//let the list entry point the nlist data
		hashTable[hash_index] = n_nlist;
		return n_nlist->data;
	}

	// 2) if hashTable is not empty
	// then search if there already exists a entry with the same name value
	
	nlist* iter = hashTable[hash_index]; // first entry
	while(1){

		// 2-1) if there exists a matching name in the list,
		if(strCompare(name, length, iter->data->name)){ 
			//and return the modified data(w/ incrementede cnt)  entry
			return iter->data;
		}

		//if reached at the  end of the list
		//in this case, no matching entry.
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
	n_nlist->data->lextype = tokenType;
	n_nlist->data->name = (char*)malloc(sizeof(char)*(length+1));
	for (int i=0; i<length+1; i++){ 
		// copy string from 0th char to (length-1)th char
		// and insert \0 at last
		if (i==length) n_nlist->data->name[i] = '\0';
		else n_nlist->data->name[i] = name[i];
	}
		
	iter->next = n_nlist;

	return n_nlist->data;

}

