<!-- 
START OF requirements.md

Purpose:  
This document defines and categorizes all project requirements, both functional and non-functional.  
It is based on the structured processes recommended in *Software Project Management* by Bob Hughes et al.

Update Frequency:  
Update after every stakeholder meeting, feature discussion, or planning phase.

Location: /requirements/requirements.md  
-->

# Start of requirements.md

# 📌 Software Requirements Specification (SRS)

A single source of truth for what the system should do — and how well it should do it.  
If it’s not here, it doesn’t exist. 🧾❗

---

## ✅ Functional Requirements

Features and behaviors the system **must** support.

| Req ID | Title                | Description                               | Priority | Source        |
|--------|----------------------|-------------------------------------------|----------|---------------|
| FR-001 | User Registration    | Users can sign up with email and password | High     | Stakeholder A |
| FR-002 | Login Authentication | Users can log in with credentials         | High     | Product Owner |
| FR-003 | Profile Management   | Users can edit their personal details     | Medium   | UX Lead       |
| FR-004 | Admin Dashboard      | Admins can view user stats and reports    | Low      | PM            |

---

## 📐 Non-Functional Requirements

How the system performs under the hood: quality, constraints, and system behavior.

| Req ID  | Title            | Description                       | Type          | Priority |
|---------|------------------|-----------------------------------|---------------|----------|
| NFR-001 | Response Time    | < 200ms for 95% of requests       | Performance   | High     |
| NFR-002 | Uptime Guarantee | 99.9% uptime per quarter          | Reliability   | High     |
| NFR-003 | Accessibility    | WCAG 2.1 AA Compliance            | Usability     | Medium   |
| NFR-004 | Platform Support | Must run on Chrome, Firefox, Edge | Compatibility | Medium   |

---

## 🔁 Requirement Traceability Matrix (RTM)

Mapping of requirements to implementation and test coverage.

| Req ID  | Implemented In     | Test Case ID(s) | Verified By |
|---------|--------------------|-----------------|-------------|
| FR-001  | /auth/register.js  | MT-001          | QA Team     |
| FR-002  | /auth/login.js     | MT-002          | QA Lead     |
| NFR-001 | API Gateway Config | PERF-01         | DevOps      |
| FR-003  | /user/profile.js   | MT-003          | QA Intern   |

---

## 🔧 Changes & Reviews

| Date       | Summary                               | Author  |
|------------|---------------------------------------|---------|
| 2025-05-12 | Initial version of requirements added | Zubair  |
| 2025-05-14 | Added NFRs after design discussion    | UX Team |
| 2025-05-16 | Updated traceability matrix           | QA Lead |

---

## 🧠 Notes

- Requirements should be validated in every sprint review
- Changes must follow the change-management protocol
- Prioritization should reflect MoSCoW or similar system

---

## 📒 References

- [product-vision.md](../strategy/product-vision.md)  
- [design-decision.md](../design/design-decision.md)  
- [risk-management.md](../project-management/risk-management.md)  
- [manual-tests.md](../qa/manual-tests.md)  

<!-- END OF requirements.md -->
