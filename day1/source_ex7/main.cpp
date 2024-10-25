#include "BaseDocument.h"
#include "PDFDocument.h"
#include "WORDDocument.h"
#include "SSDocument.h"

#include <vector>

std::vector<SSDocument*> create_n_SS(int n) {
    std::vector<SSDocument*> SS_vec;
    for (int i = 0; i < n; i++) {
        SS_vec.push_back(new SSDocument());
    }
    return SS_vec;
}

std::vector<WORDDocument*> create_n_WORD(int n) {
    std::vector<WORDDocument*> WORD_vec;
    for (int i = 0; i < n; i++) {
        WORD_vec.push_back(new WORDDocument());
    }
    return WORD_vec;
}

int main() {
    auto word_docs = create_n_WORD(5);

    for (auto i : word_docs) {
        i->open();
    }
}