# DSA Lab — College Repository

Central repository for DSA Lab questions and student submissions.

* `main` → Faculty-controlled: questions, manuals, instructions
* `<rollno-name>` → Student branch containing all experiments
* **Never push directly to `main`**

## Branch Naming

Format:

```text
rollno-name
```

Example:

```text
30-satvik-joshi
```

## Repository Structure

**`main`**

```text
main/
├── README.md
├── questions/
└── manual/
```

**Student branch**

```text
30-satvik-joshi/
├── exp1-arrays/
│   ├── program1.c
│   └── program2.c
├── exp2-linked-list/
│   └── singly.c
└── exp3-stack/
    └── stack-array.c
```

## First-Time Setup

```bash
git clone <repo-link>
cd <repo-name>

git checkout -b 30-satvik-joshi

mkdir exp1-arrays
# Add your code

git add .
git commit -m "Add Experiment 1"
git push -u origin 30-satvik-joshi
```

## Next Experiments

```bash
git checkout 30-satvik-joshi
git pull origin main

mkdir exp2-linked-list
# Add your code

git add .
git commit -m "Add Experiment 2"
git push
```

## Rules

1. Work only on your own branch.
2. Never push directly to `main`.
3. Keep each experiment in its own folder.
4. Use **one commit per experiment**.
5. Use clear commit messages.
6. Do not modify another student's branch/work.
7. Create a Pull Request only when faculty asks.
8. Do not copy another student's code.

## Faculty

* `main` contains official lab material.
* Review student submissions through Pull Requests.
* Check correctness and plagiarism before merging.

> **Golden Rule:** `main` belongs to the faculty. Your branch belongs to you.
