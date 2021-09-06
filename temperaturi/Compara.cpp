#include "Compara.h"
#include <iostream>
#include <vector>

int theClosest()
{
	std::cout << "Introduceti numarul de temperaturi:\n";
	int numarT = 0;
	std::cin >> numarT;
	std::cout << "Introduceti temperaturile:\n";
	std::vector <int> stocare;
	std::vector <int> pozitiv;
	std::vector <int> negativ;
	int temp = 0;
	for(int i=0;i< numarT ; i++)
	{
		std::cin >> temp;
		stocare.push_back(temp);
	}
	for (int k = 0; k < numarT; k++)
	{
		if (stocare.at(k) == 0)
		{
			return stocare.at(k);
			break;
		}
		else
		{
			if (stocare.at(k) > 0)
				pozitiv.push_back(stocare.at(k));
			else
				negativ.push_back(stocare.at(k));
		}
	}
	int nrNegativ = 0;
	int nrPozitiv = 0;
	if(negativ.size()>0)
	nrNegativ = negativ.at(0);
	if(pozitiv.size()>0)
	nrPozitiv = pozitiv.at(0);
	for(int z=1;z< negativ.size();z++)
	{
		if (nrNegativ < negativ.at(z))
			nrNegativ = negativ.at(z);
	}
	for (int z = 1; z < pozitiv.size(); z++)
	{
		if (nrPozitiv > pozitiv.at(z))
			nrPozitiv = pozitiv.at(z);
	}
	if (negativ.size() > 0 && pozitiv.size() > 0) {
		if (nrNegativ + nrPozitiv == 0)
			return nrPozitiv;
		if (nrNegativ + nrPozitiv > 0)
			return nrNegativ;
		else
			return nrPozitiv;
	}
	if (negativ.size() == 0)
		return nrPozitiv;
	if (pozitiv.size() == 0)
		return nrNegativ;
}
