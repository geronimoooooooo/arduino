#include <map>
using namespace std;

std::map<std::string, std::string> mapper;
    mapper["aa"] = "uno";
    mapper["bb"] = "due";
    std::map<std::string, std::string>::iterator it = mapper.begin();
    std::map<char, int> m = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
        {'d', 4},
        {'e', 5},
    };
    //   cout << "Hello, World!";
    //Serial.println(mapper["aa"]);
    for (auto &t : mapper)
    {
        Serial.print("Key: ");
        Serial.print(t.first.c_str());        
        Serial.print(", Value: ");
        Serial.print(t.second.c_str());        
    }