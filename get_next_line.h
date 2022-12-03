/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:47:16 by znaoui            #+#    #+#             */
/*   Updated: 2022/02/08 11:59:08 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

size_t	ft_strlen(const char *str);
int		ft_find(const char *str);
char	*ft_strjoin(char *final_str, char *str_lign);
char	*ft_struct_lign(int fd, char *str_final);
char	*ft_memory_lign(char *str_final);
char	*ft_print_lign(char *str_final);
char	*get_next_line(int fd);

#endif
