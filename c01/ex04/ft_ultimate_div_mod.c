/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 16:17:25 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/19 12:40:01 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp_1;
	int	temp_2;

	temp_1 = *a / *b;
	temp_2 = *a % *b;
	*a = temp_1;
	*b = temp_2;
}

/*int main()
{
	int a = 13;
	int b = 4;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
