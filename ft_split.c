/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:13:57 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 18:57:07 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

static void	**ft_realloc(void *ptr, size_t curr_size, size_t new_size)
{
	void	*newptr;

	if (new_size <= curr_size)
		return (ptr);
	newptr = malloc(new_size);
	ft_memmove(newptr, ptr, curr_size);
	free(ptr);
	return (newptr);
}

static char	**ft_init_arr(void)
{
	char	**arr;

	arr = malloc(sizeof(char *) * 1);
	arr[0] = NULL;
	return (arr);
}

static char	**ft_push_substr(char	**arr, const char *str, int s, int e)
{
	size_t	curr_size;
	size_t	new_size;
	size_t	arr_len;

	arr_len = ft_arrlen(arr);
	curr_size = sizeof(char *) * (arr_len + 1);
	new_size = sizeof(char *) * (arr_len + 2);
	arr = (char **)ft_realloc(arr, curr_size, new_size);
	arr_len++;
	arr[arr_len - 1] = ft_substr(str, s, e - s);
	arr[arr_len] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		start_str;
	int		end_str;
	char	**splitted;

	if (!s)
		return (0);
	start_str = 0;
	end_str = 0;
	splitted = ft_init_arr();
	while (s[end_str] != '\0')
	{
		if (s[end_str] == c && start_str != end_str)
		{
			splitted = ft_push_substr(splitted, s, start_str, end_str);
			start_str = end_str + 1;
		}
		else if (s[end_str] == c)
			start_str++;
		end_str++;
	}
	if (start_str != end_str)
		splitted = ft_push_substr(splitted, s, start_str, end_str);
	return (splitted);
}
