/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 13:50:20 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/19 12:40:57 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int num1 = 5;
	int num2 = 8;
	
	printf("before swap:\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	ft_swap(&num1, &num2);
	printf("after swap:\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	return(0);
}*/
