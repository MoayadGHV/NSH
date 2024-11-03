#include <stdio.h>


int main(){
	char bit;
	FILE *rfp, *wfp;
	int bitnum = 0;
	int lines = 0;
	int value = 0;

	wfp = fopen("bitstream.hex", "w+");
	if (wfp == NULL){
		printf("Cannot open file\n");
		return 1;
	}
	rfp = fopen("bitstream.bit", "r");
	if (rfp == NULL){
		printf("Cannot open file\n");
		return 1;
	}

	while ((bit = fgetc(rfp)) != EOF){
		if (bit == '\n'){
			continue;
		}
		if (bit == '1'){
			switch(bitnum){
				case 0:
					value += 1;
					break;
				case 1: 
					value += 2;
					break;
				case 2: 
					value += 4;
					break;
				case 3:
                                        value += 8;
					break;
				case 4:
                                        value += 16;
					break;
				case 5:
                                        value += 32;
					break;
				case 6:
                                        value += 64;
					break;
				case 7:
                                        value += 128;
					break;

			}
		}
		bitnum++;
		if (bitnum == 8){
			fprintf(wfp, "%02X\n", value);
			bitnum = 0;
			value = 0;
		}

	}
	if (bitnum > 0){
		fprintf(wfp, "%02X\n", value);
	}

	return 0;
}
