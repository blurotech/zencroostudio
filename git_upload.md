
Quick setup — if you’ve done this kind of thing before

https://github.com/blurotech/zencroostudio.git

Get started by creating a new file or uploading an existing file. We recommend every repository include a README, LICENSE, and .gitignore.
…or create a new repository on the command line

echo "# test" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/blurotech/zencroostudio.git
git push -u origin main

…or push an existing repository from the command line

git remote add origin https://github.com/blurotech/zencroostudio.git
git branch -M main
git push -u origin main


 git init
 git add .
 git commit -m "Initial commit
 git remote -v
git remote add origin https://github.com/blurotech/zencroostudio.git
 git branch -M mai
  git push -u origin main
   git pull origin main --allow-unrelated-histories
   git checkout --ours .
    git add .
     git commit -m "Merge remote changes - keep local versions"
     git push -u origin main


file upload:
git status --short
git add INSTALLATION.md ; git commit -m "Update INSTALLATION.md" ; git push