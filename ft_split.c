/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:13:57 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 18:24:58 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	**ft_increment_arr(char	**arr, int arr_len, char *value)
{
	size_t	curr_size;
	size_t	new_size;

	curr_size = sizeof(char *) * (arr_len + 1);
	new_size = sizeof(char *) * (arr_len + 2);
	arr = (char **)ft_realloc(arr, curr_size, new_size);
	arr_len++;
	arr[arr_len - 1] = value;
	arr[arr_len] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		start_str;
	int		end_str;
	int		splitted_len;
	char	*str;
	char	**splitted;

	if (!s)
		return (0);
	start_str = 0;
	end_str = 0;
	splitted_len = 0;
	splitted = ft_init_arr();
	while (s[end_str] != '\0')
	{
		if (s[end_str] == c && start_str != end_str)
		{
			str = ft_substr(s, start_str, end_str - start_str);
			splitted = ft_increment_arr(splitted, splitted_len++, str);
			start_str = end_str + 1;
		}
		else if (s[end_str] == c)
			start_str++;
		end_str++;
	}
	if (start_str != end_str)
	{
		str = ft_substr(s, start_str, end_str - start_str);
		splitted = ft_increment_arr(splitted, splitted_len++, str);
	}
	return (splitted);
}
