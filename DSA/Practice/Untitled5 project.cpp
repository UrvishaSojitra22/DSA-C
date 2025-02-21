int main() {
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++) {
        // Printing leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Printing increasing numbers
        for (int j = i + 1; j <= n; j++) {
            cout << j << " ";
        }

        // Printing decreasing numbers
        for (int j = n - 1; j >= i + 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
