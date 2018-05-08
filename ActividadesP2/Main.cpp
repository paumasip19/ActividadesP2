#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <vector>
struct player {
	std::string name;
	int points;
};

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
void addPlayersVectors(std::vector<player> rank2)
{
	std::vector<player>::iterator it = rank2.begin();

	std::string names[4] = { "Jose", "Abraham", "Mateo", "Jeremiah" };
	int points[4];

	for (int i = 0; i < 4; i++)
	{
		points[i] = rand() % 100 + 1;
	}

	int j = 0;

	for (int i = 0; i < 4; i++)
	{
		player Player = { names[i], points[i]] };
		rank2.push_back(Player);
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


void printRanking(std::map<std::string, int> rank)
{
	std::map<std::string, int>::iterator it;

	for (it = rank.begin(); it != rank.end(); it++)
	{
		std::cout << "Tenemos a " << it->first << " con " << it->second << " puntos. " << std::endl;
	}
}
void printRankingVectors(std::vector<player> rank2)
{
	std::vector<player>::iterator it;

	for (it = rank2.begin(); it != rank2.end(); it++)
	{
		std::cout << "Tenemos a " << it->name << " con " << it->points << " puntos. " << std::endl;
	}
}

int main()
{
	srand(time(NULL));
	std::map<std::string, int> ranking;
	std::vector<player> ranking2;

	addPlayers(ranking);
	ownUser(ranking);

	

	printRanking(ranking);

	addPlayersVectors(ranking2);
	printRankingVectors(ranking2);

	system("pause");
	return 0;
}