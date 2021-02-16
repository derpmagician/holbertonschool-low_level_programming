void puts_half(char *str)
{
	int n;
	int largo;
	int inicio;

	len = 0;

	while (*(str + largo) != '\0')
		largo++;

	inicio = largo / 2;

	if (largo % 2 != 0)
		inicio++;

	for (n = inicio; n < largo; n++)
		_putchar(str[n]);

	_putchar('\n');
}
