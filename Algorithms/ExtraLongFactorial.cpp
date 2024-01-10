/*Se decidio utilizar c++
para poder manejar datos más grandes*/

string multiplyStrings(const string &num1, int num2) {
    string result;
    int carry = 0;

    for (int i = num1.size() - 1; i >= 0 || carry; --i) {
        int digit = (i >= 0 ? num1[i] - '0' : 0) * num2 + carry;
        carry = digit / 10;
        result.insert(result.begin(), digit % 10 + '0');
    }

    return result;
}

string extraLongFactorials(int n) {
    string result = "1";

    for (int i = 2; i <= n; ++i) {
        result = multiplyStrings(result, i);
    }

    return result;
}

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    string result = extraLongFactorials(n);
    cout << result << endl;

    return 0;
}