#indef HOLBERTON_H
#define HOLBERTON_H

char *_memset(char *s, char b, unsigned int n);
char*_memcpy(char *deest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void set_string(char **s, char *to);
#endif

		    
