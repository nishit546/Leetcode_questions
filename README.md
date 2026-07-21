# 🧩 LeetCode Solutions

![LeetCode Sync Workflow](https://github.com/nishit546/Leetcode_questions/actions/workflows/leetcode-sync.yml/badge.svg)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/nishit546/Leetcode_questions)
![GitHub last commit](https://img.shields.io/github/last-commit/nishit546/Leetcode_questions)
![License](https://img.shields.io/github/license/nishit546/Leetcode_questions?color=blue)

Welcome to my personal collection of LeetCode problem solutions! This repository automatically syncs my accepted solutions directly from LeetCode.

---

## ⚡ Automated Sync Setup

This repository supports **two ways** to automatically push solved LeetCode questions:

### 🚀 Method 1: Browser Extension (LeetHub v2) — Real-Time Sync (Recommended)

Whenever you submit a question on LeetCode and get an **Accepted** result, the browser extension automatically commits your solution code, runtime stats, memory complexity, and problem statement directly to this repository.

#### Step-by-Step Instructions:
1. Install **LeetHub v2** from the [Chrome Web Store](https://chromewebstore.google.com/detail/leethub-v2/mjdobflfgflafocflgmnflkahmfljija).
2. Open the extension icon in your browser toolbar and click **Authenticate**.
3. Grant access to your GitHub account.
4. Select **Link an existing repository**.
5. Enter repository name: `nishit546/Leetcode_questions`.
6. Click **Get Started**.
7. Done! Solve any question on [LeetCode](https://leetcode.com) and click **Submit**. Once accepted, it will immediately appear in this repo!

---

### 🤖 Method 2: GitHub Actions (`leetcode-sync`) — Daily Background Sync

A GitHub Action automatically fetches all your accepted submissions from LeetCode every night at midnight UTC (or when triggered manually).

#### Step-by-Step Instructions:
1. Log into your account on [LeetCode](https://leetcode.com).
2. Open Browser Developer Tools (**F12** or Right Click -> **Inspect**).
3. Navigate to **Application** -> **Cookies** -> `https://leetcode.com`.
4. Copy the values of:
   - `LEETCODE_SESSION`
   - `csrftoken`
5. Go to this repository's Settings on GitHub:
   `https://github.com/nishit546/Leetcode_questions/settings/secrets/actions`
6. Add two New Repository Secrets:
   - Name: `LEETCODE_SESSION` | Value: *(Pasted LEETCODE_SESSION cookie)*
   - Name: `LEETCODE_TOKEN` | Value: *(Pasted csrftoken cookie)*
7. Navigate to the **Actions** tab on GitHub and click **Run workflow** to test manually anytime!

---

## 📁 Repository Structure

Solutions are organized neatly by problem number, title, and language format:

```text
Leetcode_questions/
│
├── .github/
│   └── workflows/
│       └── leetcode-sync.yml      # Automated GitHub Actions sync script
│
├── solutions/                     # (Or LeetHub generated problem folders)
│   ├── 0001-two-sum/
│   │   ├── README.md              # Problem description & complexity
│   │   └── two-sum.py / .cpp / .js # Solution code
│   └── ...
│
└── README.md
```

---

Happy Coding! 💻🔥