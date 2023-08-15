#define CHANGE_DATE_LENGTH 10
#define CHANGE_TIME_LENGTH 8


struct StatusEventRecord
{
    int event_id;
    int module_id;
    int new_module_status;
    char change_date[CHANGE_DATE_LENGTH + 1];
    char change_time[CHANGE_TIME_LENGTH + 1];
};
