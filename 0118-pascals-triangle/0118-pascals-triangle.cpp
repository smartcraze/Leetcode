class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        // Special case: if numRows is 0, return an empty triangle
        if (numRows == 0)
            return triangle;

        // Initialize the first row with 1
        triangle.push_back({1});

        // Generate each row based on the previous row
        for (int i = 1; i < numRows; ++i) {
            vector<int> row;
            row.push_back(1); // First element is always 1

            // Calculate each element in the row based on the previous row
            for (int j = 1; j < i; ++j) {
                row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }

            row.push_back(1);        // Last element is always 1
            triangle.push_back(row); // Add the row to the triangle
        }

        return triangle;
    }
};
