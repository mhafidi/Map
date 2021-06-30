typedef struct dict_entry_s
{
    const char* key;
    int value;
} dict_entry_s;

typedef struct dict_s 
{
    int len;
    int cap;
    dict_entry_s* entry;
} dict_s, * dict_t;

dict_t dict_new(void);
void dict_free(dict_t dict);
void dict_add(dict_t dict, const char* key, int value);
int dict_find(dict_t dict, const char* key, int def);
int dict_find_index(dict_t dict, const char* key);