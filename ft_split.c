/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 07:41:41 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:05:18 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
		{
			while (str[i] != '\0' && str[i] != c)
				i++;
			len++;
		}
	}
	return (len);
}

int	ft_test(const char *str, int i, char c)
{
	int		cnt;
	char	*s;

	s = (char *)str;
	cnt = 0;
	while (s[i] != c && s[i])
	{
		i++;
		cnt++;
	}
	return (cnt);
}

char	**set_array(char const *s, char c, int i, char **tab)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			tab[j] = malloc(ft_test(s, i, c) + 1);
			if (!tab[j])
				return (NULL);
			while (s[i] != c && s[i])
			{
				tab[j][k++] = s[i];
				i++;
			}
			tab[j++][k] = '\0';
		}
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	tab = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0' || count(s, c) == 0)
	{
		tab = malloc(1 * sizeof(char *));
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!tab)
		return (NULL);
	return (set_array(s, c, i, tab));
}

// int   main()
// {
//   int i = 0;
//   char **tab = ft_split("       ", ' ');
//   while(tab[i])
//   {
//     printf("%s\n", tab[i]);
//     i++;
//   }
// }

// static int		count_words(const char *str, char c)
// {
// 	int count;
// 	int words;
// 	int test;

// 	test = 0;
// 	count = 0;
// 	words = 0;
// 	if (!str)
// 		return (0);
// 	while (*str != '\0')
// 	{
// 		if (*str == c)
// 		{
// 			test = 1;
// 			words = 0;
// 		}
// 		else if (words == 0)
// 		{
// 			words = 1;
// 			count++;
// 		}
// 		str++;
// 	}
// 	return ((test == 0 && count == 1) ? -1 : count);
// }

// static int		words_lenght(const char *str, int i, char c)
// {
// 	int lenght;

// 	lenght = 0;
// 	while (str[i] != c && str[i] != '\0')
// 	{
// 		lenght++;
// 		i++;
// 	}
// 	return (lenght);
// }

// static void		ft_free(char **tab, int j)
// {
// 	while (j <= 0)
// 	{
// 		free(tab[j]);
// 		j--;
// 	}
// 	free(tab);
// }

// static char		**help(const char *str)
// {
// 	char	**tab;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 1;
// 	if (!(tab = (char**)malloc(sizeof(char*) * 2)))
// 		return (NULL);
// 	if (!(tab[0] = (char*)malloc(1 * ft_strlen(str) + 1)))
// 		ft_free(tab, j);
// 	while (str[i])
// 	{
// 		tab[0][i] = str[i];
// 		i++;
// 	}
// 	tab[0][i] = '\0';
// 	tab[1] = NULL;
// 	return (tab);
// }

// char			**ft_split(const char *str, char c)
// {
// 	char	**tab;
// 	int		i;
// 	int		k;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (count_words(str, c) == -1 || !str)
// 		return ((count_words(str, c) == -1) ? help(str) : NULL);
// 	if (!(tab = (char**)malloc(sizeof(char*) * (count_words(str, c) + 1))))
// 		return (NULL);
// 	while (str[i] != '\0' && j < count_words(str, c))
// 	{
// 		k = 0;
// 		while (str[i] == c)
// 			i++;
// 		if (!(tab[j] = (char*)malloc(1 * words_lenght(str, i, c) + 1)))
// 			ft_free(tab, j);
// 		while (str[i] != c && str[i] != '\0')
// 			tab[j][k++] = str[i++];
// 		tab[j++][k] = '\0';
// 	}
// 	tab[j] = NULL;
// 	return (tab);
// }