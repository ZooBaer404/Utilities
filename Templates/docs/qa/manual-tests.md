<!--
START OF manual-tests.md

Purpose:
This document contains structured records of all manual test cases executed during the software development lifecycle.
It defines test inputs, expected outputs, results, and observations.

Update Frequency:
Update whenever new features are tested manually or existing cases are re-tested.

Location: /qa/manual-tests.md
-->

# Start of manual-tests.md

# 🧑‍🔬 Manual Test Cases

Detailed execution records of tests where a human brain still beats automation 🧠💻

---

## 🧪 Test Case Format

| Field              | Description                      |
|--------------------|----------------------------------|
| Test Case ID       | Unique identifier (e.g., MT-001) |
| Feature            | Associated functionality/module  |
| Preconditions      | Setup required before execution  |
| Steps to Reproduce | Clear, numbered steps            |
| Expected Result    | What should happen               |
| Actual Result      | What actually happened           |
| Status             | ✅ Pass / ❌ Fail                |
| Tester             | Who ran the test                 |
| Date Tested        | When it was run                  |
| Notes              | Any bugs found or observations   |

---

## 📄 Sample Manual Test Records

| Test Case ID | Feature   | Status | Tester    | Date       | Notes                        |
|--------------|-----------|--------|-----------|------------|------------------------------|
| MT-001       | Login     | ✅     | Fatima M. | 2025-05-10 | Login worked with valid data |
| MT-002       | Sign-up   | ❌     | Zubair    | 2025-05-11 | Password rules not enforced  |
| MT-003       | Profile   | ✅     | QA Lead   | 2025-05-12 | Edit bio working fine        |
| MT-004       | Dashboard | ✅     | Ali Khan  | 2025-05-13 | All widgets load correctly   |

---

## 🔄 Retesting Notes

| Test Case ID | Re-tested On | Status | Regression Risk | Notes                     |
|--------------|--------------|--------|-----------------|---------------------------|
| MT-002       | 2025-05-14   | ✅     | Low             | Password validation fixed |

---

## 🔎 Observations Summary

- Most UI flow tests pass under normal conditions
- Edge-case inputs still cause unhandled behavior in the form module
- Need dedicated regression testing on the sign-up path every release

---

## 🧾 Historical Records

| Date       | Change Summary                   | Updated By |
|------------|----------------------------------|------------|
| 2025-05-10 | Initial manual test sheet added  | QA Team    |
| 2025-05-13 | Added dashboard-related tests    | QA Lead    |
| 2025-05-15 | Retest round 1 for sign-up fixed | Zubair     |

---

## 📒 References

- [test-plan.md](test-plan.md)
- [ui-design.md](../design/ui-design.md)
- [requirements.md](../requirements.md)

<!-- END OF manual-tests.md -->
