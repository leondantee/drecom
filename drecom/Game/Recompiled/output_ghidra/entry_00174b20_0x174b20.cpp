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

// Function: entry_00174b20
// Address: 0x174b20 - 0x174b44
void entry_00174b20_0x174b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b20_0x174b20");
#endif

    switch (ctx->pc) {
        case 0x174b38u: goto label_174b38;
        default: break;
    }

    ctx->pc = 0x174b20u;

    // 0x174b20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x174b2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174b30: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B30u;
    SET_GPR_U32(ctx, 31, 0x174B38u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B30u, 0x174B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B38u;
label_174b38:
    // 0x174b38: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174b3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174B3Cu;
    {
        const bool branch_taken_0x174b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b3c) {
            ctx->pc = 0x174B88u;
            return;
        }
    }
    ctx->pc = 0x174B44u;
}
