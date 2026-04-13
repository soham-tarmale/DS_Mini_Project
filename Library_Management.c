#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book
{
    int id;
    char name[50];
    char author[50];
    struct book *next;
}book;