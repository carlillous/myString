#include "mistring.h"
#include <stdlib.h>

int mi_strlen (char *str){
    int counter = 0;
    for (int i = 0;i<20;i++)
        if (*str == '\0') {
            break;
        }else{
            str++;
            counter++;
        }
    return counter;
}

char* mi_strcpy (char* s1, char* s2){
    char *ptr;
    int aux = mi_strlen(s1);
    int len2 = mi_strlen(s2);
    ptr = s1;
    
    for (int i = 0;i<len2;i++){
        *s1=*s2;
        s1++;
        s2++;
    }
    for(int i = 0;i<(aux-len2);i++){
        *s1 = '\0';
        s1++;
    }
    return ptr;
}


char* mi_strcat (char* s1, char* s2){
    char *ptr;
    int aux = mi_strlen(s1);
    int len2 = mi_strlen(s2);
    
    ptr = s1+aux;
    
    for (int i = 0; i<len2;i++){
        *ptr = *s2;
        ptr++;
        s2++;
    }
    return s1;
}


char* mi_strdup (char* str){
    int len = mi_strlen(str);
    char *dup = (char *) malloc(len+1);
    char *aux = dup;
    
    for (int i = 0;i<len;i++){
        *dup=*str;
        dup++;
        str++;
    }
    *dup = '\0';
    
    return aux;
}

int mi_strequals (char* s1, char* s2){
    int len1, len2;
    len1 = mi_strlen(&s1);
    len2 = mi_strlen(&s2);
    
    if (len1 != len2) {
        return 0;
    }else{
        for(int i = 0;i<len1;i++){
            if(*s1 != *s2){
                return 0;
            }else{
                s1++;
                s2++;
            }
        }
        return 1;
    }
}
