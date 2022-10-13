/**
 * *print_name - print a given name according to a function
 * @name: a name
 * @f: the function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
