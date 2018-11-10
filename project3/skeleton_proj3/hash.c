/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"

#define  HASH_TABLE_SIZE   101

struct nlist {
   struct nlist *next;
   struct id *data;
};

static struct nlist *hashTable[HASH_TABLE_SIZE];

unsigned hash(char *name) {
   /* implementation is given here */
}

struct id *enter(int lextype, char *name, int length) {
   /* implementation is given here */
}

struct id *lookup(char *name) {
   /* implementation is given here */
}

