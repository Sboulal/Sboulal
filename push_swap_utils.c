/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:22:46 by saboulal          #+#    #+#             */
/*   Updated: 2022/12/15 14:24:13 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include"ft_printf.h"
#include<stdlib.h>
// int check_stack(int top)
// {
//      if(top > -1)
//           return(1);
//     else
//        return(0);
// }

// void push(int data)
// {
//     int top;
//    if(!check_stack(top))
//    {
//          top = top +1;
//          sta A -> data;
//          stb B -> data;
//    }
//    else
//    {
//        printf("stack est plein!!!!");
//    }
// }

// void pop(stb b,int b)
// {
  
// } 

// static void	*tabfree(char **tab)
// {
// 	size_t	j;

// 	j = 0;
// 	while (tab[j])
// 		free(tab[j++]);
// 	free(tab);
// 	return (NULL);
// }

// static int	words(char const *str, char c)
// {
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	while (str[i])
// 	{
// 		while (str[i] == c && str[i])
// 			i++;
// 		if (str[i] && str[i] != c)
// 		{
// 			i++;
// 			j++;
// 		}
// 		while (str[i] && str[i] != c)
// 			i++;
// 	}
// 	return (j);
// }

// static char	**alloc_fill(const char *s, int start, int end, char c)
// {
// 	char	**tab;
// 	int		i;

// 	i = 0;
// 	tab = (char **) malloc((words(s, c) + 1) * sizeof(char *));
// 	if (tab == NULL)
// 		return (NULL);
// 	while (i < words(s, c) && s[start])
// 	{
// 		start = end;
// 		while (s[start] && s[start] == c)
// 			start++;
// 		end = start;
// 		while (s[end] && s[end] != c)
// 			end++;
// 		tab[i] = ft_substr(s, start, end - start);
// 		if (!tab[i])
// 		{
// 			tabfree(tab);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	tab[i] = NULL;
// 	return (tab);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	int		start;
// 	int		end;

// 	end = 0;
// 	start = 0;
// 	if (!s)
// 		return (NULL);
// 	tab = alloc_fill(s, start, end, c);
// 	if (!tab)
// 		return (NULL);
// 	return (tab);
// }

static int	ft_isspace(char s)
{
	if (s == '\t' || s == '\v'
		|| s == '\r' || s == '\f'
		|| s == ' ' || s == '\n')
		return (1);
	return (0);
}
int 	ft_atoi(char *str)
{
	int	res;
	int 	sign;
	int		i;

	sign = 1;
	res = 0;
	i = 0;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
		if (res == -2147483648 && sign == -1 && str[i] == '/0')
		    return (-2147483648);
	}
	return (res * sign);
}

s_node *add_new_node(int data)
{
    s_node *new;
   int position;
   new = (s_node*)malloc(sizeof(s_node));
   new -> data = data;
   new ->position = 0;
   new -> next = NULL;
   return(new);
}


void *add_front_node(s_node **head, s_node *new)
{
     if (!head || !new) 
         return(0);
     add_new_node(new);
          new ->next = *head;
          *head = new;
}   

void *add_back_node(s_node **a,s_node *new)
{
        s_node *pt;
		if (*a == NULL)
		   *a = new;
		else 
		{
			pt = last_node(*a);
			pt ->next = new;
		}

}

void printlist(s_node *a)
{
	s_node *temp =a;
	while (temp!= NULL)
	{
		ft_printf("%d",temp->data);
		temp=temp->next;
	}
}
int count_node(s_node *a)
{
	int count;
	count =0;
	while(a!=NULL)
	{
		a=a->next;
		count++;
	}
	return (count);
}
s_node *last_node(s_node *node)
{
	while (node)
	{
		if(node ->next == NULL)
		    break;
		 node = node ->next;
	}
	return (node);
	
}
// void ft_putendl_fd(char *s)
// {
//     ft_putstr_fd(s);
//     ft_putchar_fd('\n');
// }