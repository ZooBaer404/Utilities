<!--
START OF: docs/infra/logging-monitoring.md
Purpose: Detail log storage, monitoring setup, and alerting behavior.
Update Frequency: When observability strategy changes.
-->

# 📈 Logging & Monitoring

Because debugging without logs is a trust fall.

---

## 📝 Logging

| Stream          | Destination             | Retention |
|-----------------|-------------------------|-----------|
| App Logs (info) | AWS CloudWatch Logs     | 7 days    |
| Error Logs      | S3 (`logs-errors`)      | 30 days   |
| Access Logs     | Load Balancer Logs (S3) | 90 days   |

---

## 📡 Monitoring

- **Tool**: AWS CloudWatch + Grafana
- **Dashboards**: `API latency`, `CPU usage`, `Similarity engine health`

---

## 🚨 Alerts

| Alert Name       | Condition                   | Action          |
|------------------|-----------------------------|-----------------|
| `HighErrorRate`  | 5xx > 10% for 5m            | Slack + Email   |
| `ServiceDown`    | No response `/health` 2 min | PagerDuty alert |
| `DBLatencySpike` | Query > 2s average          | Slack warning   |

---

> 🧠 Logs are your friend. Until they aren't. Then they're a 100MB file of regret.

<!-- END OF: docs/infra/logging-monitoring.md -->
