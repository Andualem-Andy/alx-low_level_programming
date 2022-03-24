#include "main.h"
	#include <stddef.h>
	#include <stdio.h>
	

	/**
	 * upper - capitalizes a letter if it is lowercase
	 * @c: pointer to a string
	 * Return: pointer to string
	 **/
	char *upper(char *c)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		return (c);
	}
	

	/**
	 * new_word - compares char to chars that indicate a new word
	 * @c: char to check
	 * Return: 1 if char is a word separator, 0 of not
	 **/
	int new_word(char c)
	{
		int i = 0;
		char *word = " \t\n,;.!?\"(){}";
	

		while (word[i] != '\0')
		{
			if (c == word[i])
				return (1);
			i++;
		}
	

		return (0);
	}

