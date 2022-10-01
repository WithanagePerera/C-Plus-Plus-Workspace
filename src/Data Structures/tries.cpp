// Efficient info retrieval data structure
// Every node consists of multiple branches
// Each branch represents a possible character of keys

#include <string>

using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode
{
    struct TrieNode*children[ALPHABET_SIZE];

    bool isEndOfWord;
};

struct TrieNode *getNode()
{
    struct TrieNode *pNode = new TrieNode;
    pNode->isEndOfWord = false;

    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNOde->children[i] = NULL;

    return pNode;
}

void insert (struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl ->children[index])
    }
}