package tree_sitter_type_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-type"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_type.Language())
	if language == nil {
		t.Errorf("Error loading Type grammar")
	}
}
