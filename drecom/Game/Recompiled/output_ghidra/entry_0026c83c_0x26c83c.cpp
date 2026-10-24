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

// Function: entry_0026c83c
// Address: 0x26c83c - 0x26c878
void entry_0026c83c_0x26c83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c83c_0x26c83c");
#endif

    switch (ctx->pc) {
        case 0x26c844u: goto label_26c844;
        case 0x26c86cu: goto label_26c86c;
        default: break;
    }

    ctx->pc = 0x26c83cu;

    // 0x26c83c: 0xc0bcdd0  jal         func_2F3740
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x2F3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3740u, 0x26C83Cu, 0x26C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c848: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x26c848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x26c84c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26c850: 0x306500c0  andi        $a1, $v1, 0xC0
    ctx->pc = 0x26c850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x26c854: 0x10a0005e  beqz        $a1, . + 4 + (0x5E << 2)
    ctx->pc = 0x26C854u;
    {
        const bool branch_taken_0x26c854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c854) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C85Cu;
    // 0x26c85c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c860: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26c860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26c864: 0xc09b90c  jal         func_26E430
    ctx->pc = 0x26C864u;
    SET_GPR_U32(ctx, 31, 0x26C86Cu);
    ctx->pc = 0x26E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E430u, 0x26C864u, 0x26C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C86Cu;
label_26c86c:
    // 0x26c86c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26c86cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c870: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x26C870u;
    {
        const bool branch_taken_0x26c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c870) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C878u;
}
