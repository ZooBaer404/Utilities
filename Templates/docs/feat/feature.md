<!--
START OF feat/example-feature.md

Purpose:
Document the details and requirements of the Example Feature.

Update Frequency:
Update whenever the feature’s scope, requirements, or status changes.

Location: docs/feat/example-feature.md
-->

# Example Feature 🚀

---

## Overview

A brief description of what this feature does and why it matters.

Example:  
The Example Feature enables users to register using their email and password securely. It supports password validation and email verification.

---

## Goals

- Provide secure user registration.  
- Ensure email validation to reduce fake accounts.  
- Improve onboarding user experience.

---

## Functional Requirements

| ID  | Requirement Description                                                             | Priority | Status      |
|-----|-------------------------------------------------------------------------------------|----------|-------------|
| FR1 | User can sign up using a valid email and password.                                  | High     | In Progress |
| FR2 | System sends a verification email upon registration.                                | Medium   | Planned     |
| FR3 | Passwords must be at least 8 characters, contain a number, and a special character. | High     | Planned     |

---

## Non-Functional Requirements

- Response time for registration: under 2 seconds.  
- System should handle 1000 concurrent signups without degradation.  
- Follow OWASP best practices for security.

---

## User Stories

- As a new user, I want to register quickly and securely so that I can access the platform.  
- As a user, I want to receive a verification email to confirm my account.  
- As a security officer, I want password rules enforced to reduce breaches.

---

## Design / Flow Diagram

*(Add link or embed diagram here if available)*

---

## Dependencies

- Email service provider (e.g., SendGrid).  
- Database with user authentication support.  
- Frontend signup form.

---

## Status

| Phase       | Start Date | End Date   | Owner    | Notes                          |
|-------------|------------|------------|----------|--------------------------------|
| Planning    | 2025-05-22 | 2025-05-25 | Zubair   | Initial requirement gathering. |
| Development | 2025-05-26 | TBD        | Dev Team | Currently in progress.         |
| Testing     | TBD        | TBD        | QA Team  | To begin after dev completes.  |

---

## Related Issues / Tickets

- [JIRA-1234](https://jira.example.com/browse/JIRA-1234) - User registration task  
- [GITHUB-5678](https://github.com/org/repo/issues/5678) - Email verification feature

---

## Notes

- Make sure to validate emails asynchronously to avoid blocking UI.  
- Consider rate limiting registration attempts to prevent spam.

---

<!-- END OF feat/example-feature.md -->
