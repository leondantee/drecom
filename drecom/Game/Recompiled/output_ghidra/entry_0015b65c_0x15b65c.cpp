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

// Function: entry_0015b65c
// Address: 0x15b65c - 0x15b688
void entry_0015b65c_0x15b65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b65c_0x15b65c");
#endif

    switch (ctx->pc) {
        case 0x15b674u: goto label_15b674;
        default: break;
    }

    ctx->pc = 0x15b65cu;

    // 0x15b65c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b660: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B660u;
    {
        const bool branch_taken_0x15b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b660) {
            ctx->pc = 0x15B688u;
            return;
        }
    }
    ctx->pc = 0x15B668u;
    // 0x15b668: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b66c: 0xc0570c0  jal         func_15C300
    ctx->pc = 0x15B66Cu;
    SET_GPR_U32(ctx, 31, 0x15B674u);
    ctx->pc = 0x15C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C300u, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B688u;
            return;
        }
    }
    ctx->pc = 0x15B67Cu;
    // 0x15b67c: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15b680: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15b680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b684: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15b684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15b688u;
}
