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

// Function: entry_0011e444
// Address: 0x11e444 - 0x11e484
void entry_0011e444_0x11e444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e444_0x11e444");
#endif

    ctx->pc = 0x11e444u;

    // 0x11e444: 0x1012  mflo        $v0
    ctx->pc = 0x11e444u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e448: 0x1810  mfhi        $v1
    ctx->pc = 0x11e448u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e44c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e450: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e454: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e458: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11e458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e45c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e460: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E484u;
            return;
        }
    }
    ctx->pc = 0x11E46Cu;
    // 0x11e46c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e470: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E474u;
        // 0x11e478: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E484u;
            return;
        }
    }
    ctx->pc = 0x11E47Cu;
    // 0x11e47c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E47Cu;
    {
        const bool branch_taken_0x11e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e47c) {
            ctx->pc = 0x11E480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E47Cu;
            // 0x11e480: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E484u;
            return;
        }
    }
    ctx->pc = 0x11E484u;
}
