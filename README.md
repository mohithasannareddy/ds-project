
# 📦 Relief Distribution Graph CRUD – Disaster Management System

## 📌 Project Title

**Relief Distribution Graph CRUD – Disaster Management System (C Language)**

---

## 👥 Team Members

* Geethika – Section 6
* Mohitha – Section 6

---

## 🎯 Problem Statement

During disasters such as floods, earthquakes, and cyclones, it becomes difficult to manage and track the distribution of relief materials across multiple locations.

This project simulates a **Relief Distribution Network** using a **Graph Data Structure**, where:

* Locations are represented as nodes
* Routes are represented as edges
* Relief quantity is represented as weight

The system allows users to perform **CRUD operations (Create, Read, Update, Delete)** to efficiently manage relief routes.

---

## 📊 Data Structure Used

This project uses a **Graph Data Structure (Adjacency Matrix Representation)**

* **Nodes (Vertices)** → Disaster-affected locations
* **Edges** → Routes between locations
* **Weight** → Relief amount / supply quantity

### Concepts Used:

* struct
* functions
* dynamic memory allocation (`malloc`, `free`)
* menu-driven programming
* adjacency matrix

---

## ⚙️ Features

The program supports the following operations:

1️⃣ **Add Route** – Create a route between two locations
2️⃣ **Delete Route** – Remove a relief route
3️⃣ **Update Route** – Modify the relief amount
4️⃣ **Search Route** – Check if a route exists
5️⃣ **Display Graph** – Show all routes using adjacency matrix

---

## 🖥️ Menu Driven Interface

```
--- Relief Distribution Menu ---
1. Add Route
2. Delete Route
3. Update Route
4. Search Route
5. Display Graph
6. Exit
Enter your choice:
```

---

## 🧠 Algorithm Overview

### ➤ Create Graph

* Allocate memory dynamically
* Initialize adjacency matrix with 0

### ➤ Add Route

* Input source, destination, weight
* Store in matrix

### ➤ Delete Route

* Set matrix value to 0

### ➤ Update Route

* Check if route exists
* Modify weight

### ➤ Search Route

* Check matrix value
* Display result

### ➤ Display Graph

* Traverse matrix
* Print all values

---

## 💻 Compilation Instructions

### Compile:

```
gcc main.c -o project
```

### Run:

```
./project
```


## 📂 Project Structure

```
relief-distribution-graph-c/

├── src/
│   └── main.c
│
├── docs/
│   └── project_report.pdf
│
├── ppt/
│   └── presentation.pptx
│
├── README.md
├── sample_output.txt
├── video_demo_link.txt
```

---

## 🚀 Real-world Application

* Disaster relief management
* Emergency logistics planning
* Supply chain optimization

---

## ✅ Conclusion

This project demonstrates how **Graph Data Structures** can be used in real-world disaster management systems. The implementation of CRUD operations helps efficiently manage dynamic data such as relief routes and supplies.
<img width="491" height="504" alt="Screenshot 2026-04-04 152741" src="https://github.com/user-attachments/assets/e18a0fbf-51fb-4cd8-b681-ccf3932da10d" />
<img width="332" height="539" alt="Screenshot 2026-04-04 152957" src="https://github.com/user-attachments/assets/99654d86-a304-491d-8174-288ed52d8e9b" />
<img width="495" height="525" alt="Screenshot 2026-04-04 153013" src="https://github.com/user-attachments/assets/017c2d83-fad7-4bee-9949-075bf09d247f" />
<img width="358" height="537" alt="Screenshot 2026-04-04 153031" src="https://github.com/user-attachments/assets/618c7f37-d815-4bad-a658-d167be97aa29" />
<img width="354" height="200" alt="Screenshot 2026-04-04 153045" src="https://github.com/user-attachments/assets/37d76ffc-7e20-404b-b00c-ace8b8a8331e" />







---
