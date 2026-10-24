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

// Function: entry_0020c970
// Address: 0x20c970 - 0x20c998
void entry_0020c970_0x20c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c970_0x20c970");
#endif

    ctx->pc = 0x20c970u;

    // 0x20c970: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c974: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c978: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c97c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C980u;
    {
        const bool branch_taken_0x20c980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c980) {
            ctx->pc = 0x20C998u;
            return;
        }
    }
    ctx->pc = 0x20C988u;
    // 0x20c988: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c98c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c990: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C990u;
    SET_GPR_U32(ctx, 31, 0x20C998u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C990u, 0x20C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C998u;
}
