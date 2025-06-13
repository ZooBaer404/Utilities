<!--
START OF: docs/dev-notes/data-flow.md
Purpose: Show how data moves across the system — from input to final output.
Update Frequency: On major architecture or I/O changes.
-->

# 🔁 Data Flow Overview

From user's click to DB writes and API responses, this doc tracks the *life journey* of your data.

---

## 🧭 High-Level Flow

```txt
[User Input]
     ↓
[Frontend Validation]
     ↓
[API Gateway] --> [Auth Layer]
     ↓
[Business Logic / Controller]
     ↓
[Database OR Cache]
     ↓
[Result Returned]
```

## 🧠 Component-Wise Flow

Example: Plagiarism Submission

```txt
Student Upload → FileProcessor
               → Preprocessing → Embedding Engine
               → Result to SimilarityService
               → Save to DB → Trigger Notification
```


## 🔄 Realtime Events

- File Uploads → Async processing queue
- Detection Result → WebSocket / webhook for admins

> 🧪 Visual diagrams live in [diagrams/] for fancier views.

<!-- END OF: docs/dev-notes/data-flow.md -->
