# GitHub Push Guide

This guide explains how to push your code to a GitHub repository from a local workspace on Windows.

## 1. Set Up Git

1. Install Git for Windows if you haven't already: https://git-scm.com/download/win
2. Configure your Git username and email:
   ```powershell
   git config --global user.name "Your Name"
   git config --global user.email "you@example.com"
   ```

## 2. Initialize or Clone a Repository

### Initialize a New Repo
```powershell
cd "d:\Zencroo git"
git init
```

### Clone an Existing Repo
```powershell
git clone https://github.com/username/repo.git
```

## 3. Work with Your Code

1. Move into your project folder:
   ```powershell
   cd "d:\Zencroo git\testcode_002"
   ```
2. Add or modify files.
3. Check status:
   ```powershell
   git status
   ```
4. Stage changes:
   ```powershell
   git add .
   ```
5. Commit changes:
   ```powershell
   git commit -m "Describe your changes"
   ```

## 4. Configure Remote

If not already set, add the remote URL of your GitHub repository:

```powershell
git remote add origin https://github.com/username/repo.git
```

Verify with:

```powershell
git remote -v
```

## 5. Synchronize and Push

1. Pull remote changes first to avoid conflicts:
   ```powershell
   git pull --rebase origin main
   ```
   *(replace `main` with your branch name)*
2. Push your commits:
   ```powershell
   git push origin main
   ```

## 6. Handling Errors

- If you see `rejected` errors, pull and rebase as above.
- Resolve merge conflicts if they arise and commit the results.

## 7. Tips

- Use descriptive commit messages.
- Create branches for new features or fixes:
  ```powershell
  git checkout -b feature-name
  ```
- Push branches to GitHub:
  ```powershell
  git push -u origin feature-name
  ```

---

That's it! Follow these steps to keep your code safely stored on GitHub.