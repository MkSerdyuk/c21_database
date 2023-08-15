#define MODULE_NAME_LENGTH 30


struct ModuleRecord
{
    int module_id;
    char module_name[30];
    int level_memory_number;
    int cell_number;
    int deletion_flag;
};
