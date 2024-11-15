/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:43:33 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		val_to_print;
	if (nb <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	val_to_print = (nb % 10) + '0';
	write(1, &val_to_print, 1);
}

/*
#include <stdio.h>
#include <stdlib.h>
// "0" "12147483647" "2147483648" "14128925591344906126583644417" "43665509" "1814827088" "080187468" "344977153" "641488107" "4559377971657961936" "940836891424675881988437364346780117743959642" "096794589152365129712539564393086101820989748091764579266972324426" "89948026" "384796099" "205216917316221546951613777162" "18495253391438551820845994161262400914" "12817397771408072738" "631640515" "6010896" "1381679668501796695346029124" "02335018113972104525934025162515321191101441310" "125609878190723835519476908991791853067" "19040463521524368813" "43917549707144795" "197376143" "12018889091115960466891629261189082883118739760191816125406" "16487607819934032236456938603680609019739061241431693079" "196350372" "430790060" "171672856251273086" "2068725754" "161437477146225456915667889901384578228344598345" "983770419213924781563523447660538286" "1261447156" "766858363" "402335982" "1470174198" "19850943141787925763" "6064540481771034076" "83964743715952988952389947112092807397772379857" "2043781642" "1855702616" "848033953" "2124233353177551683019706872660614450381209975592"

int	main(int argc, char *argv[])
{
	int counter = 0;
	if (argc > 1)
	{
		while (++counter < argc)
		{
			int nb = atoi(argv[counter]);
			//ft_putnbr(nb);
			ft_putnbr1(nb);
			write(1, "\n", 1);
		}
	}
	return (0);
}
*/
