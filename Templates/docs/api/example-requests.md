<!--
START OF example-requests.md

Purpose:  
This document provides ready-to-use HTTP request examples for testing and documentation purposes.  
Useful for frontend/backend devs, testers, or API consumers. Includes both success and failure cases.

Update Frequency:  
Update whenever the OpenAPI spec changes or new endpoints are added.

Location: /api/example-requests.md
-->

# Start of example-requests.md

# 📬 Example API Requests

These examples can be used with tools like Postman, Insomnia, or `curl`.

---

## 🔐 Login Request

**Endpoint:** `POST /login`

```http
POST /login HTTP/1.1
Host: api.yourproject.dev
Content-Type: application/json

{
  "username": "zubair",
  "password": "supersecure123"
}
