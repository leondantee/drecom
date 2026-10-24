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

// Function: entry_0032fcb0
// Address: 0x32fcb0 - 0x32fcd8
void entry_0032fcb0_0x32fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fcb0_0x32fcb0");
#endif

    switch (ctx->pc) {
        case 0x32fcd0u: goto label_32fcd0;
        default: break;
    }

    ctx->pc = 0x32fcb0u;

    // 0x32fcb0: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x32fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x32fcb4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fcb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fcb8: 0x26680520  addiu       $t0, $s3, 0x520
    ctx->pc = 0x32fcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fcbc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x32fcbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x32fcc0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fcc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fcc8: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FCC8u;
    SET_GPR_U32(ctx, 31, 0x32FCD0u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCC8u, 0x32FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCD0u;
label_32fcd0:
    // 0x32fcd0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x32FCD0u;
    {
        const bool branch_taken_0x32fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fcd0) {
            ctx->pc = 0x32FD54u;
            return;
        }
    }
    ctx->pc = 0x32FCD8u;
}
