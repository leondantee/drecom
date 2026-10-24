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

// Function: entry_0011b620
// Address: 0x11b620 - 0x11b638
void entry_0011b620_0x11b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b620_0x11b620");
#endif

    ctx->pc = 0x11b620u;

    // 0x11b620: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b624: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B628u;
        // 0x11b62c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B660u;
            return;
        }
    }
    ctx->pc = 0x11B630u;
    // 0x11b630: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b634: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x11b634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    ctx->pc = 0x11b638u;
}
