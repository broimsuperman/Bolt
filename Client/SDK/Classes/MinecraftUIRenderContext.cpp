#include "MinecraftUIRenderContext.h"

RenderUtils::RenderUtils(MinecraftUIRenderContext* ctx, Font* font) {
    this->ctx = ctx;
    this->font = font;
};

auto RenderUtils::getCtx(void) -> MinecraftUIRenderContext* {
    return this->ctx;
};

auto RenderUtils::setCtx(MinecraftUIRenderContext* ctx) -> void {
    this->ctx = ctx;
};

auto RenderUtils::getFont(void) -> Font* {
    return this->font;
};

auto RenderUtils::setFont(Font* font) -> void {
    this->font = font;
};

/* Render Methods */

auto RenderUtils::drawString(std::string text, float size, Vec2<float> position, Color color) -> void {
    if(!this->canDraw())
        return;
    
    TextMeasureData textMeasureData = TextMeasureData(size);
    CaretMeasureData caretMeasureData = CaretMeasureData();

    Rect rect = Rect(position.x, position.x + (position.x * size), position.y, position.y + (position.y * size / 2));

    ctx->drawText(this->font, &rect, &text, &color, color.w * 255.f, nullptr, &textMeasureData, &caretMeasureData);
};

auto RenderUtils::fillRectangle(Vec4<float> position, Color color) -> void {
    if(!this->canDraw())
        return;
    
    ctx->fillRectangle(Vec4<float>(position.x, position.z, position.y, position.w), color, color.w * 255.f);
};

auto RenderUtils::drawRectangle(Vec4<float> position, Color color, int lineWidth) -> void {
    if(!this->canDraw())
        return;
    
    ctx->drawRectangle(Vec4<float>(position.x, position.z, position.y, position.w), color, color.w * 255.f, lineWidth);
};

/* Other */

auto RenderUtils::canDraw(void) -> bool {
    return this->ctx != nullptr && this->font != nullptr; 
};

auto RenderUtils::textLen(std::string text, float size) -> float {
    if(!this->canDraw())
        return 0.f;
    
    return this->ctx->getLineLength(this->font, &text, size, false);
};