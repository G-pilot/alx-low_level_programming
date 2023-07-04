nclude <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
	    unsigned int i;
	        for (i = 0; i < n; i++) {
			        s[i] = b;
				    }
		    return s;
}

int main() {
	    char memory[10];
	        char *result = _memset(memory, 'A', 10);
		    
		    printf("Memory after memset: ");
		        for (int i = 0; i < 10; i++) {
				        printf("%c ", memory[i]);
					    }
			    
			    return 0;
}
