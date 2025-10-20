# Git Branching Workflow (Commands)

## Branches
- `main` — Final version for submission.
- `dev` — Development branch for ongoing work.
- `feature/<name>` — Feature branches (e.g., `feature/readme-update`).

## Typical Commands
1. Initialize repo and push main
```
git init
git add .
git commit -m "Initial commit: Final CS210 project with README"
git branch -M main
git remote add origin https://github.com/IRDenil/CS210-Portfolio-Project.git
git push -u origin main
```

2. Create and push dev
```
git checkout -b dev
git push -u origin dev
```

3. Create a feature branch from dev
```
git checkout dev
git checkout -b feature/readme-update
# make changes
git add .
git commit -m "Update README.md with reflection answers"
git push -u origin feature/readme-update
```

4. Merge feature into dev (on local or via Pull Request)
```
git checkout dev
git merge feature/readme-update
git push origin dev
```

5. Merge dev into main when ready for release
```
git checkout main
git merge dev
git push origin main
```

## Commit message tips
- Use short, descriptive messages.
- Examples: `Add project files and README`, `Fix item frequency counting`, `Implement file input validation`.
