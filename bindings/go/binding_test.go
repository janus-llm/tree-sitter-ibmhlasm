package tree_sitter_ibmhlasm_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ibmhlasm"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ibmhlasm.Language())
	if language == nil {
		t.Errorf("Error loading Ibmhlasm grammar")
	}
}
