#include "forward_pass.hpp"
#include "SkrRenderer/primitive_pass.h"

namespace soc {

void RenderPassForward::on_update(const skr_primitive_pass_context_t* ctx) {

}

void RenderPassForward::post_update(const skr_primitive_pass_context_t* ctx) {
}

void RenderPassForward::execute(const skr_primitive_pass_context_t* ctx, skr::span<const skr_primitive_draw_packet_t> drawcalls) {
}

}// namespace game