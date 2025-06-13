<!--
START OF: docs/database/data-governance.md
Purpose: Define rules and responsibilities for maintaining clean, compliant, and secure data.
Update Frequency: As compliance or internal policies evolve.
-->

# 🧾 Data Governance Policy

## 📌 Purpose
To ensure all data stored and processed by this system remains accurate, secure, traceable, and compliant with privacy laws (e.g., GDPR, local regulations).

---

## 🧼 Data Ownership

| Data Type          | Owner           | Notes                               |
|--------------------|-----------------|-------------------------------------|
| User information   | Auth subsystem  | Must be encrypted and access-logged |
| Assignment content | Submissions svc | Immutable after submission          |
| Audit logs         | Ops team        | Retained for 1 year minimum         |

---

## 🗑️ Data Retention Policy

| Table             | Retention Rule                         |
|-------------------|----------------------------------------|
| `plagiarism_logs` | 12 months, then archived               |
| `user_sessions`   | 30 days inactive = deletion            |
| `assignments`     | Never auto-deleted (manual purge only) |

---

## 🔒 Data Security

- Encryption at rest: Enabled (e.g., pgcrypto / TDE)
- In-transit: TLS 1.3 or higher
- Access Control: Role-based access (RBAC)

---

## 🧾 Auditing & Traceability

- All CRUD operations on sensitive data are logged
- Logs are immutable and stored separately
- Request metadata includes:
  - `user_id`
  - `route`
  - `timestamp`

---

## ✅ Compliance Checklist

- [x] Personally Identifiable Info (PII) encrypted
- [x] Data purge APIs for admin compliance
- [ ] Explicit opt-in for data collection (to be added)

---

<!-- END OF: docs/database/data-governance.md -->
