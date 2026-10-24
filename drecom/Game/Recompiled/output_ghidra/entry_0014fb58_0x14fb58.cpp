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

// Function: entry_0014fb58
// Address: 0x14fb58 - 0x14fb7c
void entry_0014fb58_0x14fb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb58_0x14fb58");
#endif

    switch (ctx->pc) {
        case 0x14fb74u: goto label_14fb74;
        default: break;
    }

    ctx->pc = 0x14fb58u;

    // 0x14fb58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fb5c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fb60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB60u;
    {
        const bool branch_taken_0x14fb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb60) {
            ctx->pc = 0x14FB7Cu;
            return;
        }
    }
    ctx->pc = 0x14FB68u;
    // 0x14fb68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fb68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14fb6c: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14FB6Cu;
    SET_GPR_U32(ctx, 31, 0x14FB74u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14FB6Cu, 0x14FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB74u;
label_14fb74:
    // 0x14fb74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FB74u;
    {
        const bool branch_taken_0x14fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb74) {
            ctx->pc = 0x14FBB4u;
            return;
        }
    }
    ctx->pc = 0x14FB7Cu;
}
