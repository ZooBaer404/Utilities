# 🐞 Debugging Guide

<!--
START OF: docs/debugging.md
Purpose: Help devs identify and fix recurring or sneaky bugs.
-->

## ⚠️ Common Issues

### ❌ `CSRF token mismatch`

- Happens when:
  - Backend restarts while frontend still running.
- Fix:
  - Hard refresh (`Ctrl+Shift+R`) to fetch new token.

---

### ❌ WebSocket disconnects after ~30s

- Likely Cause:
  - Server’s idle timeout not extended.
- Fix:
  - Set `pingInterval` in frontend and backend.

---

## 🧰 Useful Commands

```bash
# Show open ports
lsof -i :8000

# Check Redis health
redis-cli ping
```

> 📌 Update this every time you find a bug that made you want to quit.

<!-- END OF: docs/debugging.md -->
