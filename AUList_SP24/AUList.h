#ifndef AULIST_H
#define AULIST_H

#include "ItemType.h"

class AUList
{
public:
	AUList();
	~AUList();

	void MakeEmpty();
	bool IsFull() const;
	ItemType GetItem(ItemType item, bool& found);
	void PutItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetList();
	ItemType GetNextItem();

private:
	ItemType Items[MAX_ITEMS];
	int length;
	int loc;

	int findItem(ItemType item);
};

#endif // !AULIST_H

