class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != static_cast<size_t>(m) * n) {
            return {};
        }

        std::vector<std::vector<int>> result;
        result.reserve(m);

        for (int i = 0; i < m; ++i) {
            result.emplace_back(original.begin() + i * n,
                                original.begin() + (i + 1) * n);
        }

        return result;
    }
};