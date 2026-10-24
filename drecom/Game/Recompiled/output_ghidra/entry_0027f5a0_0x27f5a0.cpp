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

// Function: entry_0027f5a0
// Address: 0x27f5a0 - 0x27f5d0
void entry_0027f5a0_0x27f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f5a0_0x27f5a0");
#endif

    switch (ctx->pc) {
        case 0x27f5c0u: goto label_27f5c0;
        default: break;
    }

    ctx->pc = 0x27f5a0u;

    // 0x27f5a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x27f5a4: 0x90220397  lbu         $v0, 0x397($at)
    ctx->pc = 0x27f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0397u));
    // 0x27f5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27f5ac: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27F5ACu;
    {
        const bool branch_taken_0x27f5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5ac) {
            ctx->pc = 0x27F594u;
            return;
        }
    }
    ctx->pc = 0x27F5B4u;
    // 0x27f5b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27f5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f5b8: 0xc062010  jal         func_188040
    ctx->pc = 0x27F5B8u;
    SET_GPR_U32(ctx, 31, 0x27F5C0u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27F5B8u, 0x27F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5C0u;
label_27f5c0:
    // 0x27f5c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27f5c4: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x27f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x27f5c8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x27f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x27f5cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27f5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x27f5d0u;
}
