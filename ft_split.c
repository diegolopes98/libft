/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:13:57 by dieperei          #+#    #+#             */
/*   Updated: 2022/06/07 17:21:43 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	**ft_realloc(void *ptr, size_t curr_size, size_t new_size)
{
	void	*newptr;

    if (new_size <= curr_size)
        return ptr;
    newptr = malloc(new_size);
    ft_memmove(newptr, ptr, curr_size);
    free(ptr);
    return newptr;
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
	splitted = malloc(sizeof(char *) * 1);
	splitted[splitted_len] = NULL;
	while (s[end_str] != '\0')
	{
		if (s[end_str] == c && start_str != end_str)
		{
			str = ft_substr(s, start_str, end_str - start_str);
			splitted = (char **)ft_realloc(splitted, sizeof(char *) * (splitted_len + 1) , sizeof(char *) * (splitted_len + 2));
			splitted_len++;
			splitted[splitted_len - 1] = str;
			splitted[splitted_len] = NULL;
			start_str = end_str + 1;
		}
		else if (s[end_str] == c)
			start_str++;
		end_str++;
	}
	if (start_str != end_str)
	{
		str = ft_substr(s, start_str, end_str - start_str);
		splitted = (char **)ft_realloc(splitted, sizeof(char *) * (splitted_len + 1) , sizeof(char *) * (splitted_len + 2));
		splitted_len++;
		splitted[splitted_len - 1] = str;
		splitted[splitted_len] = NULL;
	}
	return (splitted);
}
