/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:24:42 by hyehwang          #+#    #+#             */
/*   Updated: 2021/10/24 15:38:48 by hyehwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void view(char c){
	write(1,&c,1);
}


void ft_putstr(char *str){
	int z = 0;
	while(str[z] != 0){
		view(str[z]);
		z++;
	
	}

}

