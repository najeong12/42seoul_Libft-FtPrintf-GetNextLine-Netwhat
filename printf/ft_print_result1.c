/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najlee <najlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 23:35:33 by najlee            #+#    #+#             */
/*   Updated: 2020/12/30 18:41:22 by najlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void		ft_print_result(t_guide *guide, va_list ap)
{
	char *tmp;

	if (guide->format == '%')
	{
		if (!(tmp = ft_calloc(2, sizeof(char))))
			return ;
		tmp[0] = '%';
		ft_putstr_fd(tmp, 1);
	}
	else if (guide->format == '\0')
		return ;
	else if (guide->format == 'c')
		ft_c(guide, ap);
//	else if (guide->format == 'd' || guide->format == 'i')
//		ft_di(guide, ap);
//	else if (guide->format == 's')
//		ft_s(guide, ap);
//	else if (guide->format == 'p')
//		ft_p(guide, ap);
//	else if (guide->format == 'u')
//		ft_u(guide, ap);
//	else if (guide->format == 'x')
//		ft_x(guide, ap);
//	else if (guide->format == 'X')
//		ft_large_x(guide, ap);
}

void		ft_c(t_guide *guide, va_list ap)
{
	char	*prefix;
	char	str;
	char	*surfix;

	prefix = ft_c_prefix(guide);
	str = va_arg(ap, int);
	surfix = ft_c_surfix(guide);
	ft_putstr_fd(prefix, 1);
	ft_putchar_fd(str, 1);
	ft_putstr_fd(surfix, 1);
}
/*
void		ft_di(t_guide *guide, va_list ap)
{
	char	*prefix;
	int		str;
	char	*surfix;

	prefix = ft_di_prefix(guide);
	str = va_arg(ap, int);
	surfix = ft_di_surfix(guide);
	ft_putstr_fd(prefix, 1);
	ft_putnbr_fd(str, 1);
	ft_putstr_fd(surfix, 1);
}

void		ft_s(t_guide *guide, va_list ap)
{
	char	*prefix;
	char	*str;
	char	*surfix;

	prefix = ft_s_prefix(guide);
	str = va_arg(ap, char *);
	surfix = ft_s_surfix(guide);
	ft_putstr_fd(prefix, 1);
	ft_putstr_fd(str, 1);
	ft_putstr_fd(surfix, 1);
}

void		ft_p(t_guide *guide, va_list ap)
{
	char				*prefix;
	unsigned long long	str;
	char				*surfix;

	prefix = ft_p_prefix(guide);
	str = va_arg(ap, unsigned long long);
	surfix = ft_p_surfix(guide);
	ft_putstr_fd(prefix, 1);
	//-------------------------------------print pointer
	ft_putstr_fd(surfix, 1);
}
*/