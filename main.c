//Author : tomdieu 

#include "fonction.h"

int main(int argc, char const *argv[])
{
    char opt[10]="",word[255]="",text[255]="";
    int val;
    while(True)
    {
        printf("\n");
        printf(" ______________________________________________\n");
        printf("|     TP BY TTIG                               |\n");
        printf("|                                              |\n");
        printf("|  1 - Compare Two Word                        |\n");
        printf("|                                              |\n");
        printf("|  2 - Count a word(occurence) in a Text       |\n");
        printf("|                                              |\n");
        printf("|  3 - Exit                                    |\n");
        printf("|______________________________________________|\n");
        printf("Enter Your Selection :");

        fgets(opt,10,stdin);
        if(strcmp(type(opt),"int")==0)
        {
            sscanf(opt,"%d",&val);
            switch (val)
            {
            case 1:
                printf("Enter the first word :");
                fgets(word,255,stdin);
                fflush(stdin);
                printf("Enter the second word : ");
                fgets(text,255,stdin);
                fflush(stdin);
                int x = compare(word,text);
                if(x == 1)
                {
                    printf("%s and %s are equal",word,text);
                }
                else
                {
                    printf("%s and %s are different\n",word,text);
                }
                break;
            case 2:
                printf("Enter the text :");
                fgets(text,255,stdin);
                //scanf("%[^\n]",text);
                fflush(stdin);
                printf("Enter the word : ");
                fgets(word,255,stdin);
                fflush(stdin);
                int o = CountOccurrence(text,word);
                printf("The Occurence of %s in %s = %d\n",word,text,o);
                break;
            case 3:
                printf("THANKS FOR USING MY PROGRAM!\n");
                return 0;
                break;
            default:
                printf("IVALID OPTION\n");
                break;
            }
        }
        else
        {
            printf("INTEGERS ARE ONLY REQUIRED\n");
        }
    }
    return 0;
}

