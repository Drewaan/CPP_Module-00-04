/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:17:26 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/24 17:02:38 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char *argv[])
{
    Harl    harl;
    if (argc != 2)
    {
        std::cout <<  "Wrong number of arguments" << std::endl;
        return 1;
    }
    harl.complain(argv[1]);
}
