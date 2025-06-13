# 🧭 Feature Walkthrough: Realtime Notifications

<!--
START OF: walkthroughs/notifications.md
Purpose: Explain how realtime notification system works end-to-end.
-->

## 🧱 Components Involved

- `backend/api/notify.py`
- `redis-pubsub`
- `frontend/NotificationPanel.jsx`

---

## 🔁 Data Flow

1. User sends a message.
2. API triggers event → pushed to Redis.
3. Frontend subscribes to Redis via WebSocket.
4. Message shows in NotificationPanel.

---

## 🐛 Gotchas

- Redis must be live before starting frontend.
- WS fails silently if token expired.

---

> 📌 Update this doc whenever the notification flow changes.

<!-- END OF: walkthroughs/notifications.md -->
