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

// Function: default
// Address: 0x26c9d0 - 0x26c9f8
void ps2_default_0x26c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x26c9d0");
#endif

    switch (ctx->pc) {
        case 0x26c9f4u: goto label_26c9f4;
        default: break;
    }

    ctx->pc = 0x26c9d0u;

    // 0x26c9d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c9d4: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26c9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26c9d8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26c9dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26c9dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26c9e0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x26c9e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C9E4u;
    {
        const bool branch_taken_0x26c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c9e4) {
            ctx->pc = 0x26C9F8u;
            return;
        }
    }
    ctx->pc = 0x26C9ECu;
    // 0x26c9ec: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x26C9ECu;
    SET_GPR_U32(ctx, 31, 0x26C9F4u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26C9ECu, 0x26C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9F4u;
label_26c9f4:
    // 0x26c9f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c9f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26c9f8u;
}
