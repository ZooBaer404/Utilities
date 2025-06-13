<!--
START OF: docs/db/seeding.md
Purpose: Document how the database is seeded with initial/test data.
Update Frequency: When new seed data scripts or strategies are added.
-->

# 🌱 Database Seeding Guide

Seeding: the sacred art of fake data and test accounts.

---

## 📁 File Structure

- `seeds/`
  - `users_seed.sql`
  - `assignments_seed.sql`
  - `plagiarism_logs_seed.sql`

---

## 🔄 Strategy

We use SQL scripts + custom CLI commands to populate development and test environments with meaningful (but fake) data.

> 🤖 Future: Consider using a faker library to generate more randomized, realistic seed data.

---

## 🔌 Running Seeding Scripts

```bash
# SQL seeding
psql -U your_user -d your_db -f seeds/users_seed.sql

# OR: Programmatic
python scripts/seed_data.py
```

## 🧪 Test Seeding

| Script                    | Purpose               | Can Run in Prod? |
|---------------------------|-----------------------|------------------|
| `seed_users.py`           | Create dev test users | ❌ No            |
| `seed_plagiarism_logs.py` | Simulate log entries  | ❌ No            |

> 🧙 Tip: Always isolate seeding from live environments unless you're chaos testing.

<!-- END OF: docs/db/seeding.md -->
