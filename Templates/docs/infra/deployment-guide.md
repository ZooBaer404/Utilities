<!--
START OF: docs/infra/deployment-guide.md
Purpose: Step-by-step instructions for deploying the system across environments.
Update Frequency: When deployment process or environments change.
-->

# 🚀 Deployment Guide

Deploying this app is (mostly) painless if you follow this ritual exactly.

---

## 🧪 Local Development

```bash
# Clone the repo
git clone https://github.com/your-repo.git

# Setup environment
cp .env.example .env
docker-compose up --build

# Access locally
http://localhost:3000
```

## 🌕 Staging Deployment

- Auto-deploys on main branch push.
- Environments managed via .env.staging.

```bash
# Manual trigger (if needed)
gh workflow run deploy-staging.yml
```

## 🧠 Production Deployment

- Deploys via CI/CD pipeline on version tag (vX.Y.Z)
- Hosted on [Cloud Provider]
- Secrets injected at runtime using [Secret Manager]

```bash
# Production deploy flow:
1. git tag v1.0.0
2. git push origin --tags
```

## 🔐 Post-Deployment Checklist

- Run DB migrations
- Test core endpoints
- Monitor logs
- Panic quietly if anything breaks

> 📌 See infra/cloud.md for detailed hosting configuration.

<!-- END OF: docs/infra/deployment-guide.md -->
