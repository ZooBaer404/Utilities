<!-- 
START OF test-plan.md

Purpose:  
This document outlines the overall testing strategy for the software project.  
It includes testing objectives, types, environments, schedules, and responsibilities.

Update Frequency:  
Update this document at the beginning of each major release or whenever the test strategy changes.

Location: /qa/test-plan.md  
-->

# Start of test-plan.md

# 🧪 Test Plan

A high-level blueprint to ensure the product gets tested like it owes us money 💰

---

## 🧭 Objectives

- Define testing scope and coverage
- Establish types of testing and responsible parties
- Ensure product meets defined quality benchmarks

---

## 📦 Test Scope

| Area             | Included (✅) / Excluded (❌) | Notes                        |
|------------------|-------------------------------|------------------------------|
| Frontend UI      | ✅                            | Must meet design specs       |
| Backend APIs     | ✅                            | Including auth & data layers |
| Performance Test | ✅                            | For major workflows          |
| Legacy Module    | ❌                            | Scheduled for deprecation    |

---

## 🧰 Types of Testing

| Type                | Description                              | Owner        |
|---------------------|------------------------------------------|--------------|
| Unit Testing        | Test individual functions/modules        | Developers   |
| Integration Testing | Validate interactions between components | Dev + QA     |
| System Testing      | Full system validation                   | QA Team      |
| Regression Testing  | Recheck old features after new changes   | QA Team      |
| UAT                 | Acceptance by end-users/stakeholders     | PM + Clients |
| Load & Stress Test  | Check performance under peak loads       | DevOps       |

---

## 🧪 Testing Environments

| Environment | Purpose           | Notes                      |
|-------------|-------------------|----------------------------|
| Dev         | Developer sandbox | Local, unstable builds     |
| Staging     | Pre-prod testing  | Mirrors production closely |
| Prod        | Final release     | 🚨 No testing here!        |

---

## 📅 Schedule

| Phase               | Start Date | End Date   | Owner       |
|---------------------|------------|------------|-------------|
| Unit Testing        | 2025-06-01 | 2025-06-07 | Dev Team    |
| Integration Testing | 2025-06-08 | 2025-06-12 | QA          |
| System Testing      | 2025-06-13 | 2025-06-18 | QA          |
| UAT                 | 2025-06-19 | 2025-06-22 | Stakeholder |

---

## 🧑‍💼 Responsibilities

- **Developers**: Write unit tests, fix bugs
- **QA Team**: Create and execute test cases
- **PM**: Oversee execution and ensure timelines
- **Clients**: Participate in UAT

---

## 🧾 Historical Records

| Date       | Event                         | Summary                     | Owner   |
|------------|-------------------------------|-----------------------------|---------|
| 2025-05-10 | Test strategy reviewed        | Shifted UAT earlier         | QA Lead |
| 2025-05-14 | Regression suite updated      | Added auth regression cases | QA      |
| 2025-05-20 | Environment downtime incident | Backup restored for staging | DevOps  |

---

## 📒 References

- [manual-tests.md](manual-tests.md)  
- [requirements.md](../requirements.md)  
- [qa/README.md](README.md)  
- [testing.md](../testing.md)  

<!-- END OF test-plan.md -->
