#include "pa4.h"
using namespace std;
// do not add extra libraries here


int find_structure(std::vector<std::vector<std::pair<int, int>>> &bond_energies, std::vector<std::vector<std::pair<int, int>>> &lowest_energy_structure) {
    int lowest_total_energy = 0;

    //IMPLEMENT YOUR SOLUTION HERE
    int num_vertices = bond_energies.size();

    std::vector<bool> in_tree(num_vertices, false);
    std::vector<int> key(num_vertices, INT_MAX);
    std::vector<int> parent(num_vertices, -1);

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        in_tree[u] = true;

        for (const auto &edge : bond_energies[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (!in_tree[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    lowest_energy_structure.clear();
    lowest_energy_structure.resize(num_vertices);

    for (int i = 1; i < num_vertices; ++i) {
        int u = parent[i];
        int v = i;
        int weight = key[i];

        lowest_total_energy += weight;

        lowest_energy_structure[u].emplace_back(v, weight);
        lowest_energy_structure[v].emplace_back(u, weight);
    }

    return lowest_total_energy;
}

