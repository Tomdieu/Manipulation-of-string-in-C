//Author : tomdieu 
#include "fonction.h"
#include<math.h>

#define len(a) sizeof(a)/sizeof(*a)

int lenght(char *str)
{
    int l =0,i=0;
    while(str[i] != '\0')
    {
        l += 1;
        i += 1;
    }
    return l;
}

int compare(char *array1,char *array2)
{
    if(lenght(array1) == lenght(array2))
    {
        if(True)
        {
            for (int i = 0; i < lenght(array1) ; i++)
            {
                if(array1[i] != array2[i])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 0;

}

int search(char *array,char val)
{
    int i = 0;
    //printf("lenght = %d",lenght(array));
    for(i= 0;i< lenght(array) ;i++)
    {
        if(array[i] == val)
        {
            return True;
        }
    }
    return False;
}

int CountOccurrence(char Text[],char word[])
{
    int textlength = lenght(Text);
    int wordlenght = lenght(word);

    //printf("%d , %d %ld\n",textlength,wordlenght,strlen(Text)-strlen(word));
    int count = 0;

    Bool found = False;

    if(textlength >= wordlenght)
    {
        for(int i=0;i<textlength-wordlenght;i++)
        {
            found = False;
            for(int j = 0;j<wordlenght;j++)
            {
                if(Text[i+j] == word[j])
                {
                    printf("%c",Text[i+j]);
                    found = True;  
                }
                else
                {
                    found = False;
                    break;
                }
            }
            printf(" ");
            if(found == True)
            {
                count += 1;
            }
        }
        return (count+1);
    }
    else
    {
        return 0;
    }
}

int spaceWithLeght(char Text[])
{
    int sp = 0;
    int i = 0;
    while(Text[i] != '\0')
    {
        if(Text[i] == ' ')
        {
            sp += 1; 
        }
        i++;
    }
    return (sp+1);
}

int CountOccurrence1(char Text[],char word[])
{
    int count = 0;
    char *split = (char*)strtok(Text," ");
    while(split != NULL)
    {
        if(strcmp(split,word)==0)
        {
            count += 1;
        } 
        split = strtok(NULL," ");
    }
 
    return count;
}


//if i have created this function is to make sure that the program can accept every datatype without bugs
char *type(char *str)
{
	char str1[100]="",c4[100]="";
	double tmp,val = 1e-12;
	int n;
	char c;
	if(sscanf(str,"%lf%s",&tmp,str1))
	{
		if(strcmp(str1,"")==0)
		{
			n = (int)tmp;
			if((fabs(tmp-n)/tmp) > val)
			{
				return "float";
			}
			else
			{
				return "int";
			}
		}
		else
		{
			return "str";
		}
	}
	else if((sscanf(str,"%c%s",&c,c4)==1 && (strcmp(c4,"")==0)))
	{
		return "char";
	}
	else if(sscanf(str,"%s",str1)==1)
	{
		return "str";
	}
	else
	{
		return "NAT";//for me it is not a type such as space
	}
}