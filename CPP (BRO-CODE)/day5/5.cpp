#include <iostream>
#include <string>
using namespace std;

class Stove
{
private:
    int temparature = 0;

public:
    int getTemparature() // getter
    {
        return temparature;
    }
    Stove(int temparature)
    {
        setTemparature(temparature);
    }
    void setTemparature(int temparature)
    {
        if (temparature < 0)
        {
            this->temparature = 0;
        }
        else if (temparature >= 10)
        {
            this->temparature = 10;
        }
        else
        {
            this->temparature = temparature;
        }
    }
};

int main()
{
    // abstruction - getter - setter
    Stove stove(5);
    // stove.temparature = 10000;
    // stove.setTemparature(100);
    cout << "The temparatures setting is: " << stove.getTemparature() << '\n';

    return 0;
}