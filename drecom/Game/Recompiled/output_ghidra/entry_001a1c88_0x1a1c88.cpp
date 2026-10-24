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

// Function: entry_001a1c88
// Address: 0x1a1c88 - 0x1a1ca0
void entry_001a1c88_0x1a1c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c88_0x1a1c88");
#endif

    switch (ctx->pc) {
        case 0x1a1c94u: goto label_1a1c94;
        default: break;
    }

    ctx->pc = 0x1a1c88u;

    // 0x1a1c88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c8c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C94u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A1C8Cu, 0x1A1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C94u;
label_1a1c94:
    // 0x1a1c94: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a1c98: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1C98u;
    {
        const bool branch_taken_0x1a1c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c98) {
            ctx->pc = 0x1A1CE0u;
            return;
        }
    }
    ctx->pc = 0x1A1CA0u;
}
