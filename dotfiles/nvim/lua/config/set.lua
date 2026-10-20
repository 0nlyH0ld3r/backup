vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.scrolloff = 8
vim.opt.expandtab = false
vim.opt.wrap = false
--
-- vim.opt.completeopt = "menu,popup,fuzzy,menuone,noinsert,preview"
-- vim.opt.complete = "o"
-- vim.opt.autocomplete = true

vim.opt.number = true
vim.opt.relativenumber = true
vim.opt.list = true
vim.opt.listchars = "tab:> ,trail:•,nbsp:+"

vim.opt.undofile = true

vim.g.load_doxygen_syntax = true

vim.opt.cursorline = false

vim.opt.makeprg = "gcc % -o %<"

vim.opt.errorformat = "%f:%l:%c: %t%*[^:]:%m,%f:%l:%c: %m,%f:%l: %m"
