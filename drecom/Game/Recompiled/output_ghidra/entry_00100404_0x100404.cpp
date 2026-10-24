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

// Function: entry_00100404
// Address: 0x100404 - 0x10041c
void entry_00100404_0x100404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100404_0x100404");
#endif

    ctx->pc = 0x100404u;

    // 0x100404: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x100404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x100408: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x100408u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10040c: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x10040cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x100410: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x100414: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x100414u;
    {
        const bool branch_taken_0x100414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100414) {
            ctx->pc = 0x100418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100414u;
            // 0x100418: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10041Cu;
            return;
        }
    }
    ctx->pc = 0x10041Cu;
}
