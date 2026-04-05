### Disaster Management
Relief Distribution System Using Graph (C)

Team Members: Name 1, Name 2

Abstract

This project implements a relief distribution system using graph data structures in C. Locations are nodes, routes are edges, and relief amounts are edge weights. Users can add, update, delete, search, and display routes through a menu-driven interface using dynamic memory allocation.

1. Introduction

Efficient relief distribution is critical during disasters. This project models locations and relief routes using a weighted undirected graph. It allows dynamic management of routes and relief amounts.

2. Objectives
Implement graph using adjacency matrix and dynamic memory
Perform CRUD operations: Add, Update, Delete, Search, Display
Provide a menu-driven interface for ease of use
3. Data Structure

Graph using Adjacency Matrix:

Nodes → Locations
Edges → Routes
Weight → Relief amount
4. Algorithm
Create Graph: Input locations, allocate adjacency matrix
Add Route: Input source, destination, relief amount, update matrix
Update Route: Modify existing route weight
Delete Route: Set route values to 0
Search Route: Check if connection exists and show relief amount
Display Matrix: Print adjacency matrix
Exit Program
5. Implementation
Struct: Graph with vertices and adjMatrix
Functions:
createGraph() – allocate memory
addEdge() – add route
updateEdge() – update relief amount
deleteEdge() – delete route
searchEdge() – check connection
displayGraph() – show adjacency matrix
<img width="491" height="504" alt="Screenshot 2026-04-04 152741" src="https://github.com/user-attachments/assets/9a3fbac1-0926-4093-bb75-4de19ffcb30a" />
<img width="332" height="539" alt="Screenshot 2026-04-04 152957" src="https://github.com/user-attachments/assets/dfb862d0-cbb4-4383-a09d-f06895836f7d" />
<img width="495" height="525" alt="Screenshot 2026-04-04 153013" src="https://github.com/user-attachments/assets/249be1fa-a2d7-4d51-9d94-0e745bae41de" />
<img width="358" height="537" alt="Screenshot 2026-04-04 153031" src="https://github.com/user-attachments/assets/5a2edfbb-fee5-4433-9cc4-a872f93bcac6" />
<img width="354" height="200" alt="Screenshot 2026-04-04 153045" src="https://github.com/user-attachments/assets/27000e31-5e6f-40b2-bdd2-f6fff4c6988e" />





