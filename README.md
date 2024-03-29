# Tree-Sitter grammar for E2-IR

## Installation for neovim

First, add the parser config:
```lua
return {
	"nvim-treesitter/nvim-treesitter",
	build = ":TSUpdate",
	config = function()
		local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

		parser_config.e2ir = {
			install_info = {
				url = "https://github.com/mrdgo/tree-sitter-e2ir.git", -- local path or git repo
				files = { "src/parser.c" }, -- note that some parsers also require src/scanner.c or src/scanner.cc
			},
		}
	end,
}
```

Then you can either add it to your `ensure_installed` list or simply run `:TSInstall e2ir` in nvim.

In `~/.config/nvim/filetype.vim`, I added a detection rule:

```vim
augroup FormatAutogroup
    autocmd!
    " NEW:
    autocmd BufRead,BufNewFile *.ir set ft=e2ir
augroup END
```

After this, you need to tell neovim to use highlights.
You need to add this file to your neovim's runtimepath.
There are several options - I did it like so:

```sh
mkdir /usr/share/nvim/runtime/queries/e2ir
wget https://raw.githubusercontent.com/mrdgo/tree-sitter-e2ir/main/highlights.scm
mv highlights.scm /usr/share/nvim/runtime/queries/e2ir
```

Now, if you open a `.ir` file, it should be highlighted.
