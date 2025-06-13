<!--
START OF: docs/infra/message-queues.md
Purpose: Track all queues, topics, and event schemas in use.
Update Frequency: When new queues or events are added.
-->

# 📨 Message Queues & Events

Everything async lives here.

---

## 🎯 Queue/Topic List

| Name                     | Type       | Purpose                              |
|--------------------------|------------|--------------------------------------|
| `detect.request.queue`   | RabbitMQ   | Queue new assignments for detection  |
| `report.ready.topic`     | Kafka      | Notify when report is generated      |
| `user.activity.queue`    | RabbitMQ   | Log actions asynchronously           |

---

## 🧾 Sample Payloads

```json
{
  "type": "detection_request",
  "submission_id": "abc123",
  "uploaded_at": "2025-06-08T12:00:00Z"
}
```

> 🧠 Consumers are versioned to handle breaking changes.

<!-- END OF: docs/infra/message-queues.md -->
