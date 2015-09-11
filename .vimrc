" .vimrc
" Authored by sgowtham with help from many friends and websites
" over many years. Save this file under $HOME directory.
"

" General features
filetype indent off
set ruler
set showmatch
set showmode
set noautoindent
set nocindent
set so=2
set pastetoggle=<F3>
set history=1000
set ignorecase
set smartcase
set hlsearch
set incsearch
set showmatch
set mat=5
syntax on

" http://vim.wikia.com/wiki/Folding (courtesy: Doug Banyai)
" Commenting blocks of code.
autocmd FileType c,cpp,java,scala let b:comment_leader = '// '
autocmd FileType sh,ruby,python   let b:comment_leader = '# '
autocmd FileType conf,fstab,txt   let b:comment_leader = '# '
autocmd FileType matlab,tex       let b:comment_leader = '% '
autocmd FileType mail             let b:comment_leader = '| '
autocmd FileType vim              let b:comment_leader = '" '
autocmd FileType sql              let b:comment_leader = '-- '
autocmd FileType php              let b:comment_leader = '# '
autocmd FileType txt              let b:comment_leader = '# '
noremap <silent> ,cc :<C-B>silent <C-E>s/^/<C-R>=escape(b:comment_leader,'\/')<CR>/<CR>:nohlsearch<CR>
noremap <silent> ,cu :<C-B>silent <C-E>s/^\V<C-R>=escape(b:comment_leader,'\/')<CR>//e<CR>:nohlsearch<CR>
