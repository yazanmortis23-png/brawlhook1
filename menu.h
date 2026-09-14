#pragma once
// ============================================================================
// Mod Menu — Brawl Stars 69.252
// Все фичи, все секции, все переключатели
// Рекомендация: ImGui с GLES2 бэкендом для рендера
// tg by @dre6d @HernBrawl
// ============================================================================

#include "../features/speed.h"
#include "../features/fly.h"
#include "../features/spin.h"
#include "../features/aimbot.h"
#include "../features/killaura.h"
#include "../features/autododge.h"
#include "../features/boltmod.h"
#include "../features/esp.h"
#include "../features/xray.h"
#include "../features/outline.h"
#include "../features/hitbox.h"
#include "../features/camera.h"
#include "../features/autofarm.h"
#include "../features/follow.h"
#include "../features/antiafk.h"
#include "../features/spray_pin.h"
#include "../features/respawn_timer.h"
#include "../features/tile_grid.h"

namespace ui {
namespace menu {

inline bool visible = false;

inline void toggle() { visible = !visible; }

// Секции меню (из Nexus UI strings):
//
// ┌─────────────────────────────────┐
// │         BRAWL HOOK v1.0         │
// ├─────────────────────────────────┤
// │ [AIM CONFIG]                    │
// │   Smart Aim ............ [OFF]  │
// │   Hold Aim ............. [OFF]  │
// │   Target Mode .......... [0]    │
// │   Projectile Speed ..... [1.0]  │
// │   Hold Delay (ms) ...... [100]  │
// │   Range Check .......... [ON]   │
// ├─────────────────────────────────┤
// │ [ESP CONFIG]                    │
// │   ESP .................. [OFF]  │
// │   Show Names ........... [ON]   │
// │   Show Distance ........ [ON]   │
// │   Show Hitbox .......... [OFF]  │
// │   Show Tracer .......... [OFF]  │
// │   Show Aim Line ........ [OFF]  │
// │   Show Circle .......... [ON]   │
// │   Target Enemies ....... [ON]   │
// │   Target Self .......... [OFF]  │
// │   Target Teammates ..... [OFF]  │
// │   X-Ray ................ [OFF]  │
// │   X-Ray Mode ........... [0]    │
// ├─────────────────────────────────┤
// │ [SPEED CONFIG]                  │
// │   Speed Exploit ........ [OFF]  │
// │   Speed Level .......... [1]    │
// │   Local Move ........... [OFF]  │
// │   Fly .................. [OFF]  │
// │   Fly Speed ............ [3.0]  │
// │   Spin ................. [OFF]  │
// │   Spin Speed ........... [0.3]  │
// ├─────────────────────────────────┤
// │ [CAMERA CONFIG]                 │
// │   Camera Mod ........... [OFF]  │
// │   Zoom ................. [1.0]  │
// │   Offset X ............. [0.0]  │
// │   Offset Y ............. [0.0]  │
// │   Spectator Mode ....... [OFF]  │
// ├─────────────────────────────────┤
// │ [KILLAURA]                      │
// │   Kill Aura ............ [OFF]  │
// │   Main Attack .......... [ON]   │
// │   Super ................ [OFF]  │
// │   Gadget ............... [OFF]  │
// │   No Ball .............. [ON]   │
// │   Wall Check ........... [ON]   │
// │   HP Threshold ......... [0.0]  │
// ├─────────────────────────────────┤
// │ [AUTO DODGE]                    │
// │   Auto Dodge ........... [OFF]  │
// │   Version .............. [5]    │
// │   Replay Block ......... [ON]   │
// ├─────────────────────────────────┤
// │ [BOLT MODS]                     │
// │   Bolt Mod ............. [OFF]  │
// │   Auto Attack .......... [OFF]  │
// │   Prediction ........... [OFF]  │
// │   Safe Exit ............ [OFF]  │
// │   Wall Avoidance ....... [ON]   │
// │   Lookahead ............ [5]    │
// │   Safe Exit HP% ........ [0.2]  │
// ├─────────────────────────────────┤
// │ [AUTO FARM]                     │
// │   Auto Farm ............ [OFF]  │
// │   Attack Enemies ....... [ON]   │
// │   Collect Items ........ [ON]   │
// │   Auto Play Again ...... [OFF]  │
// ├─────────────────────────────────┤
// │ [FOLLOW]                        │
// │   Follow Mode .......... [OFF]  │
// │   Mode ................. [0]    │
// │   Distance ............. [2.0]  │
// │   Speed ................ [2.0]  │
// ├─────────────────────────────────┤
// │ [VISUALS]                       │
// │   Character Outline .... [OFF]  │
// │   Outline R ............ [1.0]  │
// │   Outline G ............ [0.0]  │
// │   Outline B ............ [0.0]  │
// │   Outline Opacity ...... [0.8]  │
// │   Hitbox Renderer ...... [OFF]  │
// │   Attack Range ......... [OFF]  │
// │   Tile Grid ............ [OFF]  │
// │   Teammate HP .......... [OFF]  │
// │   Respawn Timer ........ [OFF]  │
// ├─────────────────────────────────┤
// │ [SPAM]                          │
// │   Spray Spam ........... [OFF]  │
// │   Spray Interval ....... [60]   │
// │   Pin Spam ............. [OFF]  │
// │   Pin Interval ......... [45]   │
// │   Combat Fire .......... [OFF]  │
// │   Fire Interval ........ [5]    │
// ├─────────────────────────────────┤
// │ [MISC]                          │
// │   Anti-AFK ............. [OFF]  │
// │   AFK Interval ......... [300]  │
// └─────────────────────────────────┘

inline void render() {
    if (!visible) return;

    // TODO: Реализация через ImGui или кастомный GL рендер
    //
    // Для каждой секции — checkbox/slider/input:
    //
    // if (ImGui::Begin("Brawl Hook v1.0")) {
    //
    //   if (ImGui::CollapsingHeader("AIM CONFIG")) {
    //     ImGui::Checkbox("Smart Aim", &features::aimbot::enabled);
    //     ImGui::Checkbox("Hold Aim", &features::aimbot::hold_aim);
    //     ImGui::SliderInt("Target Mode", &features::aimbot::target_mode, 0, 2);
    //     ImGui::SliderFloat("Hold Delay", &features::aimbot::hold_delay_ms, 0, 500);
    //     ImGui::Checkbox("Range Check", &features::aimbot::range_check);
    //   }
    //
    //   if (ImGui::CollapsingHeader("ESP CONFIG")) {
    //     ImGui::Checkbox("ESP", &features::esp::enabled);
    //     ImGui::Checkbox("Names", &features::esp::show_names);
    //     ImGui::Checkbox("Distance", &features::esp::show_distance);
    //     ImGui::Checkbox("Hitbox", &features::esp::show_hitbox);
    //     ImGui::Checkbox("Tracer", &features::esp::show_tracer);
    //     ImGui::Checkbox("Aim Line", &features::esp::show_aim_line);
    //     ImGui::Checkbox("Circle", &features::esp::show_circle);
    //     ImGui::Checkbox("X-Ray", &features::xray::enabled);
    //     ImGui::SliderInt("X-Ray Mode", &features::xray::target_mode, 0, 2);
    //   }
    //
    //   if (ImGui::CollapsingHeader("SPEED CONFIG")) {
    //     ImGui::Checkbox("Speed Exploit", &features::speed::enabled);
    //     ImGui::SliderInt("Level", &features::speed::level, 1, 4);
    //     ImGui::Checkbox("Local Move", &features::speed::local_move);
    //     ImGui::Checkbox("Fly", &features::fly::enabled);
    //     ImGui::SliderFloat("Fly Speed", &features::fly::fly_speed, 1, 10);
    //     ImGui::Checkbox("Spin", &features::spin::enabled);
    //     ImGui::SliderFloat("Spin Speed", &features::spin::speed, 0.05, 1.0);
    //   }
    //
    //   if (ImGui::CollapsingHeader("CAMERA")) {
    //     ImGui::Checkbox("Camera Mod", &features::camera::enabled);
    //     ImGui::SliderFloat("Zoom", &features::camera::zoom, 0.1, 5.0);
    //     ImGui::SliderFloat("Offset X", &features::camera::offset_x, -100, 100);
    //     ImGui::SliderFloat("Offset Y", &features::camera::offset_y, -100, 100);
    //   }
    //
    //   if (ImGui::CollapsingHeader("KILLAURA")) {
    //     ImGui::Checkbox("Kill Aura", &features::killaura::enabled);
    //     ImGui::Checkbox("Main Attack", &features::killaura::main_attack);
    //     ImGui::Checkbox("Super", &features::killaura::use_super);
    //     ImGui::Checkbox("Gadget", &features::killaura::use_gadget);
    //     ImGui::Checkbox("No Ball", &features::killaura::no_ball);
    //     ImGui::Checkbox("Wall Check", &features::killaura::wall_check);
    //     ImGui::SliderFloat("HP Threshold", &features::killaura::health_threshold, 0, 1);
    //   }
    //
    //   if (ImGui::CollapsingHeader("AUTO DODGE")) {
    //     ImGui::Checkbox("Auto Dodge", &features::autododge::enabled);
    //     ImGui::SliderInt("Version", &features::autododge::version, 2, 5);
    //     ImGui::Checkbox("Replay Block", &features::autododge::replay_block);
    //   }
    //
    //   if (ImGui::CollapsingHeader("BOLT MODS")) {
    //     ImGui::Checkbox("Bolt Mod", &features::boltmod::enabled);
    //     ImGui::Checkbox("Auto Attack", &features::boltmod::auto_attack);
    //     ImGui::Checkbox("Prediction", &features::boltmod::prediction);
    //     ImGui::Checkbox("Safe Exit", &features::boltmod::safe_exit);
    //     ImGui::Checkbox("Wall Avoidance", &features::boltmod::wall_avoidance);
    //     ImGui::SliderInt("Lookahead", &features::boltmod::wall_lookahead, 1, 20);
    //     ImGui::SliderFloat("Safe HP%", &features::boltmod::safe_exit_hp_threshold, 0, 1);
    //   }
    //
    //   if (ImGui::CollapsingHeader("AUTO FARM")) {
    //     ImGui::Checkbox("Auto Farm", &features::autofarm::enabled);
    //     ImGui::Checkbox("Attack Enemies", &features::autofarm::attack_enemies);
    //     ImGui::Checkbox("Collect Items", &features::autofarm::collect_items);
    //     ImGui::Checkbox("Auto Play Again", &features::autofarm::auto_play_again);
    //   }
    //
    //   if (ImGui::CollapsingHeader("FOLLOW")) {
    //     ImGui::Checkbox("Follow", &features::follow::enabled);
    //     ImGui::SliderInt("Mode", &features::follow::mode, 0, 2);
    //     ImGui::SliderFloat("Distance", &features::follow::follow_distance, 0.5, 10);
    //     ImGui::SliderFloat("Speed", &features::follow::follow_speed, 0.5, 5);
    //   }
    //
    //   if (ImGui::CollapsingHeader("VISUALS")) {
    //     ImGui::Checkbox("Outline", &features::outline::enabled);
    //     ImGui::SliderFloat("R", &features::outline::color_r, 0, 1);
    //     ImGui::SliderFloat("G", &features::outline::color_g, 0, 1);
    //     ImGui::SliderFloat("B", &features::outline::color_b, 0, 1);
    //     ImGui::SliderFloat("Opacity", &features::outline::opacity, 0, 1);
    //     ImGui::Checkbox("Hitbox", &features::hitbox::enabled);
    //     ImGui::Checkbox("Attack Range", &features::hitbox::show_attack_range);
    //     ImGui::Checkbox("Tile Grid", &features::tile_grid::enabled);
    //     ImGui::Checkbox("Teammate HP", &features::respawn_timer::show_teammate_hp);
    //     ImGui::Checkbox("Respawn Timer", &features::respawn_timer::enabled);
    //   }
    //
    //   if (ImGui::CollapsingHeader("SPAM")) {
    //     ImGui::Checkbox("Spray", &features::spray_pin::spray_enabled);
    //     ImGui::SliderInt("Spray Interval", &features::spray_pin::spray_interval, 10, 300);
    //     ImGui::Checkbox("Pin", &features::spray_pin::pin_enabled);
    //     ImGui::SliderInt("Pin Interval", &features::spray_pin::pin_interval, 10, 300);
    //     ImGui::Checkbox("Combat Fire", &features::spray_pin::combat_fire);
    //     ImGui::SliderInt("Fire Interval", &features::spray_pin::combat_fire_interval, 1, 30);
    //   }
    //
    //   if (ImGui::CollapsingHeader("MISC")) {
    //     ImGui::Checkbox("Anti-AFK", &features::antiafk::enabled);
    //     ImGui::SliderInt("Interval", &features::antiafk::interval_ticks, 100, 600);
    //   }
    //
    // }
    // ImGui::End();
}

} // namespace menu
} // namespace ui
