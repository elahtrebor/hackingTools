#include <stdio.h>
#define g getchar()

int main(int argc, char *argv[]){
int c;g;while((c=g)!=EOF)printf("\\x0%02x",c);  
	return 0;
}
