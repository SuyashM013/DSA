#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <climits>

using namespace std;

unordered_map<string, vector<vector<string>>> recipeBook;
unordered_map<string, int> memo;

int minOrbsToBrew(const string& potion) {
    if (recipeBook.find(potion) == recipeBook.end()) {
        return 0; 
    }

    if (memo.find(potion) != memo.end()) {
        return memo[potion]; 
    }

    int placementlelo = INT_MAX; 

    for (const auto& recipe : recipeBook[potion]) {
        int orbsRequired = recipe.size() - 1; 

        for (const string& ingredient : recipe) {
            orbsRequired += minOrbsToBrew(ingredient); 
        }

        placementlelo = min(placementlelo, orbsRequired); 
    }

    memo[potion] = placementlelo; 
    return placementlelo;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        size_t pos = line.find('=');
        string potion = line.substr(0, pos);
        string ingredientsPart = line.substr(pos + 1);

        istringstream iss(ingredientsPart);
        string ingredient;
        vector<string> ingredients;
        while (getline(iss, ingredient, '+')) {
            ingredients.push_back(ingredient);
        }

        recipeBook[potion].push_back(ingredients);
    }

    string targetPotion;
    getline(cin, targetPotion);

    int result = minOrbsToBrew(targetPotion);
    cout << result << endl;

    return 0;
}