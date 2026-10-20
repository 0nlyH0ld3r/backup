#include <stdio.h>
#include <string.h>
#include "raylib.h" // Biblioteca leve de GUI/Jogos em C

#define MAX_LIVROS 20

typedef struct {
    char nome[100];
    int preco;
} livro;

typedef int (*condicao)(livro, livro);

// Funções de condição existentes no seu código
int preco_crescente(livro l1, livro l2) {
    return l1.preco < l2.preco;
}

int preco_decrescente(livro l1, livro l2) {
    return l1.preco > l2.preco;
}

// Sua função genérica de ordenação
int sort(livro *lista, int t, condicao cf) {
    for (int i = 1; i < t; ++i) {
        livro tmp = lista[i];
        int j = i;
        while (j > 0 && cf(tmp, lista[j - 1])) {
            lista[j] = lista[j - 1];
            --j;
        }
        lista[j] = tmp;
    }
    return 1;
}

int main(void) {
    // 1. Dados de teste
    livro lista_livros[MAX_LIVROS] = {
        {"O Senhor dos Anéis", 80},
        {"1984", 45},
        {"Dom Casmurro", 30},
        {"O Hobbit", 60}
    };
    int num_livros = 4;

    // 2. Inicialização da Janela da GUI
    const int screenWidth = 600;
    const int screenHeight = 400;
    InitWindow(screenWidth, screenHeight, "Gerenciador de Livros - UI C");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // --- Atualização / Ações de Botões ---
        Vector2 mousePos = GetMousePosition();

        // Região dos Botões
        Rectangle btnCrescente = { 50, 320, 220, 40 };
        Rectangle btnDecrescente = { 330, 320, 220, 40 };

        // Clique no botão "Preço Crescente"
        if (CheckCollisionPointRec(mousePos, btnCrescente) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            sort(lista_livros, num_livros, preco_crescente);
        }

        // Clique no botão "Preço Decrescente"
        if (CheckCollisionPointRec(mousePos, btnDecrescente) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            sort(lista_livros, num_livros, preco_decrescente);
        }

        // --- Desenho na Tela ---
        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("Lista de Livros Cadastrados", 50, 20, 20, DARKGRAY);

            // Renderizar Lista na Tela
            for (int i = 0; i < num_livros; i++) {
                char buffer[150];
                snprintf(buffer, sizeof(buffer), "%d. %s - R$ %d,00", i + 1, lista_livros[i].nome, lista_livros[i].preco);
                DrawText(buffer, 60, 70 + (i * 35), 18, BLACK);
            }

            // Desenhar Botões
            DrawRectangleRec(btnCrescente, LIGHTGRAY);
            DrawRectangleLinesEx(btnCrescente, 2, GRAY);
            DrawText("Ordenar (Crescente)", btnCrescente.x + 15, btnCrescente.y + 12, 16, BLACK);

            DrawRectangleRec(btnDecrescente, LIGHTGRAY);
            DrawRectangleLinesEx(btnDecrescente, 2, GRAY);
            DrawText("Ordenar (Decrescente)", btnDecrescente.x + 10, btnDecrescente.y + 12, 16, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
