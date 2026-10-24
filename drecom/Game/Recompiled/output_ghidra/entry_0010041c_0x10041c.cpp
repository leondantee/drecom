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

// Function: entry_0010041c
// Address: 0x10041c - 0x10043c
void entry_0010041c_0x10041c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010041c_0x10041c");
#endif

    ctx->pc = 0x10041cu;

    // 0x10041c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x10041cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x100420: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x100420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x100424: 0x1012  mflo        $v0
    ctx->pc = 0x100424u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x100428: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x100428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x10042c: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x10042cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x100430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x100430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x100434: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x100434u;
    {
        const bool branch_taken_0x100434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100434u;
        // 0x100438: 0x64e3027c  daddiu      $v1, $a3, 0x27C (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)636);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100434) {
            ctx->pc = 0x100500u;
            return;
        }
    }
    ctx->pc = 0x10043Cu;
}
