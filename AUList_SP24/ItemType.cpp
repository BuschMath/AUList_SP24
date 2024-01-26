#include "ItemType.h"

ItemType::ItemType()
{
}

ItemType::~ItemType()
{
}

int ItemType::getValue()
{
	return value;
}

void ItemType::setValue(int value)
{
	this->value = value;
}

RelationType ItemType::compareTo(ItemType item)
{
	if(value < item.getValue())
		return LESS;
	else if(value > item.getValue())
		return GREATER;
	else
		return EQUAL;
}
