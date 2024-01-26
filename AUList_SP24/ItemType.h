#ifndef ITEM_TYPE_H
#define ITEM_TYPE_H

// MAX_ITEMS is the maximum number of items in the list
const int MAX_ITEMS = 100;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
public:
	ItemType();
	~ItemType();

	int getValue();
	void setValue(int value);
	RelationType compareTo(ItemType item);

private:
	int value;
};

#endif // ITEM_TYPE_H
