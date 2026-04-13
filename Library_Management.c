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

typedef struct library
{
    book *start;
}library;

int main()
{
    int ch, id;
    char name[50], author[50];
    library l;
    l.start = NULL;
}