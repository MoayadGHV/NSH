#include <stdio.h>

int StringLength(char sentence[]);
int NumOfWords(char sentence[], int StrLength);
int NumOfVowels(char sentence[], int StrLength);
int VowelFreq(char sentence[], char vowel);


int main(){
	char str[100];
	printf("Enter a string less than 100 chars: ");
	scanf("%[^\n]s", str);
	getchar();
	char vowel;
	printf("Enter a vowel to look for: ");
	scanf(" %c", &vowel);
	if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'u' || vowel == 'o' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'U' || vowel == 'O'){
		printf("not a vowel!.\n\n");
		vowel = "^C";
	}
	

	int strlngth = StringLength(str);
	int numOfWords = NumOfWords(str, strlngth);
	int numVowels = NumOfVowels(str, strlngth);
	int vowelFreq = VowelFreq(str, vowel);

	printf("String length: %d\nNumber of words: %d\nNumber of vowels: %d\nNumber of chosen vowel: %d\n", strlngth, numOfWords, numVowels, vowelFreq);

	return 0;
}


int StringLength(char sentence[]){

	for (int i =0; i < 100;i++){
		if (sentence[i] == '\0'){
			return i;
		}
	}


}

int NumOfWords(char sentence[], int StrLength){
	int n = 0;
	for (int i = 0; i < StrLength; i++){
		if (i > 0 && i < StrLength){
	       		if (sentence[i-1] != ' ' && sentence[i] == ' ' && sentence[i+1] != ' ' ){
			  		n++;
	 	      		}
			}
		}
	return n + 1;
}

int NumOfVowels(char sentence[], int StrLength){
	int n = 0;
	for (int i = 0; i < StrLength; i++){
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'u' || sentence[i] == 'o' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'U' || sentence[i] == 'O'){
			n++;
		}
	}
	return n;
}

int VowelFreq(char sentence[], char vowel){
	int n = 0;
	for (int i = 0; i < StringLength(sentence) ; i++){
		if (sentence[i] == vowel){
			n++;
		}
	
	}
	return n;
}


