#include <iostream>
#include <fstream>
#include <sstream>
#include "json.hpp"

using namespace std;
using namespace nlohmann;

int main(){

    ifstream t("input.txt");
    stringstream buffer;
    buffer << t.rdbuf();
    string jsonString = buffer.str();

    json j = json::parse(jsonString);
    
	
	cout << j.dump(4) << endl;
	cout << j["left"].dump(4) << endl;
	

    return 0;
}