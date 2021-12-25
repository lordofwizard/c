#include <stdio.h>
int main(){
	int word;
	int c;
	while((c = getchar() != EOF)){
		if(c == ' ' || c == '\t' || c == '\n')
			   printf("\n");
		printf("%c",c);
	}
}

