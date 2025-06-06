<!-- 
START OF: docs/research/findings.md
Purpose: Summarize key research insights and their implications for project decisions.
Update Frequency: After completing major investigations or adopting new technologies.
-->

# 📌 Research Findings Summary

This document highlights key takeaways from various investigations stored under `docs/research/`. It serves as a TL;DR for stakeholders, team leads, or your future self when you’ve forgotten why a decision was made.

---

## 🔍 Summary Table

| Topic                  | Conclusion                           | Decision Taken           | Link to Details                     |
|------------------------|--------------------------------------|--------------------------|-------------------------------------|
| Database Choice        | PostgreSQL is most balanced choice   | Adopt PostgreSQL         | [databases/postgres-vs-mongo.md]    |
| CI/CD Tool             | GitHub Actions better for simplicity | Use GitHub Actions       | [tools-evaluation/ci-cd.md]         |
| Architecture Pattern   | Microservices over Monolith          | Start with microservices | [design-alternatives/microservices.md] |

---

## 🧠 Key Insights

- **Performance**: Golang gave 35% better response time than Node.js for compute-heavy workloads.
- **Cost Analysis**: Self-hosted solutions are 70% cheaper over 12 months compared to SaaS.
- **Security Considerations**: OAuth2 with PKCE provides better protection for mobile apps than traditional flows.

---

## ✅ How We Use This

This file isn't just a report card — it's a decision map.

- Every time we complete a research doc, we summarize it here.
- It helps avoid repeating research.
- It helps justify past decisions when new team members join or management asks, "Why the hell are we using this?"

---

> 📅 Update this file regularly. A stale findings doc is like a map with no roads.

<!-- END OF: docs/research/findings.md -->
