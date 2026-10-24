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

// Function: entry_0032e644
// Address: 0x32e644 - 0x32e668
void entry_0032e644_0x32e644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e644_0x32e644");
#endif

    switch (ctx->pc) {
        case 0x32e660u: goto label_32e660;
        default: break;
    }

    ctx->pc = 0x32e644u;

    // 0x32e644: 0x8e045dc0  lw          $a0, 0x5DC0($s0)
    ctx->pc = 0x32e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x32e648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32e64c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32E64Cu;
    {
        const bool branch_taken_0x32e64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32e64c) {
            ctx->pc = 0x32E690u;
            return;
        }
    }
    ctx->pc = 0x32E654u;
    // 0x32e654: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x32e654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
    // 0x32e658: 0xc0cba28  jal         func_32E8A0
    ctx->pc = 0x32E658u;
    SET_GPR_U32(ctx, 31, 0x32E660u);
    ctx->pc = 0x32E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8A0u, 0x32E658u, 0x32E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E660u;
label_32e660:
    // 0x32e660: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32E660u;
    {
        const bool branch_taken_0x32e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e660) {
            ctx->pc = 0x32E690u;
            return;
        }
    }
    ctx->pc = 0x32E668u;
}
