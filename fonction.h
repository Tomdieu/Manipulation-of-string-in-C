//Author : tomdieu 

#include<stdio.h>
#include<string.h>

#ifndef FONCTION_H
#define FONCTION_H

typedef enum
{
    False,
    True
}Bool;

int lenght(char *str);

int compare(char *array1,char *array2);

int search(char *array,char val);

int CountOccurrence(char Text[],char word[]);

int spaceWithLeght(char Text[]);

int CountOccurrence1(char Text[],char word[]);

char *type(char *str);

#endif