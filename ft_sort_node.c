/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:02:32 by saboulal          #+#    #+#             */
/*   Updated: 2022/12/28 12:08:17 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_node(s_node *a)
{ 
    int s;
    
    s_node *b;
    s_node *c=NULL;
    s = 0;
    b = a;
    
    if(a)
       return;
    while (a !=NULL)
    {
         s = 0;
        if(a->data > a->next->data)
        {
            swap_node(b,c);
            s = 1; 
        }        
        b = b ->next;
        c = b;     
    }
    
void print_node(s_node *a)
{
    s_node *temp;
    temp = a;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp= temp ->next;
    }
}
int count_node(s_node *a)
{
    int s;
    s = 0;
    while (a != NULL)9
    {
        a=a ->next;
        s++;
    }
    return(s);
}