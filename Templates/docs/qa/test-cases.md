<!--
START OF qa/test-cases.md

Purpose:
To define detailed test cases ensuring feature correctness, edge cases coverage, and regression prevention.

Update Frequency:
Update whenever features change or new features are added.

Location: docs/qa/test-cases.md
-->

# Test Cases Documentation 🎯

Each test case includes:

| ID     | Feature | Description                         | Precondition       | Steps to Execute                                                   | Expected Result                 | Status (Pass/Fail) | Tested By | Date       |
|--------|---------|-------------------------------------|--------------------|--------------------------------------------------------------------|---------------------------------|--------------------|-----------|------------|
| TC-001 | Login   | Verify login with valid credentials | User is registered | 1. Go to login page<br>2. Enter valid user/pass<br>3. Click submit | User is redirected to dashboard | Pass               | Zubair    | 2025-05-22 |
| TC-002 | Signup  | Verify error on weak password       | None               | 1. Go to signup<br>2. Enter weak password<br>3. Submit             | Show password strength error    | Fail               | QA Team   | 2025-05-20 |

---

## Notes

- Prioritize critical and high-risk test cases.
- Group test cases by modules or user stories for easier maintenance.
- Automate test cases where possible (see `test-automation.md`).

<!-- END OF qa/test-cases.md -->
