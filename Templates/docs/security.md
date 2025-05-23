<!--
START OF: docs/security.md
Purpose: Outline security practices, policies, and guidelines for the project.
Update Frequency: Whenever security policies or threat landscape changes.
-->

# 🔐 Security Guidelines

Security is a priority. This document details how to keep our project safe.

## Security Policies

- Follow [OWASP Top 10](https://owasp.org/www-project-top-ten/) recommendations.
- Use HTTPS everywhere — no excuses.
- Secrets must never be committed to version control.
- Enable 2FA for all critical accounts.
- Regularly update dependencies to patch vulnerabilities.

## Access Control

- Principle of Least Privilege applies to all users and services.
- Roles and permissions are managed via the [roles-and-assignees.md](../project-management/roles-and-assignees.md) doc.
- Use strong, unique passwords; consider a password manager.

## Data Protection

- Encrypt sensitive data at rest and in transit.
- Mask sensitive info in logs.
- Regularly backup data securely.

## Incident Response

- Report any suspected breach immediately to the security lead.
- Document incidents in a dedicated incident log.
- Follow up with a root cause analysis and mitigation plan.

## Best Practices

- Code reviews must include security checks.
- Use static analysis tools to detect vulnerabilities early.
- Educate team regularly on security awareness.

---

Stay vigilant — security is everyone’s job! 🛡️

<!-- END OF: docs/security.md -->
