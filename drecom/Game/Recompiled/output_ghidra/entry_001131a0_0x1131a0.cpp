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

// Function: entry_001131a0
// Address: 0x1131a0 - 0x1131d0
void entry_001131a0_0x1131a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001131a0_0x1131a0");
#endif

    switch (ctx->pc) {
        case 0x1131b4u: goto label_1131b4;
        default: break;
    }

    ctx->pc = 0x1131a0u;

    // 0x1131a0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1131a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1131a4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1131a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1131a8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1131a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131ac: 0xc045284  jal         func_114A10
    ctx->pc = 0x1131ACu;
    SET_GPR_U32(ctx, 31, 0x1131B4u);
    ctx->pc = 0x1131B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131ACu;
    // 0x1131b0: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x1131ACu, 0x1131B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131B4u;
label_1131b4:
    // 0x1131b4: 0x6800015  bltz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1131B4u;
    {
        const bool branch_taken_0x1131b4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1131B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B4u;
        // 0x1131b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131b4) {
            ctx->pc = 0x11320Cu;
            return;
        }
    }
    ctx->pc = 0x1131BCu;
    // 0x1131bc: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x1131bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1131c0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1131c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1131c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1131c8: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1131cc: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x1131ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    ctx->pc = 0x1131d0u;
}
