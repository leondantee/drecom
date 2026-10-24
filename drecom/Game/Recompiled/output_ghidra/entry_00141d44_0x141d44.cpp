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

// Function: entry_00141d44
// Address: 0x141d44 - 0x141d64
void entry_00141d44_0x141d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d44_0x141d44");
#endif

    ctx->pc = 0x141d44u;

    // 0x141d44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d48: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141d4c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x141d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141D54u;
    {
        const bool branch_taken_0x141d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d54) {
            ctx->pc = 0x141D64u;
            return;
        }
    }
    ctx->pc = 0x141D5Cu;
    // 0x141d5c: 0xc06b330  jal         func_1ACCC0
    ctx->pc = 0x141D5Cu;
    SET_GPR_U32(ctx, 31, 0x141D64u);
    ctx->pc = 0x1ACCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACCC0u, 0x141D5Cu, 0x141D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D64u;
}
