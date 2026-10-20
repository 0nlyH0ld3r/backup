return {
	'nvim-telescope/telescope.nvim', version = '*',
	dependencies = {
		'nvim-lua/plenary.nvim', { 'nvim-telescope/telescope-fzf-native.nvim', build = 'make' },
	},

	config = function()
		local telescope = require("telescope.builtin")

		vim.keymap.set("n", "<leader>fm", function ()
			telescope.man_pages({ sections = {"ALL"} })
		end)
		vim.keymap.set("n", "<leader>fim", function()
			require("telescope.builtin").man_pages({
				sections = { "ALL" },
				man_cmd = { "apropos", "-r", "^" .. vim.fn.expand('<cword>') .. "$" }
			})
		end)
		vim.keymap.set('n', '<leader>q', function()
			vim.diagnostic.setqflist()
			vim.cmd("cclose")
			telescope.quickfix()
		end)

		vim.keymap.set("n", "<leader>fws", telescope.lsp_workspace_symbols)
		vim.keymap.set("n", "<leader>fds", telescope.lsp_document_symbols)
		vim.keymap.set("n", "<leader>fr", telescope.lsp_references)
		vim.keymap.set("n", "<leader>ff", telescope.find_files)
		vim.keymap.set("n", "<leader>fg", telescope.live_grep)
	end
}
