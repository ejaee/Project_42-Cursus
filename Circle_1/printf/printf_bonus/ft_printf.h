/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choiejae <choiejae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:23:56 by ejachoi           #+#    #+#             */
/*   Updated: 2022/08/19 15:00:57 by choiejae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define TYPE "csdiuXxp%"

typedef struct s_info
{
    int hash; // #
    int zero; // 0
    int space; // ' '
    int sign; // +
    int left; // -
    int width; // [max]
    int prec; // .[min]
}   t_info;

/*
*****************************   MAIN FUNCTION   *******************************
*/

int		ft_printf(const char *format, ...);
int		check_type(const char c, va_list *ap, t_info *info);

/*
*****************************   PRINT FUNCTION   *******************************
*/

int		ft_print_chr(int c);
int		ft_print_str(unsigned char *str);
int		ft_print_nbr(long long nbr, const char type, t_info *info);
int		ft_print_ptr(unsigned long long ptr);

/*
*****************************   UTILS FUNCTION   *******************************
*/

size_t	ft_strlen(const char *s);
int		ft_strlen_base(long long num, int type);
int	    ft_putnbr_base(long long nbr, char *base, int base_size, t_info *info);
char	*ft_baseset(char type);

/*
*****************************   BONUS FUNCTION   *******************************
*/

char	*ft_strchr(const char *s, int c);
int	    ft_isdigit(int c);
int	    ft_print_flag(long long nbr, const char type, t_info *info);
int	    ft_print_hash(long long nbr, const char type, t_info *info);

#endif