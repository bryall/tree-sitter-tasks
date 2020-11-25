# tree-sitter-task


Based off [vigoux/tree-sitter-mem](https://github.com/vigoux/tree-sitter-mem)

This is a simple parser for a markup language I came up for my TODOs.

I built it to be used with neovim, and a plugin (will write it at some point) to add a manipulate
the TODOs easily. I built it with the Zettelkasten method in mind (no tag support for now though).

Here is an example `task` file :

```
+ SCHEDULED(2000-04-12) &test: My super duper thing {
	Some content, we can even cite some tasks like so : &subtask1
	There is also support for attachements : @my_file.txt

	The zettelkasten part can be done using task reference.

	(I don't like the name "task", in the grammar they are called "item")

	+ DONE &subtask1: Sub item
	+ TODO &subtask2: Subitem with content {
		Some inner content

		+ &subsub: Inner item with no attached status

	}
}

+ DOING &test2: My super todo item
```
