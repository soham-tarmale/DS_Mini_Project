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

void addBook(library *l, int id, char name[], char author[])
{
    book *newrec, *p;
    newrec = (book*)malloc(sizeof(book));

    newrec->id = id;
    strcpy(newrec->name, name);
    strcpy(newrec->author, author);
    newrec->next = NULL;

    if(l->start == NULL)
    {
        l->start = newrec;
    }
    else
    {
        p = l->start;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = newrec;
    }
}

void display(library *l)
{
    book *p;
    if(l->start == NULL)
    {
        printf("\nNo books available...\n");
    }
    else
    {
        p = l->start;
        while(p != NULL)
        {
            printf("\nID: %d", p->id);
            printf("\nName: %s", p->name);
            printf("\nAuthor: %s\n", p->author);
            p = p->next;
        }
    }
}

int main()
{
    int ch, id;
    char name[50], author[50];
    library l;
    l.start = NULL;
}