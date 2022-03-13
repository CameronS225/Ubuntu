#include <stdio.h>
#define TRUE 1
#define FALSE 0

void make_clean_phrase(char *,char *);
void change_case(char *);
void make_reverse_phrase(char *,char *);
_Bool check_equal(char *, char *);

int main(void)
{
    char user_phrase[101], clean_phrase[101], rev_phrase[101];
    printf("Enter a phrase for palindrome checking: ");
    fgets(user_phrase,101,stdin);
    printf("\nphrase = |%s|\n",user_phrase);

    make_clean_phrase(user_phrase,clean_phrase);
    change_case(clean_phrase);
    printf("clean phrase =   |%s|\n",clean_phrase);
    make_reverse_phrase(clean_phrase,rev_phrase);
    printf("reverse phrase = |%s|\n",rev_phrase);

    if (check_equal(clean_phrase,rev_phrase))
    {
        printf("The phrase is a palindrome.\n");
    }
    else{
        printf("The phrase is not a palindrome.\n");
    }
    return 0;

}

void make_clean_phrase(char * phrase, char * clean_phrase)
{
    int index = 0, clean_index = 0;
    while(phrase[index] != '\0')
    {
        if ((phrase[index] >= 'A' && phrase[index] <= 'Z') 
            || (phrase[index] >= 'a' && phrase[index] <= 'z'))
        {
            clean_phrase[clean_index] = phrase[index];
            clean_index++;
        }
        index++;
    }
    clean_phrase[clean_index] = '\0';
}

void change_case(char *phrase)
{
    int i = 0;
    while (phrase[i] != '\0')
    {
        if (phrase[i] >= 'A' && phrase[i] <= 'Z')
        {
            phrase[i]+= 32;
        }
        i++;
    }
}

void make_reverse_phrase(char *phrase, char *reverse_phrase)
{
    int pos = 0,len = 0;
    char letter;
    while (phrase[len] != '\0'){
        len++;
    }

    for(pos; phrase[pos] != '\0';pos++) 
    {   
        reverse_phrase[pos]= phrase[len-pos-1];

    }
    reverse_phrase[pos] = '\0';
}

_Bool check_equal(char *phrase, char *reverse)
{
    int i = 0;
    while (phrase[i] != '\0')
    {
        if (phrase[i] != reverse[i])
        {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}