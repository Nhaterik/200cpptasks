#include <iostream>
#include <vector>
using namespace std;

class Grid
{
private:
    vector<vector<int>> v;
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 1, 0};

public:
    // Default constructor
    Grid() {}

    // Depth First Search
    void dfs(int i, int j, int n, int m, vector<vector<int>> &v)
    {
        v[i][j] = 0;
        for (int k = 0; k < 8; k++)
        {
            int in = i + dx[k];
            int jn = j + dy[k];
            if (in >= 0 && jn >= 0 && in < n && jn < m && v[in][jn])
                dfs(in, jn, n, m, v);
        }
    }

    // Function to count islands
    int countIslands(int n, int m, vector<vector<int>> &v)
    {
        int islandCount = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j])
                {
                    islandCount++;
                    dfs(i, j, n, m, v);
                }
            }
        }
        return islandCount;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        Grid g;
        cout << g.countIslands(n, m, grid) << endl;
    }
    return 0;
}