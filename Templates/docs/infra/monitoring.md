<!--
START OF: docs/infra/monitoring.md
Purpose: Setup and best practices for system monitoring (uptime, usage, errors).
Update Frequency: As monitoring tools or configs change.
-->

# 📡 Monitoring Strategy

## 🎯 Purpose
Ensure observability across all major infrastructure components: uptime, errors, latency, usage metrics, and system health.

---

## 🛠️ Tools in Use

| Tool        | Use Case                     | Integration Point        |
|-------------|------------------------------|--------------------------|
| Prometheus  | Metric scraping & alerting   | Backend services + DBs   |
| Grafana     | Visualization dashboard      | Prometheus + logs        |
| Loki        | Centralized logging backend  | Paired with Grafana      |
| UptimeRobot | Public service uptime checks | API endpoints, user site |

---

## 📈 Key Metrics

| Category     | Metric                 | Reason for Tracking                |
|--------------|------------------------|------------------------------------|
| Performance  | API latency (p95, p99) | Detect slowdowns under load        |
| Availability | Service uptime         | Maintain SLA commitments           |
| Errors       | 5xx error rate         | Identify backend or DB issues      |
| Queues       | Pending messages       | Prevent backlogs & detect failures |

---

## 🚨 Alerting Rules

- **p95 latency > 1.5s** for 5 min → WARN
- **5xx errors > 2%** → CRITICAL
- **Queue backlog > 1000** → WARN
- **Service down > 2 min** → CRITICAL

All alerts trigger:
- Slack notifications to `#ops-alerts`
- Optional webhook into Incident Manager

---

## 📅 Review Schedule

- Dashboards reviewed: Weekly (Monday 9AM)
- Alert rules reviewed: Monthly (1st week)

---

<!-- END OF: docs/infra/monitoring.md -->
