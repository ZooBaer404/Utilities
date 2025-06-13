<!--
START OF: docs/api/response-format.md
Purpose: Standardize all API responses for clients.
Update Frequency: When structure or keys change.
-->

# 📥 Response Format

## Success Response
```json
{
  "status": "success",
  "data": { /* resource object */ }
}
```

## Error Response

```json
{
  "status": "error",
  "message": "Invalid credentials"
}
```

## Meta & Pagination

```json
{
  "meta": {
    "page": 1,
    "per_page": 10,
    "total": 100
  }
}
```

<!-- END OF: docs/api/response-format.md -->
