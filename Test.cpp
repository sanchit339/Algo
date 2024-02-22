#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void resetVisited(vector<vector<bool>>& visited) {
    for (int i = 0; i < visited.size(); ++i) {
        for (int j = 0; j < visited[i].size(); ++j) {
            visited[i][j] = false;
        }
    }
}

bool isValid(int x, int y, int n) {
    return x >= 0 && y >= 0 && x < n && y < n;
}

void findPaths(vector<vector<int>>& grid, int oxygen, int m, int x, int y, string path, vector<string>& paths, vector<string>& feasiblePaths, vector<vector<bool>>& visited, int n) {
    if (visited[x][y]) return; // Avoid revisiting the same cell
    visited[x][y] = true;

    if (y == n - 1 && (x == 0 || x == n - 1)) {
        cout << x << " " << y << endl;
        paths.push_back(path);
        if (oxygen >= 0) {
            feasiblePaths.push_back(path + " " + to_string(oxygen));
        }
        return;
    }
    
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    char dir[] = {'R', 'D', 'L', 'U'};
    
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (isValid(nx, ny, n) && grid[nx][ny] != 0 && !visited[nx][ny]) {
            // cout << nx << " " << ny << " - ";
            cout << grid[nx][ny] << " - ";
            int oxygenNeeded = grid[x][y] + grid[nx][ny];
            if (grid[nx][ny] == 9) {
                oxygen = m;
            } else {
                oxygen -= oxygenNeeded;
            }
            if (oxygen >= 0) {
                findPaths(grid, oxygen, m, nx, ny, path + dir[i], paths, feasiblePaths, visited, n);
            }
        }
        resetVisited(visited);
    }
    cout << endl;
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    
    int m;
    cin >> m;
    
    vector<string> paths;
    vector<string> feasiblePaths;
    vector<vector<bool>> visited(n, vector<bool>(n, false)); // Visited array
    
    findPaths(grid, m, m, 0, 0, "", paths, feasiblePaths, visited, n);
    
    cout << "The available paths are" << endl;
    for (const string& p : paths) {
        cout << p << endl;
    }
    
    if (feasiblePaths.empty()) {
        cout << "No feasible path" << endl;
    } else {
        cout << "The feasible paths with remaining oxygen levels are" << endl;
        for (const string& p : feasiblePaths) {
            cout << p << endl;
        }
    }
    
    return 0;
}
