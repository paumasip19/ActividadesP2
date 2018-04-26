#include <iostream>
#include <map>
#include <string>
#include <ctime>

void addPlayers(std::map<std::string, int>& rank)
{
	std::map<std::string, int>::iterator it = rank.begin();

	std::string names[4]  = {"Jose", "Abraham", "Mateo", "Jeremiah"};
	int points[4];

	for (int i = 0; i < 4; i++)
	{
		points[i] = rand() % 100 + 1;
	}

	int j = 0;

	for (int i = 0; i < 4; i++)
	{
		rank[names[i]] = points[i];
	}
}

void ownUser(std::map<std::string, int>& rank)
{
	std::string name;
	int points;

	std::cout << "Input a user name: " << std::endl;
	std::cin >> name;

	std::cout << "Input points: " << std::endl;
	std::cin >> points;

	rank[name] = points;
}

void sortPlayers(std::map<std::string, int>& rank)
{
	std::map<std::string, int>::iterator it1 = rank.begin();
	std::map<std::string, int>::iterator it2 = rank.begin();

	std::map<std::string, int>::iterator itAux;
	

	for (; it1 != rank.end(); it1++)
	{
		for (; it2 != rank.end(); it2++)
		{
			if (it1->second < it2->second)
			{
				itAux = it1;
				
				it1 = it2;

				it2 = itAux;
			}
		}
		
	}
}

void printRanking(std::map<std::string, int> rank)
{
	std::map<std::string, int>::iterator it;

	for (it = rank.begin(); it != rank.end(); it++)
	{
		std::cout << "Tenemos a " << it->first << " con " << it->second << " puntos. " << std::endl;
	}
}


int main()
{
	srand(time(NULL));
	std::map<std::string, int> ranking;
	
	addPlayers(ranking);
	ownUser(ranking);

	sortPlayers(ranking);

	printRanking(ranking);

	system("pause");
	return 0;
}