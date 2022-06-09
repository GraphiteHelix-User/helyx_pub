// Definitions
struct _node;
typedef struct _node * NodePtr;

// Methods
void printNodes(NodePtr head);
NodePtr createNode(int value);
void freeNode(NodePtr node);
void freeNodes(NodePtr head);
void addNode(NodePtr head, NodePtr node);
