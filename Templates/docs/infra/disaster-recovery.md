# Disaster Recovery Plan

<!-- START OF: disaster-recovery.md
Purpose: Define the strategy and procedures for restoring services in the event of catastrophic failures, cyberattacks, or hardware damage.
Update Frequency: Review quarterly or after any major incident/architecture change.
-->

## 🔥 Recovery Objectives

| Objective                 | Value              | Notes                   |
|---------------------------|--------------------|-------------------------|
| RTO (Recovery Time Obj.)  | `e.g., 2 hours`    | Max acceptable downtime |
| RPO (Recovery Point Obj.) | `e.g., 15 minutes` | Max data loss tolerance |

---

## 🧩 System Recovery Components

### 1. **Backup Strategy**
- Full database backup: `Daily at 02:00 UTC`
- Incremental file system snapshots: `Every 15 minutes`
- Configurations stored in: `/backups/configs/`
- Encrypted using: `AES-256`, key rotation every 90 days

### 2. **Storage Locations**
- 🔒 Off-site Cloud Backup: `AWS S3 Glacier`
- 🧊 Cold Storage: `Encrypted drives stored in safe datacenter vault`

---

## 🌐 Recovery Procedures

### 🛠 General Steps
1. Trigger recovery: `incident-response.sh` or via monitoring alert
2. Notify stakeholders and activate DR lead
3. Restore DB from last snapshot
4. Redeploy infrastructure via IaC (Terraform/Ansible)
5. Validate health checks
6. Go live after QA approval

### 🐘 Database Recovery
- Restore from `/backups/db-dump-latest.sql.gz`
- Import using:
  ```bash
  gunzip < db-dump-latest.sql.gz | psql -U app_user -d prod_db
  ```

## 📦 Application Recovery

- Pull latest stable Docker images from registry
- Restart all services via:
```bash
docker compose -f docker-compose.prod.yml up -d
```

## 🔁 Testing & Validation

| Test Type              | Frequency | Last Tested  | Result  |
|------------------------|-----------|--------------|---------|
| Full DR Drill          | Quarterly | `2025-04-02` | ✅ Pass |
| RTO/RPO Metrics        | Monthly   | `2025-06-01` | ✅ OK   |
| Backup Integrity Check | Weekly    | `2025-06-07` | ✅ OK   |

## 📣 Communication Plan

| Stakeholder           | Notification Method       | Responsible Party     |
|-----------------------|---------------------------|-----------------------|
| DevOps                | PagerDuty / Slack Alert   | On-call engineer      |
| Management            | Email + Dashboard Report  | DR Coordinator        |
| Customers (if needed) | Status Page / Email Blast | Customer Support Lead |

## 🧪 Lessons Learned Log

| Incident   | Date       | Issue                  | Resolution Summary       |
|------------|------------|------------------------|--------------------------|
| DB failure | 2025-03-18 | RDS instance corrupted | Restored from backup     |
| S3 outage  | 2025-01-11 | AWS region down        | Switched region failover |


# 📁 Related ocsD

- [monitoring.md](monitoring.md)
- [logging-monitoring.md](logging-monitoring.md)
- [load-balancer-config.md](load-balancer-config.md)
- [deployment-guide.md](deployment-guide.md)
- [ci-cd.md](ci-cd.md)

<!-- END OF: disaster-recovery.md -->
