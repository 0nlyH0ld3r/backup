#include <raylib.h>
#include <stdio.h>

struct window {
	int Height;
	int Width;
	char *Name;
	Color Color;
};

int main(void){
	struct window window = {
		.Height = 600, .Width = 800, .Name = "My_Test", .Color = WHITE
	};

	Vector2 deltaCircle = { 0, (float)window.Height / 3.0f};
	Vector2 frameCircle = { 0, (float)window.Height * (2.0f / 3.0f)};
	float momentum = 0;
	// Inicialização de janela
	InitWindow(window.Height, window.Width, window.Name);
	int currentFPS = 60;
	const float speed = 20.0f, circleRadius = 32.0f;
	SetTargetFPS(currentFPS); // Função pra setar o FPS da janela

	// Fecha a janela se atingir a condição para fechar
	// Condição para fechar: Apertar ESC ou fechar de qualquer forma
	while (!WindowShouldClose()) {
		/* Mudando o Framerate baseado no Scroll
		* GetMouseWheelMove varia de 1 a -1 dependendo do movimento do Scroll 
		* */
		float mouseWheel = GetMouseWheelMove();
		if (mouseWheel != 0) {
			currentFPS += (int)mouseWheel;
			if (currentFPS < 0) currentFPS = 0;
			SetTargetFPS(currentFPS);
		}

		if (IsKeyDown(KEY_D))
			momentum < 10 ? momentum += GetFrameTime() * 6 * speed : 10;
		else if (IsKeyDown(KEY_A))
			momentum < 10 ? momentum -= GetFrameTime() * 6 * speed : -10;

		else {
			if (momentum > 0) {
				momentum -= GetFrameTime() * 12 * speed;
			}
			if (momentum < 0) {
				momentum += GetFrameTime() * 12 * speed;
			}
		}

		deltaCircle.x += momentum;
		frameCircle.x += momentum;

		if (deltaCircle.x > window.Width) deltaCircle.x = 0;
		if (frameCircle.x > window.Width) frameCircle.x = 0;

		if (IsKeyPressed(KEY_R)) {
			deltaCircle.x = 0;
			frameCircle.x = 0;
		}
		// Começar a desenhar na janela
		BeginDrawing();
		ClearBackground(window.Color); // Comando pra um Background monocromático
		const char *fpsText = 0;
		if (currentFPS <= 0) fpsText = TextFormat("FPS: unlimited (%i)", GetFPS());
		else fpsText = TextFormat("FPS: %i (target: %i)", GetFPS(), currentFPS);
		DrawCircleV(deltaCircle, circleRadius, RED);
		DrawCircleV(frameCircle, circleRadius, BLUE);
		DrawText(fpsText, 10, 10, 20, BLACK); // Desenha texto na tela
						      // Parar de desenhar na janela
		EndDrawing();
		/* Toda a parte de animação e desenho na tela deve ser feito por aqui.
		 * Então, se for necessário desenhar personagens na tela, objetos,
		 * cenários e etc, é para ser feito entre BeginDrawing(); e EndDrawing();
		 * Acredito eu que antes disso o correto seria aplicar a lógica do jogo e
		 * as funções que interagem com tudo isso. 
		 * */
	}
	CloseWindow(); // Comando pra fechar janela
	return 0;
}

