/**
 *  print_alphabet - Prints the alphabet in 
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z') {
		putchar(letter);
		letter++;
	}
	
	putchar('\n');
}