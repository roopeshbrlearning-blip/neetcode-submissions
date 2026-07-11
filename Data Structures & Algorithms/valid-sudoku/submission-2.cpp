class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        std::unordered_map<int, std::unordered_set<char>> rows;
        std::unordered_map<int, std::unordered_set<char>> cols;
        std::map<std::pair<int,int>, std::unordered_set<char>>squares;

        for(int r = 0; r<9; r++){
            for(int c = 0; c<9; c++){

                if(board[r][c] == '.') continue;


                if(rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || 
                squares[{r / 3, c / 3}].count(board[r][c])){
                    return false;
                }

                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                squares[{r / 3, c / 3}].insert(board[r][c]);

            }
        }

        return true;
        
    }
};


/* 
Note:
Using std::map instead of std::unoredered_map beacuse map can 
store "std::pair" as key. std::map is implemented as a balanced 
binary search tree, not a hash table. 

std::unordered_map relies on hashing its keys.it knows how to hash basic types
like int or std::string, it doesn't know how to hash a std::pair<int, int> 
out of the box.
*/
