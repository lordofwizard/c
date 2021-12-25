#include <stdio.h>
int main(){
	int c;
	int blanks = 0,tabs =0, nl = 0;
	while((c = getchar()) != EOF){
		if (c == ' ') blanks++;
		if (c == '\t') tabs++;
		if (c == '\n') nl++;
	}
	printf("%d %d %d", blanks , tabs, nl);
	return 0;
}

