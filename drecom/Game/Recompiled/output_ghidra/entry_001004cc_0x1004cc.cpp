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

// Function: entry_001004cc
// Address: 0x1004cc - 0x1004e4
void entry_001004cc_0x1004cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004cc_0x1004cc");
#endif

    ctx->pc = 0x1004ccu;

    // 0x1004cc: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1004d0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1004d0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1004d4: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x1004d8: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x1004d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1004dc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1004DCu;
    {
        const bool branch_taken_0x1004dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004dc) {
            ctx->pc = 0x1004E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1004DCu;
            // 0x1004e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1004E4u;
            return;
        }
    }
    ctx->pc = 0x1004E4u;
}
