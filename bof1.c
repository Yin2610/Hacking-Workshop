#include <stdio.h>
void hidden(){
	printf("Function hacked successfully\n");
}
int main(){
	printf("Hidden function is at %p\n",&hidden);
	char buffer[64];
	gets(buffer);
	printf("Your data is : %s\n", buffer);
}
