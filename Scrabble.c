#include <ctype.h>
#include "cs50.h"
#include <stdio.h>
#include <string.h>

int p[] = {1,2,3,1,4,5,3,2,5,1,4,7,2,8,3,2,7,2,9,7,4,1,2,5};

int co_so(string word);

int main(void){


string word1 = get_string("enter word1: ");
string word2 = get_string("enter word2: ");


int so = co_so(word1);
int so2 = co_so(word2);

if (so>so2){

printf("player 1 win \n");

}

else if (so<so2){

printf("player 2 win \n");

}

else {

printf(" tie \n");

}

}

int co_so(string word){

int score =0;

for (int i = 0 , n = strlen(word);i<n;i++ )
{

    if (isupper(word[i]))
        {
            score += p[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += p[word[i] - 'a'];
        }
}
return score;
}