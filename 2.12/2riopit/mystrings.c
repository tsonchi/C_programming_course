#include <stdio.h>
#include "mystrings.h"

int strlength(char input_string[]) {
    int string_length = 0;
    
    while (input_string[string_length] != '\0') {
        string_length++;
    }
    
    return string_length;
}

int strconcat(char destination_string[], char source_string[]) {
    int destination_length = strlength(destination_string);
    int source_length = strlength(source_string);
    
    if (destination_length + source_length >= MAX_STRING_LENGTH) {
        return -1;
    }
    
    int current_index = 0;
    while (source_string[current_index] != '\0') {
        destination_string[destination_length + current_index] = source_string[current_index];
        current_index++;
    }
    destination_string[destination_length + current_index] = '\0';
    
    return 0;
}

int strcompare(char first_string[], char second_string[]) {
    int current_index = 0;
    
    while (first_string[current_index] != '\0' && second_string[current_index] != '\0') {
        if (first_string[current_index] < second_string[current_index]) {
            return -1;
        }
        if (first_string[current_index] > second_string[current_index]) {
            return 1;
        }
        current_index++;
    }
    
    if (first_string[current_index] == '\0' && second_string[current_index] == '\0') {
        return 0;
    }
    if (first_string[current_index] == '\0') {
        return -1;
    }
    return 1;
}