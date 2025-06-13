<!--
START OF: docs/infra/cloud.md
Purpose: Outline cloud platform details, region config, and secret handling.
Update Frequency: When infra provider or config changes.
-->

# ☁️ Cloud Infrastructure

Welcome to the cloudy part of the stack.

---

## 🧰 Provider Info

- **Platform**: AWS
- **Regions**:
  - Primary: `us-east-1`
  - Fallback: `us-west-2`
- **Buckets**:
  - `plagiarism-files-prod`
  - `logs-plagiarism-staging`

---

## 🔐 Secrets Management

- Managed via AWS Secrets Manager.
- Access granted using IAM roles tied to ECS task definitions.
- Rotation policy: every 60 days.

---

## ⛅ Hosted Services

| Service       | Provider             | Notes                          |
|---------------|----------------------|--------------------------------|
| DB            | AWS RDS (PostgreSQL) | Multi-AZ setup                 |
| App backend   | AWS ECS Fargate      | Auto-scaling container cluster |
| Static assets | AWS S3 + CloudFront  | Caches for 12 hrs              |

---

> 🧠 Infra-as-Code via Terraform (`infra/terraform/`).

<!-- END OF: docs/infra/cloud.md -->
