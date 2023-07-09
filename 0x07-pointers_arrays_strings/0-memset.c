nclude < stdio.h >

/**
 *  * _memset - Fills the first n bytes of the memory area pointed to by s
 *   *           with the constant byte b.
 *    * @s: Pointer to the memory area.
 *     * @b: The constant byte to fill the memory with.
 *      * @n: The number of bytes to be filled.
 *       *
 *        * Return: Pointer to the memory area s.
 *         */

char *_memset(char *s, char b, unsigned int n) {
	    unsigned int i;
	        for i = 0; i < n; i++ 
		{
s[i] = b;
				    }
	return (s);
}

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 on success*     
 */
int main(void) 
{
	    char memory[10];
	        char *result = _memset(memory, 'A', 10);
		    printf"Memory after memset: ";
		        for (int i = 0; i < 10; i++) 
{
	 printf("%c ", memory[i]);
	}		    
return (0);
}
