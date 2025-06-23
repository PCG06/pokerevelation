#ifndef GUARD_ITEM_H
#define GUARD_ITEM_H

#include "constants/item.h"
#include "constants/items.h"
#include "constants/tms_hms.h"

typedef void (*ItemUseFunc)(u8);

struct Item
{
    u32 price;
    u16 secondaryId;
    ItemUseFunc fieldUseFunc;
    const u8 *description;
    const u8 *effect;
    u8 name[ITEM_NAME_LENGTH];
    u8 pluralName[ITEM_NAME_PLURAL_LENGTH];
    u8 holdEffect;
    u8 holdEffectParam;
    u8 importance:2;
    u8 notConsumed:1;
    u8 padding:5;
    enum Pocket pocket:8;
    u8 type;
    u8 sort;
    u8 battleUsage;
    u8 flingPower;
    const u32 *iconPic;
    const u16 *iconPalette;
};

enum ItemSortType
{
	ITEM_TYPE_FIELD_USE,
    ITEM_TYPE_LEVEL_UP_ITEM,
	ITEM_TYPE_HEALTH_RECOVERY,
	ITEM_TYPE_STATUS_RECOVERY,
	ITEM_TYPE_PP_RECOVERY,
    ITEM_TYPE_NATURE_MINT,
	ITEM_TYPE_STAT_BOOST_DRINK,
	ITEM_TYPE_STAT_BOOST_FEATHER,
    ITEM_TYPE_STAT_BOOST_MOCHI,
	ITEM_TYPE_BATTLE_ITEM,
	ITEM_TYPE_FLUTE,
    ITEM_TYPE_X_ITEM,
    ITEM_TYPE_AUX_ITEM,
	ITEM_TYPE_EVOLUTION_STONE,
	ITEM_TYPE_EVOLUTION_ITEM,
    ITEM_TYPE_SPECIAL_HELD_ITEM,
	ITEM_TYPE_MEGA_STONE,
	ITEM_TYPE_Z_CRYSTAL,
    ITEM_TYPE_TERA_SHARD,
	ITEM_TYPE_HELD_ITEM,
	ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
    ITEM_TYPE_STATUS_ORB,
    ITEM_TYPE_CONTEST_HELD_ITEM,
    ITEM_TYPE_EV_BOOST_HELD_ITEM,
	ITEM_TYPE_GEM,
	ITEM_TYPE_PLATE,
	ITEM_TYPE_MEMORY,
	ITEM_TYPE_DRIVE,
	ITEM_TYPE_INCENSE,
	ITEM_TYPE_NECTAR,
    ITEM_TYPE_GROWTH,
	ITEM_TYPE_SHARD,
	ITEM_TYPE_SELLABLE,
	ITEM_TYPE_RELIC,
	ITEM_TYPE_FOSSIL,
	ITEM_TYPE_MAIL,
};

struct __attribute__((packed, aligned(2))) BagPocket
{
    struct ItemSlot *itemSlots;
    u16 capacity;
};

extern const struct Item gItemsInfo[];
extern struct BagPocket gBagPockets[];

u16 GetBagItemId(enum Pocket pocketId, u32 pocketPos);
u16 GetBagItemQuantity(enum Pocket pocketId, u32 pocketPos);
void SetBagItemQuantity(enum Pocket pocketId, u32 pocketPos, u16 newValue);
void ApplyNewEncryptionKeyToBagItems(u32 newKey);
void SetBagItemsPointers(void);
u8 *CopyItemName(u16 itemId, u8 *dst);
u8 *CopyItemNameHandlePlural(u16 itemId, u8 *dst, u32 quantity);
bool8 IsBagPocketNonEmpty(enum Pocket pocketId);
bool8 CheckBagHasItem(u16 itemId, u16 count);
bool8 HasAtLeastOneBerry(void);
bool8 HasAtLeastOnePokeBall(void);
bool8 CheckBagHasSpace(u16 itemId, u16 count);
u32 GetFreeSpaceForItemInBag(u16 itemId);
bool8 AddBagItem(u16 itemId, u16 count);
bool8 RemoveBagItem(u16 itemId, u16 count);
u8 CountUsedPCItemSlots(void);
bool8 CheckPCHasItem(u16 itemId, u16 count);
bool8 AddPCItem(u16 itemId, u16 count);
void RemovePCItem(u8 index, u16 count);
void CompactPCItems(void);
void SwapRegisteredBike(void);
void CompactItemsInBagPocket(enum Pocket pocketId);
void SortBerriesOrTMHMs(enum Pocket pocketId);
void MoveItemSlotInPocket(enum Pocket pocketId, u32 from, u32 to);
void MoveItemSlotInPC(struct ItemSlot *itemSlots, u32 from, u32 to);
void ClearBag(void);
u16 CountTotalItemQuantityInBag(u16 itemId);
bool8 AddPyramidBagItem(u16 itemId, u16 count);
bool8 RemovePyramidBagItem(u16 itemId, u16 count);
const u8 *GetItemName(u16 itemId);
u32 GetItemPrice(u16 itemId);
const u8 *GetItemEffect(u32 itemId);
u32 GetItemHoldEffect(u32 itemId);
u32 GetItemHoldEffectParam(u32 itemId);
const u8 *GetItemDescription(u16 itemId);
u8 GetItemImportance(u16 itemId);
u8 GetItemConsumability(u16 itemId);
enum Pocket GetItemPocket(u16 itemId);
u8 GetItemType(u16 itemId);
ItemUseFunc GetItemFieldFunc(u16 itemId);
u8 GetItemBattleUsage(u16 itemId);
u32 GetItemSecondaryId(u32 itemId);
u32 GetItemFlingPower(u32 itemId);
u32 GetItemStatus1Mask(u16 itemId);
u32 GetItemStatus2Mask(u16 itemId);

/* Expands to:
 * enum
 * {
 *   ITEM_TM_FOCUS_PUNCH,
 *   ...
 *   ITEM_TM_CUT,
 *   ...
 * }; */
#define ENUM_TM(id) CAT(ITEM_TM_, id),
enum
{
    ENUM_TM_START_ = ITEM_TM01 - 1,
    FOREACH_TM(ENUM_TM)
};
#undef ENUM_TM

#endif // GUARD_ITEM_H
