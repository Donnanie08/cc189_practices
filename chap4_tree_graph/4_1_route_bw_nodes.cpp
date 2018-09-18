#include <iostream>
#include <vector>
#include <queue>

using namespace std;


/**
 * 4.1 Route Between Nodes
 * Given a directed graph,  write an algorithm to find out whether there is a route between two nodes
 **/

/**
 * Summary:
 * 1. initialze all nodes to be Unvisited
 * 2. push the root to queue
 * 3. while the queue is not empty, pop from queue
 * 4. get the adjcency list for current root
 * 5. compare it with the input node, if equal, return, if not, go back to step 3
 **/

enum State{
    Univisited = 0,
    Visited,
    Visiting
}visitState;

class Node{
public:
    int value;
    State state;
    vector<Node> children;
};

class Graph{
public:    
    vector<Node> nodes;
    Graph();
};

class RouteBetweenNodes{
public:
    RouteBetweenNodes();
    ~RouteBetweenNodes();

    bool search(Graph g, Node start, Node end){
        if(start == end) return true;

        //Use queue to record the current node
        queue<Node> q;

        //initialize the state for every nodes
        for(Node u : g.children)
            u.state = visitState.Univisited;

        //we jump to start node, not neccessarily to traverse form the root
        start.state = visitState.Visiting;
        q.push(start);
        Node u;
        while(!q.empty()){
            u = q.pop();
            if(u != NULL){
                for(Node v : u.children){
                    if(v.state == visitState.Univisited){
                        if(v == end) return true;
                        else{
                            v.state = visitState.Visiting;
                            q.push(v);
                        }
                    }
                }
                u.state = visitState.Visited;
            }
        return false;

        }

    }
};

int main(){
    
}