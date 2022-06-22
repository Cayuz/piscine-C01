/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 14:31:33 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/19 12:40:32 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int div;
	int mod;

	ft_div_mod(13, 4, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);

}*/
