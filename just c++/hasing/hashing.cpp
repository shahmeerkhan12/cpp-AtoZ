#include <iostream>
#include <unordered_map> // For hash table

int main() {
    // Create a hash table (unordered_map) with string keys and integer values
    std::unordered_map<std::string, int> myHashTable;

    // Insert key-value pairs
    myHashTable["apple"] = 10;
    myHashTable["banana"] = 5;
    myHashTable["orange"] = 8;

    // Access values using keys
    std::cout << "Number of apples: " << myHashTable["apple"] << std::endl;
    std::cout << "Number of bananas: " << myHashTable["banana"] << std::endl;
    std::cout << "Number of oranges: " << myHashTable["orange"] << std::endl;

    // Check if a key exists
    if (myHashTable.find("grape") != myHashTable.end()) {
        std::cout << "Number of grapes: " << myHashTable["grape"] << std::endl;
    } else {
        std::cout << "Grapes not found in the hash table." << std::endl;
    }

    return 0;
}
