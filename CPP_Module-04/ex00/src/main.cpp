/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:38:00 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 17:29:13 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;
	std::cout << wrongj->getType() << " " << std::endl;



	std::cout << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	wrongmeta -> makeSound();
	wrongj -> makeSound();

	std::cout << std::endl;
	delete wrongj;
	delete wrongmeta;
	delete i;
	delete j;
	delete meta;
}
