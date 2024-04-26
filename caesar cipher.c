#include <stdio.h>
#include <string.h>

int main() {
    char upperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
    
    char message[] = "hEllo"; // This can be any text
    char originalMessage[strlen(message) + 1]; 
    
    strcpy(originalMessage, message);
    printf("Original message: %s\n", originalMessage);
    
    // Go through every character in the message array
    for(int i = 0; message[i] != '\0'; i++){
        // Check if the character is in lowerCase
        for(int j = 0; j < strlen(lowerCase); j++){
            if(message[i] == lowerCase[j]){
                printf("Letter %c in message is %c now lowerCase\n", originalMessage[i], lowerCase[j+2]);
                break; // Break the loop once a match is found
            }
        }
        // Check if the character is in upperCase
        for(int k = 0; k < strlen(upperCase); k++){
            if(message[i] == upperCase[k]){
                printf("Letter %c in message is %c in upperCase\n", originalMessage[i], upperCase[k+2]);
                break; // Break the loop once a match is found
            }
        }
    }
    
    return 0;
}
