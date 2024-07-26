class Solution {
public:
    bool isSafe( vector<vector<char>>& board , vector<vector< bool > > &rowPresent , vector<vector< bool > > &colPresent ,vector<vector< vector< bool > > > &subPresent,int row ,  int col , int val )
    {
        if( rowPresent[row][val ] == true )
        {
            return false;
        }
        if( colPresent[col][val] == true )
        {
            return false;
        }
        if( subPresent[row / 3][col / 3][val] == true )
        {
            return false;
        }
        return true;
    }
    void solve( vector<vector<char>>& board , vector<vector< bool > > &rowPresent , vector<vector< bool > > &colPresent ,vector<vector< vector< bool > > > &subPresent, int row , int col  , vector<vector<char>>& ans )
    {
        if( row == 9 )
        {
            // store answer
            ans = board;
            return ;
        }
        if( col == 9 )
        {
            solve( board , rowPresent , colPresent , subPresent , row + 1 ,0 , ans );
            return ;
        }

        if( board[row][col] != '.')
        {
            solve( board , rowPresent , colPresent , subPresent , row , col + 1 , ans );
            return ;
        }

            for( int i = 1 ; i < 10 ; i++ )
            {
                if( isSafe( board , rowPresent , colPresent , subPresent , row , col , i ))
                {
                    board[ row ][ col ] = '0' + i;
                    rowPresent[ row][i] = true;
                    colPresent[ col ][i ] = true ;
                    subPresent[ row / 3  ][ col / 3 ][i] = true;
                    //  call resursion
                    solve( board , rowPresent , colPresent , subPresent ,row , col + 1, ans);
                    // if solution is found the stop the recurssion
                    if (!ans.empty()) 
                    {
                        return;
                    }
                    board[row][col] = '.';
                    rowPresent[ row][i] = false;
                    colPresent[ col ][i ] = false ;
                    subPresent[ row / 3  ][ col / 3 ][i] = false;

                }
            }


    }
    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        vector<vector< bool >> rowPresent( 9 , vector<bool> ( 10 , false ));
        vector<vector< bool > > colPresent( 9 , vector<bool> ( 10 , false ));
        vector<vector< vector< bool > > > subPresent( 3 , vector< vector<bool> > (3 , vector<bool> ( 10 , false )));
        for( int i = 0 ; i < 9 ; i++ )
        {
            for( int j = 0 ; j < 9 ; j ++ )
            {
                if( board[i][j] != '.' )
                {
                    rowPresent[i][ board[i][j] - '0'] = true;
                    colPresent[j][board[i][j] - '0' ] = true;
                    subPresent[i / 3][j / 3][ board[i][j] - '0' ] = true;
                }
            }
        }
        // int index = 0;
        vector<vector<char>> ans;
        int row = 0 , col = 0;
        solve( board , rowPresent , colPresent , subPresent , row , col , ans );
        if( !ans.empty())
        {
            board = ans;
        }


    }
};