/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:54:38 by hyehwang          #+#    #+#             */
/*   Updated: 2021/10/26 14:51:36 by hyehwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_div_mod(int a,int b,int *div,int *mod){
	*div = a/b;
	*mod = a%b;
}
