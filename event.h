class Event
{
    int day, month, year;
    std::string name;

public:
    //default constructor
    Event(std::string="Konrad", int=01, int=01, int=2000);
    ~Event();

    //this function can modify default values
    void load();
    void show();
};