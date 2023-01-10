/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:47:34 by saboulal          #+#    #+#             */
/*   Updated: 2023/01/10 14:29:16 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  s_node *a;
  s_node *b;
  int i;
  i = 1;
   if (argc == 1) 
       return (1);
  while (argv[i])
  {
    a= add_new_node(ft_atoi(argv[i]));
    
    write(1,&a,1);
    i++;
  }
  return (0);
}