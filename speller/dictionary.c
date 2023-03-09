// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int n = hash(word);
    node *cursor = table[n];
    while (cursor != NULL)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
            break;
        }
        else
        {
            cursor = cursor -> next;
        }
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *dictfile = fopen(dictionary, 'r');
    if (dictfile == NULL)
    {
        return false;
    }
    char str[LENGTH +1]
    while (fscanf(dictfile, "%s", str) != EOF)
    {
        node *temp = malloc(sizeof(node));
        if(temp == NULL)
        {
            return false;
        }
        strcpy(temp->word, str);
    }
    int hashnum = hash(str);
    if (table(hashnum) == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = &table(hashnum);
    }
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *temp = table[i];
        node *cursor = table[i];
        while (temp!=NULL)
        {
            cursor = cursor -> next;
            free (temp);
            temp = cursor;
        }
    }
    return true;
}
