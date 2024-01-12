# Tree-Sitter grammar for E2

## Installation

### Prerequisites

Make sure to have:
- `git`
- `tree-sitter-cli`
installed.

### Installation

```sh
git clone {this repo}
cd {this repo}
tree-sitter generate
tree-sitter test  # optional
```

Congratulations, you successfully installed this parser!

### Use the neovim highlights

You need to add this file to your neovim's runtimepath.
There are several options - I did it like so:

```sh
mkdir /usr/share/nvim/runtime/queries/e2
ln /opt/dots/roles/nvim/files/nvim/syntax/e2ir/queries/highlights.scm /usr/share/nvim/runtime/queries/e2ir/highlights.scm
```
