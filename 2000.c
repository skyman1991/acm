#include <stdio.h>

int main()
{
	char a,b,c,temp;

	while(scanf("%c%c%c",&a,&b,&c) != EOF) {
		getchar();
		if(a < b) temp = a,a = b,b = a;
		if(a > b) {
			if(b > c )
				printf("%c%c%c\n",a,b,c);
			else if(c > a)
				printf("%c%c%c\n",c,a,b);
			else 
				printf("%c%c%c\n",a,c,b);
		}
	}
return 0;
}
