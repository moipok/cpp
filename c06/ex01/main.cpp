/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:14:28 by fbarbera          #+#    #+#             */
/*   Updated: 2021/02/26 15:16:42 by fbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

struct int_bit {
	unsigned n1 : 8;
	unsigned n2 : 8;
	unsigned n3 : 8;
	unsigned n4 : 8;
};

int rand_int()
{
	int_bit num;
	num.n1 = rand() % 256;
	num.n2 = rand() % 256;
	num.n3 = rand() % 256;
	num.n4 = rand() % 256;
	int n;
	memcpy(&n, &num, 4);
	std::cout << "Random int " << n << std::endl;
	return n;
}

std::string		rand_string()
{
	int i;
	std::string a = "________";
	i = 0;
	while (i < 8)
	{
		a[i] = 48 + rand() % 74;
		while ((a[i] >= 58 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96))
			a[i] = 48 + rand() % 74;
		i++;
	}
	std::cout << "Random string " << a << std::endl;
	return a;
}

void *serialize(void)
{
	srand(static_cast<unsigned int>(time(0)));
	std::string s1 = rand_string();
	std::string s2 = rand_string();
	int n = rand_int();
	std::cout << std::endl;
	void *a = new char[52];
	char *ptr = static_cast<char *>(a);
	bzero(a, 52);
	ptr = reinterpret_cast<char *>(memcpy(ptr, &s1, 24));
	ptr += 24;
	ptr = reinterpret_cast<char *>(memcpy(ptr, &n, 4));
	ptr += 4;
	ptr = reinterpret_cast<char *>(memcpy(ptr, &s2, 24));
	return a;
}

Data *deserialize(void * raw)
{
	Data *d = new Data;
	char *ptr = static_cast<char *>(raw);
	d->s1 = reinterpret_cast<char *>(ptr);
	ptr += 24;
	int_bit nn;
	nn.n1 = reinterpret_cast<char>(*ptr);
	ptr++;
	nn.n2 = reinterpret_cast<char>(*ptr);
	ptr++;
	nn.n3 = reinterpret_cast<char>(*ptr);
	ptr++;
	nn.n4 = reinterpret_cast<char>(*ptr);
	ptr++;
	d->s2 = reinterpret_cast<char *>(ptr);
	delete static_cast<char *>(raw);
	memcpy(&d->n, &nn, 4);
	return (d);
}

int main()
{
	Data *data;
	void *a;
	a = serialize();
	data = deserialize(a);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
	return 0;
}