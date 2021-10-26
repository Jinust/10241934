/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:14:53 by hyehwang          #+#    #+#             */
/*   Updated: 2021/10/26 19:33:24 by hyehwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	printf("START\n\n\n");
	
	int count =0;
	int n = 0;
	while(1)
	{
		int tmp;	
		if(tab[n]>tab[n+1])
		{ 
			printf("check!!");
			tmp = tab[n];
		   tab[n] = tab[n+1];
		   tab[n+1] = tmp;
		   count = 0 ;
				  
			if((n+1)>=(size-1))
			{
				n = 0;
			}
		}
		else
		{
			printf("Good\n");
			n++;
			count ++;
			int i = 0;
			if(count >= (size-1))
			{
				printf("plz\n\n");
				while(i<=4)
				{
					printf("tab[%d] : %d \n",i,tab[i];)
					i++;					
				}
				break;
			}
		}
	}
}	
int main(){
	int tt[5]={5,4,3,1,2};
	int *pp = tt;
	ft_sort_int_tab(pp,5);

}
