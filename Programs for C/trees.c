#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

Node* insert_into_bst(Node* root, int key) {
    if (root == NULL) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->key = key;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    if (key < root->key) {
        root->left = insert_into_bst(root->left, key);
    } else if (key > root->key) {
        root->right = insert_into_bst(root->right, key);
    }

    return root;
}

void visualize_bst_search(Node* root, int searchSequence[], int sequenceSize) {
    Agraph_t *graph;
    Agnode_t *node;
    Agedge_t *edge;

    graph = agopen("G", Agdirected, 0);
    agattr(graph, AGNODE, "shape", "circle");

    for (int i = 0; i < sequenceSize; ++i) {
        root = insert_into_bst(root, searchSequence[i]);
        
        char nodeName[10];
        sprintf(nodeName, "%d", searchSequence[i]);
        node = agnode(graph, nodeName, 1);

        if (i > 0) {
            char parentName[10];
            sprintf(parentName, "%d", searchSequence[i - 1]);
            edge = agedge(graph, agnode(graph, parentName, 1), node, 0, 1);
        }
    }

    FILE *fp = fopen("bst_search.dot", "w");
    agwrite(graph, fp);
    fclose(fp);

    system("dot -Tpng bst_search.dot -o bst_search.png");
    system("start bst_search.png");
    agclose(graph);
}

int main() {
    Node* root = NULL;
    int searchSequence[] = {6, 7, 8, 9, 1023, 4564, 4832, 443, 1234};
    int sequenceSize = sizeof(searchSequence) / sizeof(searchSequence[0]);

    visualize_bst_search(root, searchSequence, sequenceSize);

    return 0;
}

