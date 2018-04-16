
#include <vector>
#include <iostream>

#include <json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
    int status(0);

    cout << "hello world" << endl;

    json j;
    j["Name"] = "Nick";
    j["age"] = 36;
    cout << j << endl;
    cout << j.flatten() << endl;


    return status;
}
