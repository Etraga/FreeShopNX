#pragma once

struct Title
{
    string name;
    string rightsID;
    uint64_t titleKeyUpper;
    uint64_t titleKeyLower;
    uint64_t titleID;
    uint8_t mKey;
    uint64_t size;
    uint32_t releaseDate;
    uint32_t addedDate;
    string size_string;

};

enum SortOrder
{
    NAME_ASC=0,
    NAME_DEC,
    SIZE_ASC,
    SIZE_DEC,
    ADDED_DATE_ASC,
    ADDED_DATE_DEC,
    RELEASE_DATE_ASC,
    RELEASE_DATE_DEC
};

extern vector<Title> g_titleList;
extern string g_changelog;
extern SortOrder g_sort;

bool loadTitles(void);
bool loadInfo(void);
bool getUpdateList(void);
bool getUpdateInfo(void);
bool sorter(Title lhs, Title rhs);