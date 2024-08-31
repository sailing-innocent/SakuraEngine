#include "rfx_mesh.hpp"

namespace soc {

void RenderEffectForward::on_register(SRendererId renderer, sugoi_storage_t* storage) {}
void RenderEffectForward::on_unregister(SRendererId renderer, sugoi_storage_t* storage) {}
void RenderEffectForward::get_type_set(const sugoi_chunk_view_t* cv, sugoi_type_set_t* set) {}
sugoi_type_index_t RenderEffectForward::get_identity_type() {
    return identity_type;
}
void RenderEffectForward::initialize_data(SRendererId renderer, sugoi_storage_t* storage, sugoi_chunk_view_t* game_cv, sugoi_chunk_view_t* render_cv) {}
skr_primitive_draw_packet_t RenderEffectForward::produce_draw_packets(const skr_primitive_draw_context_t* context) {
    skr_primitive_draw_packet_t packet = {};
    return packet;
}


}// namespace soc