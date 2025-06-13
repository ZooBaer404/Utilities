<!--
START OF: docs/infra/ci-cd.md
Purpose: Document automated integration and deployment pipeline.
Update Frequency: When GitHub Actions or build process changes.
-->

# 🔄 CI/CD Pipeline

Where your commits go to be judged.

---

## 🧰 Tools Used

- GitHub Actions
- Docker
- Terraform (infra)
- Python / Bash for scripts

---

## 🚦 Workflow Overview

```bash
name: CI/CD Pipeline

jobs:
  test:
    runs-on: ubuntu-latest
    steps:
      - run: npm test

  deploy-staging:
    if: github.ref == 'refs/heads/main'
    steps:
      - run: ./scripts/deploy-staging.sh
```

## 🚀 Deployment Strategy

| Env     | Trigger                 | Auto Deploy | Notes                |
|---------|-------------------------|-------------|----------------------|
| Local   | Manual                  | ❌          | Dev use only         |
| Staging | Push to `main`          | ✅          | Testing & QA         |
| Prod    | Git tag push (`v*.*.*`) | ✅          | Requires code freeze |

## 🔐 Secrets

- Stored in GitHub Secrets
- Names follow: PROD_DB_URL, STAGING_API_KEY, etc.

> 📁 See .github/workflows/*.yml for complete configs.

<!-- END OF: docs/infra/ci-cd.md -->
