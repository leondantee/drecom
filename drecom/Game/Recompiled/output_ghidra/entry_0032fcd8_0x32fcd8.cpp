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

// Function: entry_0032fcd8
// Address: 0x32fcd8 - 0x32fd00
void entry_0032fcd8_0x32fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fcd8_0x32fcd8");
#endif

    switch (ctx->pc) {
        case 0x32fcf8u: goto label_32fcf8;
        default: break;
    }

    ctx->pc = 0x32fcd8u;

    // 0x32fcd8: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x32fcdc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x32fcdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32fce0: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fce4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fce4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fce8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fcec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fcf0: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FCF0u;
    SET_GPR_U32(ctx, 31, 0x32FCF8u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCF0u, 0x32FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCF8u;
label_32fcf8:
    // 0x32fcf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32FCF8u;
    {
        const bool branch_taken_0x32fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fcf8) {
            ctx->pc = 0x32FD54u;
            return;
        }
    }
    ctx->pc = 0x32FD00u;
}
