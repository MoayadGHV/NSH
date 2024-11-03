#include <stdio.h>

void encrypt(char text[], int shift, FILE *fp) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
        }
        fputc(ch, fp);
    }
}


void decrypt(char text[], int shift, FILE *fp) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - shift + 26) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - shift + 26) % 26 + 'a';
        }
        fputc(ch, fp);
    }
}


void getInput(char *paragraph, char choice) {
    if (choice == 'F' || choice == 'f') {
        char filename[100];
        printf("Enter the filename:\n> ");
        scanf("%s", filename);
        
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error: Could not open file\n");
            return;
        }
        
        fgets(paragraph, 1000, fp);
    } else if (choice == 'S' || choice == 's') {
        printf("Enter the text:\n> ");
        getchar();
        fgets(paragraph, 1000, stdin);
    } else {
        printf("Invalid choice!\n");
    }
}

int main() {
    char paragraph[1000];
    char command;
    char choice;
    int shift = 3;  
    FILE *fp;

    printf("Welcome to the Caesar Cipher Program!\n\n");
    printf("Do you want to perform (E)ncryption or (D)ecryption?\n> ");
    scanf(" %c", &command);

    if (command == 'E' || command == 'e') {
        printf("Do you want to encrypt data from a (F)ile or enter a (S)tring?\n> ");
        scanf(" %c", &choice);
        
        getInput(paragraph, choice);
        
        fp = fopen("encrypted.txt", "w");
        if (fp == NULL) {
            printf("Error: Could not open file for writing\n");
            return 1;
        }
        
        encrypt(paragraph, shift, fp);
        printf("Encryption complete! Output saved to encrypted.txt\n");
        

    } else if (command == 'D' || command == 'd') {
        printf("Do you want to decrypt data from a (F)ile or enter a (S)tring?\n> ");
        scanf(" %c", &choice);

        getInput(paragraph, choice);

        fp = fopen("decrypted.txt", "w");
        if (fp == NULL) {
            printf("Error: Could not open file for writing\n");
            return 1;
        }

        decrypt(paragraph, shift, fp);
        printf("Decryption complete! Output saved to decrypted.txt\n");

    } else {
        printf("Invalid command. Please choose either (E)ncryption or (D)ecryption.\n");
        return 1;
    }
    fclose(fp);
    return 0;
}
