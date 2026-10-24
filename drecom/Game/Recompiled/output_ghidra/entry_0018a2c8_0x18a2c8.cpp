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

// Function: entry_0018a2c8
// Address: 0x18a2c8 - 0x18a2e0
void entry_0018a2c8_0x18a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a2c8_0x18a2c8");
#endif

    switch (ctx->pc) {
        case 0x18a2d4u: goto label_18a2d4;
        default: break;
    }

    ctx->pc = 0x18a2c8u;

    // 0x18a2c8: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x18a2c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x18a2cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18A2CCu;
    SET_GPR_U32(ctx, 31, 0x18A2D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18A2CCu, 0x18A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2D4u;
label_18a2d4:
    // 0x18a2d4: 0x26f70060  addiu       $s7, $s7, 0x60
    ctx->pc = 0x18a2d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
    // 0x18a2d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a2dc: 0x0  nop
    ctx->pc = 0x18a2dcu;
    // NOP
    ctx->pc = 0x18a2e0u;
}
