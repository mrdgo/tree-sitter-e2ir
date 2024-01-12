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

After this, you need to tell neovim to use the parser and highlights.
In `~/.config/nvim/filetype.vim`, I added a detection rule:

```vim
augroup FormatAutogroup
    autocmd!
    " NEW:
    autocmd BufRead,BufNewFile *.e2 set ft=e2
augroup END
```

Then, I added the parser config:
```lua
return {
	"nvim-treesitter/nvim-treesitter",
	build = ":TSUpdate",
	config = function()
		local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

		parser_config.e2 = {
			install_info = {
				url = "~/proj/tree-sitter-e2", -- local path or git repo
				files = { "src/parser.c" }, -- note that some parsers also require src/scanner.c or src/scanner.cc
				-- optional entries:
				branch = "main", -- default branch in case of git repo if different from master
				generate_requires_npm = false, -- if stand-alone parser without npm dependencies
				requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
			},
			filetype = "e2", -- if filetype does not match the parser name
		}
	end,
}
```

Then you can either add it to your `ensure_installed` list or simply run `:TSInstall e2` in nvim.

Now, if you open a `.e2` file, it should be highlighted.
