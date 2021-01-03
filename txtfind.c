#include "txtfind.h"
#include <stdio.h>
#define LINE 256
#define WORD 30




int main(){
    char option,word[WORD+1]={'\0'};//+1 for '\0'
    scanf("%s",word);
    scanf(" %c",&option);
    
    if(option=='a')find_lines(word);
    else find_words(word);
}
void find_lines(char* word){
    char line[LINE+1];//+1 for '\0'
    char* c=line;
   
    while (scanf("%c",c)!=EOF)
    {
        if (*c=='\n'){
            *(c)='\0';
            if(is_sub_string(word,line))
                printf("%s\n",line);
            c=line;
        }
        else c++;
    }
    

}
int is_sub_string(char* word,char* line){
    char* w=word;
    while(*w!='\0'){
        if(*line=='\0')return 0;
        if(*line!=*w) w=word;
        if (*w==*line) w++;
        line++;
    }
    return 1;      
}

void find_words(char* word){
    int flag=0;
    char word_from_txt[WORD+1];//+1 for '\0'
    char *w_txt;
    char *w;
    while(scanf("%s",word_from_txt)!=EOF){
        w_txt=word_from_txt;
        w=word;
        flag=0;
        while (flag<2)
        {   
            if(*w_txt!=*w){flag++;}
            else {
                if(*w_txt=='\0'){
                    printf("%s\n",word_from_txt);
                    break;
                }
                w++;
            }
            w_txt++;
        }
        
    }
}