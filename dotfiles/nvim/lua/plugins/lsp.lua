-- Uma única função simples para todos os seus servidores
local function single_file(markers)
	return function(bufnr, on_dir)
		on_dir(vim.fs.root(bufnr, markers) or vim.fs.dirname(vim.api.nvim_buf_get_name(bufnr)) or vim.uv.cwd())
	end
end

vim.lsp.config('*', {
    render = {
        max_width = 80,
    },
})

vim.lsp.config['lua_ls'] = {
	cmd = { 'lua-language-server' },
	filetypes = { 'lua' },
	root_dir = single_file({ '.luarc.json', '.git' }),
	settings = {
		Lua = {
			runtime = { version = 'LuaJIT' },
			workspace = { library = { vim.env.VIMRUNTIME } },
			diagnostics = { globals = { 'vim' } },
		}
	}
}

vim.lsp.config['clangd'] = {
	cmd = { 'clangd' },
	filetypes = { 'c', 'cpp' },
	root_dir = single_file({ 'compile_commands.json', '.git' }),
}

vim.lsp.config['pyright'] = {
	cmd = { 'pyright-langserver', '--stdio' },
	filetypes = { 'python' },
	root_dir = single_file({ 'pyproject.toml', '.git' }),
}

vim.lsp.config['biome'] = {
	cmd = { 'biome', 'lsp-proxy' },
	filetypes = { 'html', 'css', 'javascript', 'typescript', 'json' },
	root_dir = single_file({ 'biome.json', '.git' }),
}

vim.lsp.enable({ 'lua_ls', 'clangd', 'pyright', 'biome' })

vim.keymap.set("n", "K", function() vim.lsp.buf.hover( {wrap = true, width = 100}) end)
vim.keymap.set("n", "<leader>gd", function() vim.lsp.buf.definition() end)
vim.keymap.set("n", "<leader>=", function() vim.lsp.buf.format({async = true}) end)
vim.keymap.set("n", "<leader>gr", function() vim.lsp.buf.rename() end)
vim.keymap.set("n", "<leader>cd", "<cmd>cd %:p:h<cr><cmd>pwd<cr>")

return {}
