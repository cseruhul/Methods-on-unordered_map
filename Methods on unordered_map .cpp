#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, double>map = {
    {"One", 1}, {"Two", 2}, {"Three", 3}
    };

    map["PI"] = 3.1416;
    map["root2"] = 1.414;
    map["root3"] = 1.732;
    map["log10"] = 2.302;
    map["loge"] = 1.0;

    string key = "FI";

    if(map.find(key) != map.end()){
        cout << "The value of "<< key << " is : " << map[key] << endl;
    }
    else {
        cout << "The value of " << key << " is not found." << endl;
    }

    //Retrive all elements using iterator

    unordered_map<string, double> :: iterator itr;
    cout << "All elements are: \n";
    for(itr = map.begin(); itr != map.end(); itr++){
        cout << itr->first << " " << itr->second << "\n";
    }

    return 0;
}
