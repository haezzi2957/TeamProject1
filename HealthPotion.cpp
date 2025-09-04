#include "HealthPotion.h"
#include <iostream>
//#include "Character.h"
using namespace std;

// 아이템은 체력 +50 또는 공격력 +10을 해주는 멋진 효과!
// 전투 중에는 "이럴 때 아이템!" 하고 랜덤하게 사용됩니다

HealthPotion::HealthPotion()
{
	name = "HealthPotion";
	healthRestore = 50;
}

string HealthPotion::getName()
{
	return name;
}

void HealthPotion::use(Character* character)
{
	string CharacterName = character->name;
	character->health += healthRestore;
	cout << CharacterName << "가" << name << "을 사용했습니다." << CharacterName << "체력:" << character->health << endl;
}


