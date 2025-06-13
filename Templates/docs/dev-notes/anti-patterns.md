<!--
START OF: docs/dev-notes/anti-patterns.md
Purpose: Warn devs about dangerous or discouraged patterns in the codebase.
Update Frequency: When someone messes up and we all learn from it.
-->

# 💣 Anti-Patterns and Code Sins

What NOT to do, unless you want your PR turned into a meme.

---

## ⛔ Global State Abuse

**BAD:**

```js
window.currentUser = { name: "Zubair" }
```
WHY: Leaks across modules, hard to debug, impossible to test.

## ⚠️ Silent Fails

BAD:
```python
try:
    risky_op()
except:
    pass
```
WHY: Don’t pretend nothing broke. Log or raise explicitly.

## 🤡 Copy-Paste Configs

BAD:
```json
"port": 3000,
"host": "localhost",
"port": 3000,
"env": "dev"
```

## 🧻 Dumping Everything in One File

BAD: utils.js with 1200 lines
WHY: “utils” is where logic goes to die. Split into purpose-based files.

>  📌 Feel free to roast new anti-patterns as you find them. We grow through mockery.

<!-- END OF: docs/dev-notes/anti-patterns.md -->
