#include <string>
#include <vector>

void char_frequency() {
    std::string text = "banana";
    int count = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == 'a') count += 1;
    }
    (void)count;
}

void max_of_two() {
    int a = 33, b = 57;
    int m = (a > b) ? a : b;
    (void)m;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

extern "C" int bright_ripple();
extern "C" void serene_delta();
extern "C" void cobalt_delta();

int main() {
    char_frequency();
    max_of_two();
    text_contains();
    square_value();
    serene_delta();
    cobalt_delta();
    return bright_ripple();
}
