#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    char str[100] = "tanvir alam roni";
    int vowels=0, consonants=0, digits=0, spaces=0;
    
    fgets(str, sizeof(str), stdin);
    
    /*
        ..a..z
    */
    cout << str << endl;
    for(int i=0; str[i]!='\0'; i++) {
        str[i] = tolower(str[i]);
        
        // check if vowel
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        // check if consonant
        else if(str[i]>='a' && str[i]<='z') {
            consonants++;
        }
        
        // check if digits
        else if(str[i]>='0' && str[i]<='9') {
            digits++;
        }
        
        // check if space
        else if(str[i]>=' ') {
            spaces++;
        }
    }
    printf("#vowels = %0d\n", vowels);
    printf("#consonants = %0d\n", consonants);
    printf("#digits = %0d\n", digits);
    printf("#spaces = %0d\n", spaces);
}