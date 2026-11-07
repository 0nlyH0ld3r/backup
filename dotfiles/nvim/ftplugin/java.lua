local jdtls = require("jdtls")

-- 1. Determine Project Name and Workspace Path
local project_name = vim.fn.fnamemodify(vim.fn.getcwd(), ":p:h:t")
local workspace_dir = vim.fn.stdpath("data") .. "/site/java-workspace/" .. project_name

-- 2. Locate Mason Installation Path for jdtls
local mason_path = vim.fn.stdpath("data") .. "/mason/packages/jdtls"
local launcher_jar = vim.fn.glob(mason_path .. "/plugins/org.eclipse.equinox.launcher_*.jar")

-- Configuration folder for Linux (Arch Linux)
local config_dir = mason_path .. "/config_linux"

-- 3. Define JDTLS Command Line Flags
local config = {
  cmd = {
    "java",
    "-Declipse.application=org.eclipse.jdt.ls.core.id1",
    "-DOSGI_bundles.defaultStartLevel=4",
    "-Declipse.product=org.eclipse.jdt.ls.core.product",
    "-Dlog.level=ALL",
    "-Xmx1g",
    "--add-modules=ALL-SYSTEM",
    "--add-opens", "java.base/java.util=ALL-UNNAMED",
    "--add-opens", "java.base/java.lang=ALL-UNNAMED",
    "-jar", launcher_jar,
    "-configuration", config_dir,
    "-data", workspace_dir,
  },

  -- 4. Set Root Directory based on build tool markers (Maven, Gradle, Git)
  root_dir = jdtls.setup.find_root({ ".git", "mvnw", "gradlew", "pom.xml", "build.gradle" }),

  -- 5. Additional LSP Settings
  settings = {
    java = {
      signatureHelp = { enabled = true },
      contentProvider = { preferred = "fernflower" },
      completion = {
        favoriteStaticMembers = {
          "org.junit.jupiter.api.Assertions.*",
          "org.mockito.Mockito.*",
        },
      },
      sources = {
        organizeImports = {
          starThreshold = 9999,
          staticStarThreshold = 9999,
        },
      },
    },
  },

  -- 6. Attach On-Attach Keymaps & Functionality
  on_attach = function(client, bufnr)
    local opts = { buffer = bufnr, silent = true }

    -- Java Specific Commands via nvim-jdtls
    vim.keymap.set("n", "<leader>jo", jdtls.organize_imports, opts)
    vim.keymap.set("n", "<leader>jt", jdtls.test_class, opts)
    vim.keymap.set("n", "<leader>jn", jdtls.test_nearest_method, opts)
    vim.keymap.set("n", "<leader>jc", jdtls.extract_variable, opts)
    vim.keymap.set("v", "<leader>jc", function() jdtls.extract_variable(true) end, opts)
    vim.keymap.set("v", "<leader>jm", function() jdtls.extract_method(true) end, opts)
  end,
}

-- Start or attach to the language server
jdtls.start_or_attach(config)
