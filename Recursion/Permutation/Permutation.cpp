#include <iostream>

void generate_combinations(const std::string& input_str, std::string current_combination = "", int index = 0) {
    if (index == input_str.length()) {
        std::cout << current_combination << std::endl;
        return;
    }

    // Include the current character in the combination
    generate_combinations(input_str, current_combination + input_str[index], index + 1);

    // Exclude the current character from the combination
    generate_combinations(input_str, current_combination, index + 1);
}

int main() {
    std::string input_string;
    
    // Get input from the user
    std::cin >> input_string;

    // Generate and print combinations
    generate_combinations(input_string);

    return 0;
}
