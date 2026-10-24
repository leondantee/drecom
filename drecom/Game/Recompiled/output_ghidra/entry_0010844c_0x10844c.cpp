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

// Function: entry_0010844c
// Address: 0x10844c - 0x108468
void entry_0010844c_0x10844c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010844c_0x10844c");
#endif

    ctx->pc = 0x10844cu;

    // 0x10844c: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x108450: 0x445818  mult        $t3, $v0, $a0
    ctx->pc = 0x108450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x108454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108454u;
    {
        const bool branch_taken_0x108454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xb5103  sra         $t2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108454) {
            ctx->pc = 0x108468u;
            return;
        }
    }
    ctx->pc = 0x10845Cu;
    // 0x10845c: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x108460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108460u;
    {
        const bool branch_taken_0x108460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108460u;
        // 0x108464: 0x447018  mult        $t6, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108460) {
            ctx->pc = 0x10846Cu;
            return;
        }
    }
    ctx->pc = 0x108468u;
}
