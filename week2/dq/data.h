using namespace std;

enum State
{
    LINE,
    C_COMMENT
};

typedef struct variables
{
    int lineWeight;         // Weight of every line due total number of lines
    int lineCounter;        // how many lines that are not C-style comments
    int nestDepth;          // Nesting depth
    int nestWeight;         // Weight of every line due to nesting depth
    int maxNest;            // Maximum nesting depth
    int docCounter;         // counts the documentation strength
    int cComments;          // how many C-style comments
    int eolnComments;       // how many eoln comments
    bool initialCComment;   // checks if C-style comment is an initial comment
    State currentState;     // LINE or COMMENT
} variables;