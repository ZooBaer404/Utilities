<!--
START OF: docs/db/schema.md
Purpose: Describe the logical and physical structure of the database.
Update Frequency: When new tables, columns, or relationships are added/modified.
-->

# 🗃️ Database Schema Documentation

This document outlines the structure of the system's primary data storage — aka, the tables you’ll break when you forget a foreign key constraint.

---

## 📌 Table Overview

| Table Name        | Purpose                              | Key Relationships        |
|-------------------|--------------------------------------|--------------------------|
| `users`           | Stores user profiles and credentials | FK to `roles`            |
| `assignments`     | Stores assignment uploads            | FK to `users`, `courses` |
| `plagiarism_logs` | Stores detection results             | FK to `assignments`      |

---

## 📂 Detailed Table Structures

### 🔸 `users`

| Column       | Type         | Constraints               | Description               |
|--------------|--------------|---------------------------|---------------------------|
| `id`         | UUID         | PK                        | Unique identifier         |
| `name`       | VARCHAR(255) | NOT NULL                  | Full name                 |
| `email`      | VARCHAR(255) | UNIQUE, NOT NULL          | Login email               |
| `role_id`    | UUID         | FK to `roles(id)`         | User role                 |
| `created_at` | TIMESTAMP    | DEFAULT CURRENT_TIMESTAMP | Timestamp of registration |

---

### 🔸 `plagiarism_logs`

| Column          | Type      | Constraints             | Description                   |
|-----------------|-----------|-------------------------|-------------------------------|
| `id`            | UUID      | PK                      | Unique identifier             |
| `assignment_id` | UUID      | FK to `assignments(id)` | Assignment checked            |
| `similarity`    | FLOAT     | NOT NULL                | Similarity score (0.0 to 1.0) |
| `matched_with`  | TEXT      |                         | IDs of matching assignments   |
| `checked_at`    | TIMESTAMP |                         | When the check occurred       |

---

> 🧠 Don’t forget: Normalize first, cry later.

<!-- END OF: docs/db/schema.md -->
