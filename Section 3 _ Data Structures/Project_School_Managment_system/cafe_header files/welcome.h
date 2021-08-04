#pragma once

class welcome{
public:
    welcome();
    welcome(int current_hours);
    int get_time();
    void set_time();

private:
    int entering_time;
};