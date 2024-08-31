#pragma once 
#include "SkrRT/ecs/sugoi.h"
#include "SkrRT/ecs/sugoi_types.h"
#include "SkrRenderer/skr_renderer.h"
#include "SkrRenderer/render_effect.h"

namespace soc {

typedef struct ForwardEffectToken {
    sugoi_entity_t game_entity;
} ForwardEffectToken;

static const skr_render_effect_name_t forward_effect_name = u8"ForwardEffect";

struct RenderEffectForward: public IRenderEffectProcessor {
    RenderEffectForward(skr_vfs_t* resource_vfs)
        :resource_vfs(resource_vfs) {}
    
    void on_register(SRendererId renderer, sugoi_storage_t* storage) override;
    void on_unregister(SRendererId renderer, sugoi_storage_t* storage) override;
    void get_type_set(const sugoi_chunk_view_t* cv, sugoi_type_set_t* set) override;
    sugoi_type_index_t get_identity_type() override;
    void initialize_data(SRendererId renderer, sugoi_storage_t* storage, sugoi_chunk_view_t* game_cv, sugoi_chunk_view_t* render_cv) override;
    skr_primitive_draw_packet_t produce_draw_packets(const skr_primitive_draw_context_t* context) override;

protected:
    skr_vfs_t* resource_vfs;
    sugoi_type_index_t identity_type = {};
};

}// namespace soc