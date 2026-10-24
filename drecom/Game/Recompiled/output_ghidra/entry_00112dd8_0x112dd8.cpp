#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00112dd8
// Address: 0x112dd8 - 0x112dfc
void entry_00112dd8_0x112dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112dd8_0x112dd8");
#endif

    switch (ctx->pc) {
        case 0x112decu: goto label_112dec;
        default: break;
    }

    ctx->pc = 0x112dd8u;

    // 0x112dd8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x112dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x112ddc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112de4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x112DE4u;
    SET_GPR_U32(ctx, 31, 0x112DECu);
    ctx->pc = 0x112DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DE4u;
    // 0x112de8: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x112DE4u, 0x112DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DECu;
label_112dec:
    // 0x112dec: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112df0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x112df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112df4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x112df4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x112df8: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x112df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
    ctx->pc = 0x112dfcu;
}
