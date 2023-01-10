/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:35:51 by saboulal          #+#    #+#             */
/*   Updated: 2023/01/10 13:26:40 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct node_list
   {
	   int data;
	   int position;
	   struct node_list *next;
   }s_node;	

s_node *add_new_node(int data); 
void *add_front_node(s_node **head, s_node *new);
void *add_back_node(s_node **a,s_node *new);
s_node *last_node(s_node *node);
void printlist(s_node *a);
int count_node(s_node *a);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
// int	ft_printf(char const *str, ...);

#endif