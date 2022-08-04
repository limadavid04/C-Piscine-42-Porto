void wdmatch(char *str1, char *str2)
{
	int	j;
	int	i;
	
	i = 0;
	j = 0;
	while (str2[i])
	{
		if (str2[i] == str1[j] && str1[j])
			j++;
		i++;
	}
	if (str1[j] == '\0')
		write(1, str1, 4);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		wdmatch(argv[1], argv[2]);
		write(1, "\n", 1);
	}
}
