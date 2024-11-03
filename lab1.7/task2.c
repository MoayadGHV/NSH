#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("task2test.txt", "r");

    char line[256];
    int lines = 0;
    int words = 0;
    int chrs = 0;
    
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), file)) {
        lines++;  
        chrs += strlen(line);  

        int EOW = 0;
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                EOW = 0; 
            } else if (EOW == 0) {
                EOW = 1;
                words++;
            }
        }
    }

    fclose(file);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chrs);
    
    return 0;
}
