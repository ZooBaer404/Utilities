# 🧠 Threat Model

## 🎯 Attack Surfaces

| Vector        | Risk              | Mitigation                      |
|---------------|-------------------|---------------------------------|
| XSS in forms  | High              | Escaped output & CSP headers    |
| SQL Injection | Medium (ORM used) | Query builders, strict schemas  |
| DDoS on API   | High              | Rate-limiting + caching         |
| CSRF          | Low               | SameSite cookies + token checks |

---

## 💣 Worst-Case Scenarios

> If attacker gets DB access → no plaintext passwords, thanks bcrypt.
