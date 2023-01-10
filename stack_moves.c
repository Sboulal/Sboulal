/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:38:28 by saboulal          #+#    #+#             */
/*   Updated: 2023/01/09 19:53:14 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void swap_a(st_a *a,st_a *b)
{
    int tmp;
    tmp = a ->data;
    a->data = b ->data;
    b->data = tmp;
}

void swap_b(st_a *a,st_a *b)
{
    int tmp;
    tmp =  b ->data;
    b->data = a ->data;
    a->data = tmp;
}
void ss_swap(st_a *a,st_a *b)
{
    if (!a || !b)
        return(NULL);
    swap_a(a);
    swap_b(b);
}
int push_a(st_a *a,st_a *b int data)
 {
    if (b != NULL)
    {
        b = a->data ;
    }    
  return (1);
   else 
     write(1,"stack is full",13);
}

int push_b(st_a *a,st_a *b int data)
 {
    if (a != NULL)
    {
        a= b->data ;
    }    
       return (1);
   else 
     write(1,"stack is full",13);
     
     return(0);
}

int  **rotate_a(st_a *a,st_a *tmp)
{
   tmp = a;
   st_a_addback(tmp,a-> data);
   free(tmp);
   return (1);
}

int  **rotate_b(st_a *b,st_a *tmp)
{
   tmp =b;
   st_a_addback(tmp,b-> data);
   free(tmp);
   return (1);
}

int **rotate_rr(st_a *a,st_a *b)
{
    rotate_a(a);
    rotate_b(b);
    return ();
}

void print_instruction(s_node *a,s_node *b)
{
    swap_a(a,b);
    write(1,"sa",2);
    
    swap_b(a,b);
    write(1,"sb",2);
    
    ss_swap(a,b);
    write(1,"ss",2);

    rotate_a(a,b);
    write(1,"ra",2);
   
    rotate_b(a,b);
    write(1,"rb",2);

    rotate_rr(a,b);
    write(1,"rr",2);
}